#include"Stack-Lifo.h"
#include<stdexcept>


template <typename T>
Stack<T>::Stack(size_t initialCapacity) : arr(initialCapacity) {}

template <typename T>
void Stack<T>::push(const T& value) {
	arr.append(value);
}

template <typename T>
void Stack<T>::pop() {
	if (arr.getSize() == 0){
		throw std::out_of_range("Stack is empty. Cannot  pop.");
	}
	 arr.erase(arr.getSize() - 1);
}

template <typename T>
T Stack<T>::top() const {
	if (arr.getSize() == 0){
		throw std::out_of_range("Stack is empty. Cannot access top.");
	}
	return arr[arr.getSize() - 1];
}

template <typename T>
void Stack<T>::clear() {
	arr.clear();
}

template <typename T>
bool Stack<T>::isEmpty() const {
	return arr.getSize() == 0;
}

template <typename T>
size_t Stack<T>::size() const {
	return arr.getSize() ;
}

template class Stack<int>;