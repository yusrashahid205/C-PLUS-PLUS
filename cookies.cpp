#include<iostream>
using namespace std;
int main()
{
	int num_cookies,num_boxes,remain_cookies,containers,remain_boxes,a,b;
	cout<<"Enter the total number of cookies: "<<endl;
	cin>>num_cookies;
	num_boxes=num_cookies/24;
	cout<<"The number of boxes are: "<<num_boxes;
	a=num_boxes*24;
	remain_cookies=num_cookies-a;
	cout<<"\nThe remaining cookis are: "<<remain_cookies;
	containers=num_boxes/75;
	cout<<"\nThe number of containers are: "<<containers;
	if(containers>0)
	{
		b=containers*75;
		remain_boxes=num_boxes-b;
		cout<<"\nthe number of boxes which reamins are:"<<remain_boxes;
	}
	else
	{
		cout<<"\n*there is no need of containers*";
	}
	return 0;
}
