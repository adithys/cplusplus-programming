//Adithya Krishnan
//C++ program-Task 9-to convert specified days into years, weeks and days
#include<iostream>
int main()
{
	int yr,wk,day,mth;
	std::cout<<"Enter the days: ";
	std::cin>>day;
	yr=day/365;
	day=day%365;
	wk=day/7;
	day=day%7;
	std::cout<<"\aYears: "<<yr<<"\nWeeks: "<<wk<<"\nDays: "<<day;
}
