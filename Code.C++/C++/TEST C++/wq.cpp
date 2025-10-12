#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[1001];
    for(int i=0;i<=n-1;i++){
        cin>>A[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n-1;j++){
            int y=sqrt(A[j]+A[i]);
              if(A[j]+A[i]==y*y){
                count++;
              }


        }
    }
        cout<<count;
}
