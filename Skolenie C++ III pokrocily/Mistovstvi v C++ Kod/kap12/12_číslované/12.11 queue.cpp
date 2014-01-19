// queue.cpp - metody t��dy Customer a Queue
#include "queue.h"
#include <cstdlib> // (nebo stdlib.h) pro rand()
// metody t��dy Queue
Queue::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node * temp;
	while (front != NULL) // dokud fronta nen� pr�zdn�
	{
		temp = front; // ulo�� adresu prvn� polo�ky
		front = front->next; // nastav� ukazatel na dal�� polo�ku
		delete temp; // zru�� p�vodn� prvn� polo�ku
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

// Add item to queue
bool Queue::enqueue(const Item & item)
{
	if (isfull())
		return false;
	Node * add = new Node; // vytvo�� polo�ku
	if (add == NULL)
		return false; // n�vrat p�i chyb�
	add->item = item; // nastav� ukazatele  polo�ky
	add->next = NULL;
	items++;
	if (front == NULL) // pokud je fronta pr�zdn�
		front = add; // um�st� polo�ku na za��tek
	else
		rear->next = add; // jinak na konec
	rear = add; // nastav� ukazatel rear na novou polo�ku
	return true;
}

// Um�st� prvn� polo�ku do prom�nn� item a odebere z fronty
bool Queue::dequeue(Item & item)
{
	if (front == NULL)
		return false;
	item = front->item; // nastav� ukazatel na prvn� polo�ku fronty
	items--;
	Node * temp = front; // ulo�� adresu prvn� polo�ky
	front = front->next; // nastav� ukazatel front na dal�� polo�ku
	delete temp; // zru�� p�edchoz� prvn� polo�ku
	if (items == 0)
		rear = NULL;
	return true;
}

// metoda t��dy Customer

// kdy� z�kazn�k p�ijde, nastav� se
// �as p��chodu do prom�nn� when a do prom�nn� p�edstavuj�c�
// dobu odbaven� se nastav� n�hodn� hodnota v rozsahu 1 - 3.
void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}
