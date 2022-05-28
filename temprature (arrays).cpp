#include<iostream>
using namespace std;
int main()
{
	float temp[7],avg,sum;
	int i;
	for(i=0;i<7;i++)
	{
		cout<<"Enter the temprature of today:"<<endl;
		cin>>temp[i];
	}
	for(i=0;i<7;i++)
	{
		cout<<"temprature will be "<<temp[i]<<" centigrade at "<<i<<endl;
		sum=sum+temp[i];
	}
	avg=sum/7;
	cout<<"-------------------------------------------"<<endl;
	cout<<"The average temprature of the week will be:"<<avg<<endl;
	return 0;
}
