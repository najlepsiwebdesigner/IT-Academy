// queuetp.h -- �ablona fronty s vno�enou t��dou
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Item>
class QueueTP
{
private:
	enum {Q_SIZE = 10};
	// Node je definice vno�en� t��dy
	class Node
	{
	public:
		Item item;
		Node * next;
		Node(const Item & i):item(i), next(0){ }
	};
	Node * front; // ukazatel na za��tek fronty
	Node * rear; // ukazatel na konec fronty
	int items; // aktu�ln� po�et polo�ek fronty
	const int qsize; // maxim�ln� po�et polo�ek fronty
	QueueTP(const QueueTP & q) : qsize(0) {}
	QueueTP & operator=(const QueueTP & q) { return *this; }
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const
	{
	return items == 0;
	}
	bool isfull() const
	{
	return items == qsize;
	}
	int queuecount() const
	{
	return items;
	}
	bool enqueue(const Item &item); // p�id� polo�ku na konec fronty
	bool dequeue(Item &item); // odebere polo�ku z fronty
};

// metody �ablony QueueTP
template <class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
	front = rear = 0;
	items = 0;
}
template <class Item>
QueueTP<Item>::~QueueTP()
{
	Node * temp;
	while (front != 0) // dokud fronta nen� pr�zdn�
	{
		temp = front; // ulo�� adresu prvn� polo�ky
		front = front->next;// nastav� ukazatel na n�sleduj�c� polo�ku
		delete temp; // zru�� p�vodn� prvn� polo�ku
	}
}

// P�id�n� polo�ky na konec fronty
template <class Item>
bool QueueTP<Item>::enqueue(const Item & item)
{
	if (isfull())
		return false;
	Node * add = new Node(item); // vytvo�� uzel
	if (add == NULL)
		return false; // konec v p��pad� nedostatku pam�ti
	items++;
	if (front == 0) // jestli�e je fronta pr�zdn�,
		front = add; // p�id� polo�ku na za��tek fronty
	else
		rear->next = add; // jinak na konec fronty
	rear = add; // ukazatel na konec fronty ukazuje na nov� uzel
	return true;
}

// Ulo�� prvn� polo�ku do prom�nn� item a odstran� ji z fronty
template <class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
	if (front == 0)
		return false;
	item = front->item; // nastav� item na prvn� polo�ku fronty
	items--;
	Node * temp = front; // ulo�� adresu prvn� polo�ky
	front = front->next; // nastav� za��tek na n�sleduj�c� polo�ku
	delete temp; // zru�� p�vodn� prvn� polo�ku
	if (items == 0)
		rear = 0;
	return true;
}

#endif
