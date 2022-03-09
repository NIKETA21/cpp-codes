#include<iostream>
using namespace std;
class A{
	private:
	int x;
	
	protected:
	int y;

	public:
	int z;
	
	void a1(){
	x=4;
	y=9;
	z=1;
	cout<<"x= "<<x<<"y="<<y<<"z="<<z<<endl;
	z=y+1;

	}
	
	};
	
class B : public A{
	public:
	int disp1(){
		cout<<"z= "<<z <<"y= "<<y <<endl;
		}
	};
	
class C : public B{
	public:
	int disp2(){
		cout<<"z= "<<z <<"y= "<<y <<endl;
		}
	};	
	
	

	/*cout<<"x="<<a1.x=x+1<<endl;
	cout<<"y="<<y=y+1<<endl;
	cout<<"z="<<z=z+1<<endl;*/
	//}
//};

/*class C : public B{

	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"z="<<z<<endl;
	}
};*/



int main(){
A A1;
B B1;
C C1;

cout<<"class A" <<endl;
A1.a1();
cout<<"class B" <<endl;
B1.a1();
cout<<"class C" <<endl;
C1.a1();

cout<<"class A" <<endl;
B1.disp1();

cout <<"class C"<<endl;
C1.disp2();



//A1.a2();
//B1.a2();
return 0;
}
