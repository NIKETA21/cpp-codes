//this code to show the default argument 


#include<iostream>
using namespace std;
int sum(int a=4 , int b=6 , int c=8) //we provided default values to all the argument variables
{
    return a+b+c; //adding the values
}

int main()
{
    cout<<"addition = "<<sum()<<endl; //printing the additon using function call sum()
    cout<<"addition = "<<sum(4)<<endl; //provided only one argument which replace first default value and remaining we as it is
    cout<<"addition = "<<sum(2,4)<<endl;
    cout<<"addition =" <<sum(1,2,3)<<endl;
    return 0;
}
