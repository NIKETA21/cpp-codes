#include<iostream>
using namespace std;
class base{

	protected:
	int i,j;
	public:
	void set (int a, int b){
		i=a;j=b;
		}
	void show(){
		cout<<i<<" "<<j<<"\n";
		}
		
	};
class derived1 : private base {
	 int k;
	 public:
	 
	 void setk(){
	 	k=i*j;
	 }
	 void showk(){
	 	cout<<k<<"\n";
	 	}
	 	
	 /*derived (int x){
	 	k=x;}
	 void showk(){
	 	cout<<k;}*/
	 };
	 
class derived2 :public derived1{
	int m;
	public:
	void setm(){
		m=i-j; //error
		}
	void showm(){
		cout<<m<<"\n";
	}
};
int main(){

	derived1 ob1;
	derived2 ob2;
	ob1.set(1,2);
	ob1.show();
	ob2.set(3,4);
	ob2.show();
	
	/*derived ob(3);
	ob.set(1,2);
	ob.show();*/
return 0;
}
