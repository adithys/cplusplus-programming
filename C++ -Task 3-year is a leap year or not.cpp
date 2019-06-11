//Adithya Krishnan
//C++ program-task 3-to check if the given year is a leap year
#include<iostream>
int main()
{
	long int year;
	std::cout<<"Enter the year: ";
	std::cin>>year;
	if(year%4==0)
	  {
	  	if(year%100==0)
	  	  {
	  	  	if(year%400==0)
	  	  	  std::cout<<year<<" is a leap year";
	  	  	else
		      std::cout<<year<<" is not a leap year";  
	   	  }
	   	else
		      std::cout<<year<<" is a leap year";
	  }
	  else
		      std::cout<<year<<" is not a leap year";
}
