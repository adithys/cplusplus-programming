//Adithya Krishnan
//C++-Task 5-Largest and smallest element in array
#include<iostream>
int main()
{
	int A[100],size,i,max,min;
	std::cout<<"Array size: ";
	std::cin>>size;
	std::cout<<"Array: ";
	for(i=0;i<size;i++)
	  std::cin>>A[i];
	max=A[0];
	for(i=0;i<size;i++)
	  {
	  	if(max<A[i])
	  	  max=A[i];
	  }  
	min=A[0];
	for(i=0;i<size;i++)
	  {
	  	if(min>A[i])
	  	  min=A[i];
	  } 
	std::cout<<"Largest element in the array:"<<max<<"\n";
	std::cout<<"Smallest element in the array:"<<min;   
}
