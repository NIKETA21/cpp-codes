#include<iostream>
using namespace std;

int display(int a)

  {

    cout<<"interger number is : "<<a<<endl;


    return 0;

  }

void display(int a, float b)

  {

    cout<<"integer number : "<<a<<endl;

    cout<<"float number : "<<b<<endl;

    //return a+b;

  }

float dispaly(float a)

  {

    cout<<"float number is :"<< a<<endl;

    return 0;


    //return a+b+c;

  }

int display (int a, int b)

  {

    return a+b;

  }



int main()

  { 

    int a=5; float b=5.5;

    display(a);

    display(b);

    display(a,b);

    return 0;

  }
