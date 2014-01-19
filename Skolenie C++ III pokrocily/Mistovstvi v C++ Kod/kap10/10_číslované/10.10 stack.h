// stack.h -- definice t��dy pro z�sobn�k ADT
#ifndef _STACK_H_
#define _STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum {MAX = 10}; 	// specifick� konstanta t��dy
	Item items[MAX]; 	// m�sto pro ulo�en� polo�ek
	int top; 					// index polo�ky na vrcholu z�sobn�ku
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() vrac� false, jestli�e je z�sobn�k ji� pln�, jinak vrac� true
	bool push(const Item & item); 		// p�id� polo�ku do z�sobn�ku
	// pop() vrac� false, jestli�e je z�sobn�k ji� pr�zdn�, jinak vrac� true
	bool pop(Item & item); 					// odebere horn� polo�ku ze z�sobn�ku
};
#endif
