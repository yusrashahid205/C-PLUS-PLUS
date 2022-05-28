#include<iostream>
using namespace std;
int main()
{
	int total,sal,yos,inc;
	float bonus=0.05;
	cout<<"Enter your salary:"<<endl;
	cin>>sal;
	cout<<"Enter your year of service:"<<endl;
	cin>>yos;
	if(yos>=5)
	{
		cout<<"You will get a bonus of 5 percent per year"<<endl;
		inc=sal*0.05;
		cout<<"your net bonus amount  is ="<<inc<<endl;
	}
	else
	{
		cout<<"complete your year of service"<<endl;
	}
	return 0;
}
