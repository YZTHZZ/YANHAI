#include<iostream>
using namespace std;
class tree{
    public:
    int x,y;
    void show(){
        cout<<"base a="<<a<<endl;
        cout<<"base b="<<b<<endl; 
        };    
        tree(){};
        tree(int one,int two,int three):a(one),c(two),b(three){}
        ~tree(){};
    
    private:
    int a,b,c;
   
};
class branch:public tree{
    public:
    int m,n;
    using tree::tree;
    branch::branch(int one,int two,int three,int four,int five):tree(one,two,three),d(four),e(five){};
    ~branch(){};
    private:
    int d,e;
    void show(){};
    
};