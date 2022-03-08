#include<iostream>
using namespace std;
class AA {
	public:
	int price=100;
	void dis(){
		cout<<"this first fuel\n";
	}
};
class BB: public AA
{
public :
int noone=0;
void dis1(){
	cout<<"this is not fuel\n";
	}
	};

class CC : public AA
{
public :
int noone=0;
void dis2(){
	cout<<"this is not  first fuel\n";
	}
};

class DD : public BB, public CC{
	public:
	int profit=200;
	void dis3(){
		cout <<"this is fuel  second\n";
	}
};
	

int main(){
	AA a;
	BB b;
	CC c;
	DD d;
	b.dis();
	c.dis();
	d.dis1();
	d.dis2();
	//d.dis();
	}
