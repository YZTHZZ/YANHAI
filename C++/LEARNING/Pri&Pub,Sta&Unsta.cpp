#include<iostream>
using namespace std;
class test {
private:
int x=1,y=1,z=1;
//此处定义了非静态数据成员
static int s,p,q;
//此处声明了静态数据成员

public:
int a=1,b=1,c=1;
static int m,n,f; 
};

int test::s;
int test::p;
int test::q;
int test::m;
int test::n;
int test::f;
/*此处，有且只有‘类内的静态数据成员’必须在‘类外定义’。
  ps: "test::" 和下方的 "t." 一样，一次只能服务一个变量。*/

int main(){
    test t;
    t.a=10,t.b=20,t.c=30;
    cout <<t.a<<endl << t.b<<endl <<t.c<<endl;
   
    test::m=10;
    test::n=20;
    test::f=30;
    cout <<test::m<<endl <<test::n<<endl <<test::f;
    /*非静态数据成员属于对象，每个对象有自己的一份，必须通过对象访问。
    但是静态数据成员属于类，，全类共享一份，必须通过类名访问。
    而这同样是造成上方类外定义的原因*/

    /*test w;
    w.x=10,y=20,z=30;
    cout <<w.x<<endl << w.y<<endl <<w.z<<endl;

    test::s=10;
    test::p=20;
    test::q=30;
    cout <<test:: s<<endl << test::p<<endl <<test::q;
    private内的成员变量在外部不可访问，以上代码会报错，x,y,z,s,p,q均为private成员，*/
   return 0;
}