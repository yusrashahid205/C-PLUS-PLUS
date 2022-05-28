#include<iostream>
using namespace std;
char grades (int &a,int&b,int&c)
{
	int sum,avg;
	sum=a+b+c;
	avg=sum/3;
	cout<<"your average = "<<avg<<endl;
	if (avg<=100 && avg>=90)
	{
		cout<<"you have got grade A"<<endl;
	}
	else if (avg<=89 && avg>=80)
	{
		cout<<"you have got grade B"<<endl;
	}
	else if (avg<=79 && avg>=70)
	{
		cout<<"you have got grade C"<<endl;
	}
	else if (avg<=69 && avg>=60)
	{
		cout<<"you have got grade D"<<endl;
	}
	else if (avg<=59 && avg>=0) 
	{
	    cout<<"you have got grade F"<<endl;
		cout<<"you are fail!"<<endl;	
	}
	return avg;
} 
int main()
{
	int m1,m2,m3,result;
	cout<<"GRADE A =100-90 marks"<<endl;
	cout<<"GRADE B =89-80  marks"<<endl;
	cout<<"GRADE C =79-70  marks"<<endl;
	cout<<"GRADE D =69-60  marks"<<endl;
	cout<<"GRADE F =50-0   marks"<<endl;
	cout<<"-----------------------------"<<endl;
   	cout<<"enter your marks for subject 1:"<<endl;
	cin>>m1;
	cout<<"enter your marks for subject 2:"<<endl;
	cin>>m2;
	cout<<"enter your marks for subject 3:"<<endl;
	cin>>m3;
	result=grades(m1,m2,m3);
    return 0;
}
