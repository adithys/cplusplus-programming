//C++ program to calculate sum of all the elements of an array.
#include<iostream>
int main()
{
	int A[100],i,size,sum=0;
	std::cout<<"Array size: ";
	std::cin>>size;
	std::cout<<"Array elements: ";
	for(i=0;i<size;i++)
	  std::cin>>A[i];
	for(i=0;i<size;i++)
	  sum+=A[i];
	std::cout<<"Sum of elements of the array is: "<<sum;    
}
