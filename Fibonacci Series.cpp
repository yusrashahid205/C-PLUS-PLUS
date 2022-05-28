#include <iostream>
using namespace std;
int main()
 {
    {
    int f,num;	
	int no_1=0,no_2=1,nextterm=0;
	cout<<"enter any integer number between 1 till 7: "<<endl;
	cin>>f;
	cout<<"Fibonacci series: ";
	cout<<no_1<<","<<no_2;
	
	for(int i=1;i<=7;i++)
	{
		nextterm=no_1+no_2;
		cout<<","<<nextterm;
		no_1=no_2;
		no_2=nextterm;
	}

	
	if(num==nextterm)
	{
		cout<<"\n"<<"this number ==>"<<num<<" is present in Fibonacci Series"<<endl;
	}
	else 
	{
		cout<<"\n"<<"this number ==>"<<num<<" is not present in Fibonacci Series"<<endl;
	}
	return 0;
	}
}
