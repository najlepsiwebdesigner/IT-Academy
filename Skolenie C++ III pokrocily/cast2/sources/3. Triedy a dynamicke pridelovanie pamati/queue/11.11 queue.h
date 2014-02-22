// queue.h -- rozhran� t��dy Queue
#ifndef QUEUE_H_
#define QUEUE_H_
// Tato fronta bude obsahovat polo�ky t��dy Customer
class Customer
{
private:
	long arrive; // �as p��chodu z�kazn�ka
	int processtime;// doba odbaven� z�kazn�ka
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
{
private:
// definice s platnost� uvnit� t��dy
	// Node definice vno�en� struktury existuj�c� pouze uvnit� t��dy
	struct Node { Item item; struct Node * next;};
	enum {Q_SIZE = 10};
// priv�tn� �lenov� t��dy
	Node * front; // ukazatel na za��tek fronty
	Node * rear; // ukazatel na konec fronty
	int items; // aktu�ln� po�et polo�ek fronty
	const int qsize;// maxim�ln� po�et polo�ek fronty
	// preventivn� definice nutn� pro zamezen� ve�ejn�ho kop�rov�n�
	Queue(const Queue & q) : qsize(0) { }
	Queue & operator=(const Queue & q) { return *this;}
public:
	Queue(int qs = Q_SIZE); // vytvo�� frontu s limitem qs
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item &item); // p�id� polo�ku na konec
	bool dequeue(Item &item); // odebere polo�ku ze za��tku
};
#endif
