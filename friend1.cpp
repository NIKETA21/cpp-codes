#include<iostream>
class numbers
{
int num1,num2;
public :
void setdata(int a,int b);
friend int add(numbers N);
};

void numbers:: setdata(int a, int b) //function call using friend
{
num1=a;
num2=b;
}

int add (numbers N)
{ return (N.num1+N.num2); //adding two numbers
}

int main()
{
numbers N1;
N1.setdata(10,20);
cout<<"sum = "<<add(N1); //getting sum of two numbers
return 0;
}
