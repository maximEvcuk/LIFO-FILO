#pragma once


#include"Array.h"

template <typename T>
class Stack {
private:
	Array<T> arr; // Використання класу Array для зберігання 

public:
	Stack(size_t initialCapacity = 10);
	void push(const T& value);
	void pop();
	T top() const;
	void clear();
	bool isEmpty() const;
	size_t size() const;
};