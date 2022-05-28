#include<iostream>
using namespace std;
int main()
{
	int bsal;
	float EA,HRA,MA,TA,IT,PF;
	float TAXCUT,ALLOWANCE;
	float net_sal;
	cout<<"Enter your basic salary: "<<endl;
	cin>>bsal;
	EA=(bsal*12)/100;
	HRA=(bsal*25)/100;
	MA=(bsal*15)/100;
	TA=(bsal*10)/100;
	PF=(bsal*10)/100;
	IT=(bsal*15)/100;
	TAXCUT=PF-IT;
	ALLOWANCE=bsal+EA+HRA+TA;
	net_sal=ALLOWANCE-TAXCUT;
	cout<<"The net salary of the employee is: "<<net_sal<<endl;
	cout<<"the allowance is:"<<ALLOWANCE<<endl;
	cout<<"the taxcut is :"<<TAXCUT<<endl;
	return 0;
}
