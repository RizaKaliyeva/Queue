#pragma once
#include"Library.h"

template<typename T>
class Queue_list {
private:
	class Node {
	public:
		T data;
		Node* nextPtr;


		Node(T data) {
			this->data = data;
			this->nextPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	size_t count;

public:
	Queue_list() {
		firstPtr = nullptr;
		lastPtr = nullptr;
		count = 0;
	}

	Queue_list(const Queue_list& obj) {
		firstPtr = obj.firstPtr;
		lastPtr = obj.lastPtr;
		count = obj.count;
	}

	void push(T data);
	void pop();

	size_t size();
	bool empty();

	T& front();
	T& back();

	~Queue_list();

};


