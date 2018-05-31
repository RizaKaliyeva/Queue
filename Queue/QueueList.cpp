#include "QueueList.h"

template<typename T>
void Queue_list<T>::push(T data)
{
	if (count == 0) {
		this->firstPtr = new Node(data);
		this->lastPtr = firstPtr;
	}
	else
	{
		lastPtr->nextPtr = new Node(data);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}

template<typename T>
void Queue_list<T>::pop()
{
	if (count == 0) {
		delete firstPtr;
	}
	else
	{
		Node *curPtr;
		curPtr = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = curPtr;
	}
	count--;
}

template<typename T>
size_t Queue_list<T>::size()
{
	return count;
}

template<typename T>
bool Queue_list<T>::empty()
{
	return (size() == 0);
}

template<typename T>
T & Queue_list<T>::front()
{
	return this->firstPtr->data;
}

template<typename T>
T & Queue_list<T>::back()
{
	return this->lastPtr->data;
}

template<typename T>
Queue_list<T>::~Queue_list()
{
	Node *curPtr;
	while (firstPtr != nullptr) {
		curPtr = firstPtr->nextPtr;
		delete firstPtr;
		firstPtr = curPtr;
	}
	delete firstPtr;
}