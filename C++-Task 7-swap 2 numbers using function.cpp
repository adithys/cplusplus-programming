//Adithya Krishnan
//C++ program-Task 7-to swap 2 numbers using function
#include<iostream>
void swap(int a,int b);
int main()
{
	int x,y;
	std::cout<<"Number 1: ";
	std::cin>>x;
	std::cout<<"Number 2: ";
	std::cin>>y;
	swap(x,y);	
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	std::cout<<"Swapped values are: \nNumber 1: "<<a<<"\nNumber 2: "<<b;
}
