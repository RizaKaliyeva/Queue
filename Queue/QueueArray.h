#pragma once
#include "Library.h"
template<typename type> class Queue_arr {
private:
	type *els;
	size_t length;
	size_t buf_size;

public:
	Queue_arr();
	Queue_arr(type *mass, int n);
	Queue_arr(const Queue_arr& obj);

	type& front();
	type& back();

	void push(type e);
	void pop();
	size_t size();
	bool empty();

	
	~Queue_arr();

};