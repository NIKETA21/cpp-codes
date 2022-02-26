#include<iostream>
using namespace std;
//measuring area and volume 
class measure
{
    public:
    int length;
    int width;
    int height;
    void setInput(int l,int w,int h)
    {
    length=l;
    width=w;
    height=h;
    }
    int area()
    {
    return length * width;
    }
    int volume()
    {
    return length*width*height;
    }
};

int main( )
{
measure obj1;
measure obj2;
obj1.setInput(2,4,6);
obj2.setInput(4,5,8);
cout<<"the inputs as length:"<<obj1.length<<"\n"<< " the input as width "<<obj1.width<<"\n"<< " the input as height "<<obj1.height<<endl;
cout<<"the area of object 1 is : "<<obj1.area()<<endl;
cout<<"the volume of object 1 is :"<<obj1.volume()<<endl;
cout<<"the inputs as length:"<<obj2.length<<"\n"<< " the input as width "<<obj2.width<<"\n"<< " the input as height "<<obj2.height<<endl;
cout<<"the area of object 1 is : "<<obj2.area()<<endl;
cout<<"the volume of object 1 is :"<<obj2.volume();
return 0;
}
