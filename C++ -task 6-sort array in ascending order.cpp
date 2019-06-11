//Adithya Krishnan
//C++ program-Task 6-Sort array elements in ascending order(using bubblesort)
#include<iostream>
int main()
{
	int A[100],size,i,j;
	std::cout<<"Array size: ";
	std::cin>>size;
	std::cout<<"Array: ";
	for(i=0;i<size;i++)
	  std::cin>>A[i];
	//Bubblesort array in ascending order
	for(i=0;i<size-1;i++)
	  {
	  	for(j=0;j<size-i-1;j++)
	  	  {
	  	  	if(A[j]>A[j+1])
	  	  	  {
	  	  	  	A[j]=A[j]+A[j+1];
	  	  	  	A[j+1]=A[j]-A[j+1];
	  	  	  	A[j]=A[j]-A[j+1];
			  }
		  }
	  } 
	std::cout<<"Array as sorted in ascending order: ";
	for(i=0;i<size;i++)
	  std::cout<<A[i]<<" ";   
}
