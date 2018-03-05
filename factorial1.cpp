include<iostream.h>
using namespace std;
void main()
{
	clrscr();
	int num, i, fact=1;
	cout<<"Enter a number : ";
	cin>>num;
  if(num<=20)
  {
	for(i=num; i>0; i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fact;
  }
  }
  else
  cout<<"the num is greater than 20";
  }
	
