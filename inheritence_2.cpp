#include<iostream>
using namespace std;
class Liquid {
	public:
	int price=100;
	void dis(){
		cout<<"this first fuel\n";
	}
};

class fuel{
	public:
	int profit=200;
	void dis1(){
		cout <<"this is fuel second\n";
	}
};

class petrol : public Liquid , public fuel
{
public :
int noone=0;
void dis2(){
	cout<<"this is not fuel\n";
	}
};

int main()
{
	Liquid l;
	fuel f;
	petrol p;
	l.dis();
	f.dis1();
	p.dis2();
	p.dis1();
	p.dis();
	return 0;
	
	}
