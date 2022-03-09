#include<iostream>
using namespace std;
class ABC{
	void setProtMemb(int i){
		m_protMemb =i
		}
	void display(){
		cout <<m_protMemb<<endl;
		}
	protected :
	int m_protMemb;
	void Protfunc()
	{
		cout<<"\n Acess allowed";
		}
	};
class XYZ :public ABC {
	public:
	void useProtfunc(){
		protfunc();
	}
};

int main()
{
	ABC a, XYZ x;
	a.m_protMemb;
	a.setProtMemb(0);
	a.display();
	a.Protfunc();
	x.setProtMemb(5);
	x.display();
	x.useProtfunc();
	
}
