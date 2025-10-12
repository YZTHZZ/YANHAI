#include<iostream>
using namespace std;
int sqr(){
    static int a=15;
    int b;
    return a;

}
int main(){
    static int a=10;
    cout<<a;
    return 0;

}