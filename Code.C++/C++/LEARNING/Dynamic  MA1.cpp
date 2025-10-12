#include<iostream>             
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(){}; //默认构造函数
    point(int a,int b):x(a),y(b){};//有参构造函数
    ~point(){};//析构函数
};
int main(){
  //动态内存
      //变量
        int* ptr1=new int();/*初始化为零*/
        int* ptr2=new int;/*不初始化*/
      //对象
        point* ptr3=new point(); /*调用point的默认构造函数new*/
        point* ptr4=new point(1,2);/*调用point的有参构造函数*/
    delete ptr1;
    delete ptr2;            
    delete ptr3;
    delete ptr4;
      //变量数组
        int N;                                                                               
        cin>>N;
        int* ptra=new int[N]();//初始化为零
        int* ptrb=new int[N];//不初始化
        for(int i=0;i<N;i++){
            cin>>ptr1[i];
        }
        /*int*ptr=new int[N]表明ptr是一个动态数组，
        此处动态分配内存发生在运行时
        可根据运行时N被赋的值，确定内存空间*/

        //int N=1; 
        //cin>>N;
        //int arr[N];
        /*这样的定义是不被允许的，int arr[N]表明arr[]是一个静态数组；
        静态分配在编译时就必须完成,也就是说N是常量；
        但此处N没有const修饰，仍可被重新赋值，是变量，它的值在运行时才能确定*/
      //对象数组
        point* ptrc=new point[N]();/*调用point的默认构造函数new*/ 
        point* ptrd=new point[N];/*不调用point的默认构造函数new*/
    delete[] ptra;
    delete[] ptrb;      
    delete[] ptrc;
    delete[] ptrd;

    int* ptr[3];//静态分配二维数组
    int(*vptr)[4]=new int[3][4];/*动态分配二维数组*/
    
    delete[] vptr;
        
    return 0;
    
}
