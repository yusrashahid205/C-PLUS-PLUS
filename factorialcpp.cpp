#include<iostream>
using namespace std;
int main(){
	int num1,fac=1;
	cout<<"Enter any number to count it's factorial:"<<endl;
	cin>>num1;
	for(int i=1;i>=fac;i++)
	{
		fac=fac*i;
	}
	cout<<fac;
	return 0;
}
