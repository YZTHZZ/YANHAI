#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    const int n=10;
    int array[n]={1,2,3,4,5,6,7,8,9,10}; ;
    int* ptr1=&a,* ptr2=&b,* ptr3=&c;
    //见解：此处'*'视为类型的一部分，不是解引用符，把'*'与变量分开以区别解引用符。
    int* ptrr1=array;
    for(int i=0;i<n;i++){

        cout<<array[i]<<endl;
        //cout<<*(ptrr1+i)<<endl;与其等效。

        cout<<ptrr1+i<<endl;
    }
}
    