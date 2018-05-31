#include"QueueArray.h"


template<typename type>
inline Queue_arr<type>::Queue_arr()
{
	buf_size = 0;
	length = 0;
	els = nullptr;
}

template<typename type>
Queue_arr<type>::Queue_arr(type * mass, int n)
{
	this->length = n;
	els = new type[this->length];
	this->buf_size = this->length;
	for (int i = 0;i < length; i++)
		this->els[i] = mass[i];
}

template<typename type>
Queue_arr<type>::Queue_arr(const Queue_arr & obj)
{
	this->length = obj.length;
	this->buf_size = obj.buf_size;
	this->els = new type[length];
	for (int i = 0;i < length;i++)
		els[i] = obj.els[i];
}

template<typename type>
type & Queue_arr<type>::front()
{
	return els[0];
}

template<typename type>
type & Queue_arr<type>::back()
{
	return els[length - 1];
}

template<typename type>
void Queue_arr<type>::push(type e)
{
	if (buf_size == 0) {
		buf_size = 2;
		els = new type[buf_size];
	}
	else if (buf_size <= length) {
		buf_size *= 2;
		type *tmp = new type[buf_size];
		for (int i = 0;i < length;i++)
			tmp[i] = els[i];
		delete[] els;
		els = tmp;
	}
	els[length++] = e;
}

template<typename type>
void Queue_arr<type>::pop()
{
	for (int i = 0;i < length;i++)
		els[i] = els[i + 1];
	length--;
}

template<typename type>
size_t Queue_arr<type>::size()
{
	return length;
}

template<typename type>
bool Queue_arr<type>::empty()
{
	return (size() == 0);
}


template<typename type>
Queue_arr<type>::~Queue_arr()
{
	delete[]els;
	els = nullptr;
}