#include "Stack-Lifo.h"
#include<iostream>

int main() {
	Stack<int> stack;

	for (int i = 0; i < 10; ++i)
	{
		stack.push(i);
		std::cout << "Pushed: " << i << std::endl;
	}

	std::cout << "Current size of stack: "<< stack.size() << std::endl;

    std::cout << "Top element: " << stack.top() << std::endl;

	while (stack.isEmpty())
	{
		std::cout << "Popping: " << stack.top() << std::endl;
		stack.pop();
	}

	std::cout << "Stack cleared. Is empty: " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

	return 0;
}