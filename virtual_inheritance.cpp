#include<iostream>
using namespace std;
class A {
	public:
	int price=100;
	void dis(){
		cout <<"this first fuel\n";
	}
};

class B: virtual public A{
	public:
	int profit=200;
	void dis1(){
		cout <<"this is fuel second\n";
	}
};
	
class C : public virtual  A{
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

	D ob1;
	ob1.price;
	ob1.profit;
	ob1.nprofit;
	ob1.xprice=ob1.price+ob1.profit+ob1.nprofit;
	cout<<ob1.xprice;
	/*A a1;
	B b1;
	C c1;
	D d1;
	b1.dis();
	//d1.dis1();
	//d1.disp3();
	c1.dis1();*/
	return 0;
	}
