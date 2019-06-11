//Adithya Krishnan
//C++ program-Task 2-to check if the given number is even or odd.
#include<iostream>
int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;
	if(num%2==0)
	std::cout<<num<<" is even. ";
	else
	std::cout<<num<<" is odd. ";
}
