#include<iostream>

//demo code for operator overloasding

using namespace std;

class Complex
    {
    int real , img;
    public:
    //default constructor 
Complex ()
    {
    real=0;
    img=0;
    }
//para construct

Complex(int x, int y)
    {
    real=x;
    img= y;
    }

void display()
    {
     cout<<"the real part : "<< real<< "and img part : "<<img<<endl;
    }

friend Complex operator + (Complex , Complex);
friend Complex operator - (Complex , Complex);
friend Complex operator * (Complex , Complex);
friend Complex operator % (Complex , Complex);
  };

Complex operator + (Complex ob1, Complex ob2)
    {
    Complex temp;
    temp.real=ob1.real+ob2.real;
    temp.img=ob1.img+ob2.img;
    return temp;
    }

Complex operator - (Complex ob1, Complex ob2)
    {
    Complex temp;
    temp.real=ob1.real-ob2.real;
    temp.img=ob1.img-ob2.img;
    return temp;
    }

Complex operator * (Complex ob1, Complex ob2)
    {
    Complex temp;
    temp.real=ob1.real*ob2.real;
    temp.img=ob1.img*ob2.img;
    return temp;
    }

Complex operator % (Complex ob1, Complex ob2)
    {
    Complex temp;
    temp.real=ob1.real%ob2.real;
    temp.img=ob1.img%ob2.img;
    return temp;
    }
//overload the op;
/*Complex operator + (Complex ob)
{
Complex temp;
temp.real=real+ob.real;
temp.img=img+ob.img;
return temp;

}
*/

/*Complex operator - (Complex ob1 , Complex ob2)
{
Complex temp;
temp.real=real-ob1.real+ob2.real;
temp.img=img-ob.img + ob2.img;
return temp;

}*/



//};

int main()
    {
    Complex c1(1,1),c2(5,5);
    c1.display();
    c2.display();

//cout <<"sum is :"<<
    Complex c3;
    c3=c1 + c2;
    c3.display();

    Complex c4;
    c4=c1-c2;
    c4.display();
 
    Complex c5;
    c5=c1*c2;
    c5.display();

    Complex c6;
    c6=c1%c2;
    c6.display();

// Complex c3;
//c3=c1+c2;
//c3.display();


//c3 = c1+c2;
//c3=c1.operator + (c2);

//c3.display();

//c3 = c1-c2;
//c3.display();

return 0;
 }
