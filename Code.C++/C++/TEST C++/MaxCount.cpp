#include<iostream>
using namespace std;

int main(){
    int N=1; 
    cin>>N;
    int* arr=new int[N]();
    int count[10]={0};

    for(int i=0;i<N;i++){
        cin>>arr[i];
        while(arr[i]>0){
            int mod=arr[i]%10;
            count[mod]++;
            arr[i]/=10;
        }
    }
    
    int maxcount=0;
    for(int i=0;i<10;i++){
        if(count[i]>maxcount){
            maxcount=count[i];
            }
    }
    cout<<maxcount<<": ";

    for(int i=0;i<10;i++){
        if(count[i]==maxcount){
            cout<<i<<" ";
        }
    }
    delete []arr;
    return 0;


}