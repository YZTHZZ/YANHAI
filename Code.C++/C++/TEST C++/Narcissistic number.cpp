#include<iostream>
using namespace std;
int up(int x,int y){
    int count=1,f=1;
     while(count<=y){
        f=f*x;
        count++;
        }
    return f;
    }
int main(){
    int N;
    cin>>N;
    int max,num;
    num=up(10,N-1);
    max=up(10,N);   
    while(num<max){
        int count=1,sum=0;
        int tem=num;
        while(count<=N){
        sum+=up(tem%10,N);
        tem/=10;
        count++;
        /*if(sum==num){
             cout<<num<<endl;}*/
        }
    if(sum==num){
             cout<<num<<endl;
    }
     num++;

    



    }
    
}