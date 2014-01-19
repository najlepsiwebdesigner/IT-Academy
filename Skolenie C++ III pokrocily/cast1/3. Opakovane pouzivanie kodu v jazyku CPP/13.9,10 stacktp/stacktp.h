// stacktp.h - �ablona z�sobn�ku
#ifndef STACKTP_H_
#define STACKTP_H_
template <class Type>
class Stack
{
private:
	enum {MAX = 10};		// specifick� konstanta t��dy
	Type items[MAX];		// obsahuje polo�ky z�sobn�ku
	int top; 					// index vrchn� polo�ky z�sobn�ku
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const Type & item); 	// p�id� polo�ku do z�sobn�ku
	bool pop(Type & item); 				// odebere vrchn� polo�ku
};

template <class Type>
Stack<Type>::Stack()
{
	top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
	return top == 0;
}

template <class Type>
bool Stack<Type>::isfull()
{
	return top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
template <class Type>
bool Stack<Type>::pop(Type & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

#endif
