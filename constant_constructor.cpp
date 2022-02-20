#include<iosteam>
using namespace std;

class democonst{
public: int i=10,j,k;
//public :
/*void setval()
{
i=100;
cout<<"inside the setvalue(), i=  "<<i<<endl<<endl;
}//end of setval*/

democonst()//functionn name =class name , no return 
{
cout<<"incide the constructor \n"<<endl;
j=0;
k=5;
}
//paramconst
democonst(int x, int y,int z)
{
cout <<"inside param const"<<endl;
i=x;
j=y;
k=z;
}
};

int main()
{ 
  democonst demo1,demo2(5,5,5);
cout<<"valueof demo1 members: "<<demo1.i<<demo1.j<<demo1.k<<endl;
demo1.setval();
cout<<"valueof demo2 members: "<<demo1.i<<demo1.j<<demo1.k<<endl;
demo2.setval();
return 0;
}
