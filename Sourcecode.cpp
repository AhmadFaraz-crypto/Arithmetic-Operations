#include<iostream>
#include<math.h>
using namespace std;
void addition(int a, int b, int c, int d)
{
	int u, x, y, z;
	x=a+b;
	y=b+d;
	z=(a*d)+(b*c);
	u=(b*d);
	cout<<"\n\t\t"<<x/y<<" = "<<z/u;
}
void subtraction(int a, int b, int c, int d)
{
	int u, x, y, z;
	x=a-b;
	y=b+d;
	z=(a*d)-(b*c);
	u=(b*d);
	cout<<"\n\t\t"<<x/y<<" = "<<z/u;
}
void multiplication(int a, int b, int c, int d)
{
	int u, x, y, z;
	x=a*c;
	y=b*d;
	z=(a*c);
	u=(b*d);
	cout<<"\n\t\t"<<x/y<<" = "<<z/u;
}
void division(int a, int b, int c, int d)
{
	int u, x, y, z;
	x=a/c;
	y=b/d;
	z=(a*d);
	u=(b*c);
	cout<<"\n\t\t"<<x/y<<" = "<<z/u;
}
int main()
{
	cout<<"\n\n\t\t\tArithmetic Operations"<<endl;
	cout<<"\t\t_____________________________________"<<endl;
	cout<<"\n\n\t1. Addition:       a/b + c/d = (a*d + b*c) / (b*d)"<<endl;
	cout<<"\t2. Subtraction:    a/b - c/d = (a*d - b*c) / (b*d)"<<endl;
	cout<<"\t3. Multiplication: a/b * c/d = (a*c) / (b*d)"<<endl;
	cout<<"\t4. Division:       a/b / c/d = (a*d) / (b*c)"<<endl;
	char ch;
	do{
	int a, b, c, d;
	cout<<"\nEnter a: ";cin>>a;
	cout<<"Enter b: ";cin>>b;
	cout<<"Enter c: ";cin>>c;
	cout<<"Enter d: ";cin>>d;
	int choice;
	cout<<"Enter a choice: ";cin>>choice;
	switch(choice)
	{
		case 1:
			addition(a,b,c,d);
			break;
		case 2:
			subtraction(a,b,c,d);
			break;
		case 3:
			multiplication(a,b,c,d);
			break;
		case 4:
			division(a,b,c,d);
			break;
		default:
			cout<<"Invalid choice";
			break;
	}cout<<"\n\nDo you want to back (y/n)?";cin>>ch;
 	}while(ch=='y' || ch =='Y');
 	return 0;
}
