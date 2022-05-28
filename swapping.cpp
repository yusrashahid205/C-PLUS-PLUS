#include<iostream>
using namespace std;
int main()
{
	int num_1,num_2;
	int swap;
	num_1=200;
	cout<<"the value of first number is:"<<num_1<<endl;
	num_2=400;
	cout<<"the value of second number is:"<<num_2<<endl;
	swap=num_1;
	num_1=num_2;
	num_2=swap;
	cout<<"AFTER SWAPPING"<<endl;
	cout<<"the value of first number will be:"<<num_1<<endl;
	cout<<"the value  of second number will be:"<<num_2<<endl;
	return 0;
	
}
