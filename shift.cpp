#include<iostream.h>
#include<conio.h>
void main()
{
	int num1, num2, swap;
	cout<<"\nFirst Number : ";
	cin>>num1;
	cout<<"Second Number : ";
	cin>>num2;
	swap=num1;
	num1=num2;
	num2=swap;
	cout<<"First Number = "<<num1<<"\n"<<"Second Number = "<<num2;
	getch();
}
