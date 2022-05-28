#include<iostream>
using namespace std;
int main()
{
	int num[8],i;
	for(i=0;i<9;i++)
	{
		cout<<"Enter any number:"<<endl;
		cin>>num[i];
	}
	for(i=0;i<9;i++)
	{
		cout<<"the number you entered "<<num[i]<<" will be at location "<<i<<endl;
	}
	return 0;
}
