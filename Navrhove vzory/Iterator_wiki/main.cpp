#include <iostream>
using namespace std;

class IteratorCannotMoveToNext{}; // Error class

// The Node class represents a single element in the linked list. 
 // The node has a next node and a previous node, so that the user 
 // may move from one position to the next, or step back a single 
 // position. Notice that the traversal of a linked list is O(N), 
 // as is searching, since the list is not ordered.
 class Node
 {
 public:
     Node():mNextNode(0),mPrevNode(0),mValue(0){}
     Node *mNextNode;
     Node *mPrevNode;
     int mValue;
 };



 /*
  *  The iterator class knows the internals of the linked list, so that it 
  *  may move from one element to the next. In this implementation, I have 
  *  chosen the classic traversal method of overloading the increment 
  *  operators. More thorough implementations of a bi-directional linked 
  *  list would include decrement operators so that the iterator may move 
  *  in the opposite direction.
  */
 class Iterator
 {
 public:
     Iterator(Node *position):mCurrNode(position){}
     // Prefix increment
     const Iterator &operator++()
     {
         if(mCurrNode == 0 || mCurrNode->mNextNode == 0)
             throw IteratorCannotMoveToNext();
         mCurrNode = mCurrNode->mNextNode;
         return *this;
     }
     // Postfix increment
     Iterator operator++(int)
     {
         Iterator tempItr = *this;
         ++(*this);
         return tempItr;
     }
     // Dereferencing operator returns the current node, which should then 
     // be dereferenced for the int. TODO: Check syntax for overloading 
     // dereferencing operator
     Node * operator*()
     {return mCurrNode;}
     // TODO: implement arrow operator and clean up example usage following




 private:
     Node *mCurrNode;
 };




class MyIntLList
 {
 public:
     
     MyIntLList():mSize(0) 
     {}
     ~MyIntLList()
     {
         while(!Empty())
             pop_front();
     } // See expansion for further implementation;
     int Size() const {return mSize;}
     // Add this value to the end of the list
     void push_back(int value)
     {
         Node *newNode = new Node;
         newNode->mValue = value;
         newNode->mPrevNode = mTail;
         mTail->mNextNode = newNode;
         mTail = newNode;
         ++mSize;
     }
     // Remove the value from the beginning of the list
     void pop_front()
     {
         if(Empty())
             return;
         Node *tmpnode = mHead;
         mHead = mHead->mNextNode;
         delete tmpnode;
         --mSize;
     }
     bool Empty()
     {return mSize == 0;}
 
     // This is where the iterator definition will go, 
     // but lets finish the definition of the list, first
 
     // The following two functions make it possible to create 
     // iterators for an instance of this class.
     // First position for iterators should be the first element in the container.
     Iterator Begin(){return Iterator(mHead);}
     // Final position for iterators should be one past the last element in the container.
     Iterator End(){return Iterator(0);}


 private:
     Node *mHead;
     Node *mTail;
     int mSize;
 };

	 



int main() {

	 // Create a list
	 MyIntLList myList;
	 // Add some items to the list
	 for(int i = 0; i < 10; ++i) {
	     myList.push_back(i);
	     cout << i;	
	 }
		
	 // Move through the list, adding 42 to each item.
	 for(MyIntLList::Iterator it = myList.Begin(); it != myList.End(); ++it)
	     (*it)->mValue += 42;

	return 0;
}