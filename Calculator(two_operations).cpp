//153185
//Program:"This is a simple program for addition and multiplication"
//15-09-2017
#include<iostream>
using namespace std;
//main Function
int main()
{
	//decalaring variables
	int a ,b;
	int operation;
	int sum;
	int mulResult;
	
	//prompt for operation
	cout<<"Select the opeartion(in numbers):"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.Multiplication"<<endl;
	
	//taking input for operation selection
	cin>>operation;
	cout<<endl;
	
	//addition module for only two operands
	if(operation==1)
	{
		//propmt for operands 
		cout<<"Enter numbers to add.."<<endl;
		
		//taking input of operands
		cin>>a>>b;
		cout<<endl;
		
		//applying operation
		sum=a+b;
		
		//printing result
		cout<<"Addition of "<<a<<" and "<<b<<" is "<<sum<<endl;
	}
	//Multiplication module only for two operands
	if(operation==2)
	{
		//propmt for operands
		cout<<"Enter numbers for product.."<<endl;
		
		//taking input of operands
		cin>>a>>b;
		cout<<endl;
		
		//applying operation
		mulResult=a*b;
		
		//printing result
		cout<<"Product of "<<a<<" and "<<b<<" is "<<mulResult<<endl;
	}
	return 0;
}
