#include "Stack-Lifo.h"
#include<iostream>
#include<string>

bool isMatchingPair(char opening, char closing) {
	return  (opening == '(' && closing == ')') ||
		    (opening == '{' && closing == '}') ||
		    (opening == '[' && closing == ']');
}

int main() {
	const int maxLenght = 100;
	char input[maxLenght];
	std::cout << "Enter the string to check (ending with ';'): ";
	std::cin.getline(input, maxLenght);

	Stack<int> stack;
	char errorPosition[maxLenght];
	int errorIndex = -1;
	
	for (int i = 0; input[i] != '\0'; ++i) {
		char ch = input[i];

		if (ch == '(',  ch == '{',  ch == '[') {
			stack.push(ch);
		}

		else if (ch == ')', ch == '}', ch == ']') {
			if (stack.isEmpty())
			{
				errorIndex = i;
				break;
			}

			if (!isMatchingPair(stack.top(), ch)){
				errorIndex = i;
				break;
			}
			stack.pop();
	    }
		else if (ch == ';') {
			break;
		}
    }
	
	if (!stack.isEmpty())
	{
		errorIndex = -1;
	}

	if (errorIndex == -1){
		std::cout << "String GOOD!!!" << std::endl;
	}

	else {
		for (int i = 0; i <= errorIndex; ++i)
		{
			errorPosition[i] = input[i];
		}
		errorPosition[errorIndex + 1] = '\0';
		std::cout << "String NOT GOOD!!! to: " << errorPosition << std::endl;
	}

	return 0;
}