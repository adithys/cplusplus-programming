//Adithya Krishnan
//C++-Task 10-Convert the string entered to lowercase without using function
#include<iostream>
#include<stdio.h>
int main()
{
	char A[100];
	int i;
	std::cout<<"Enter a string or a sentence: ";
	gets(A);
	for(i=0;A[i]!='\0';i++)
	  {
	  	if(A[i]>='A'&&A[i]<='Z')
	  	  A[i]+=32;
	  }
	std::cout<<"Sentence or string in lowercase: "<<A;  
}
