#include<iostream>

using namespace std;
class calculator{
public:
int input1;
int input2;
void setInput(int a ,int b )
{
input1=a;
input2=b;
}
int add(calculator obj1,calculator obj2) //using function call
{
return obj1.input1+obj2.input2;
}
};
int main( )
{
calculator obj1, obj2;
obj1.setInput(10,2);
obj2.setInput(15,2);
//cout<<"the inputs:"<<obj.input1<<" " <<obj.input2<<endl;
cout<<"the sum of input is : "<<obj1.add(obj1,obj2);
return 0;
}
