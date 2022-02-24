#include<iostream>
using namespace std;
int myfun(int i);
int myfun(int i , int j);
//int myfun(int i , float j);

//simple overloading usinng default arguments
int main()
    {

    cout<<"calling myfun (10): "<<myfun(10)<<endl;

    cout<<"calling myfun (10,20): "<<myfun(10,20)<<endl;

    //cout<<"calling myfun (10,20.5): "<<myfun(10,20.5)<<endl;

    return 0;}

int myfun(int i)

  {

    return i;

  }

  int myfun(int i , int j)

    {

      return i+j;

    }
