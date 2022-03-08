#include<iostream>
using namespace std;
class Animal {
	public:
	int legs=4;
	void a1(){
		cout<<"this is an two leg animal\n";
	}
	
	};
class dog :public Animal{
	public:
	int tail=1;
	void a2(){
		cout << "this is an four leg animal\n";
	}
};

int main(){
Animal A1;
dog d1;
A1.a1();
//A1.a2();
d1.a2();
return 0;
}
