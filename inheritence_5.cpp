#include<iostream>
using namespace std;
class A {
	public:
	int price=100;
	void dis(){
		cout <<"this first fuel\n";
	}
};

class B: public A{
	public:
	int profit=200;
	void dis1(){
		cout <<"this is fuel second\n";
	}
};
	
class C : public B{
	public:
	int nprofit=4;
	void disp2(){
		cout <<"this is not profit\n";
	}
};
/*class D : public C {
	public: 
	int nprice=3;
	void disp3(){
		cout<<"this is not price\n";
		}
	};*/
class D : public B, public C{
	public: 
	int xprice=3;
	void disp4(){
		cout <<"this is x price\n";
		}
	};
	
int main(){
	A a1;
	B b1;
	C c1;
	D d1;
	b1.dis();
	//d1.dis1();
	//d1.disp3();
	c1.dis1();
	return 0;
	}
