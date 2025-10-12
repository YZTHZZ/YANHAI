#include<iostream>
using namespace std;

int main(){
    int R,N,g;
    int count=1;    
    cin>>R>>N;
   do{
    cin>>g;
    //先分析判断语句的优先级，避免代码的重复修改。  
     if(g<0){
        cout<<"Game Over"<<endl;
        break;
    //灵感：“if语句”中嵌套“if语句”可以实现多重判断。（这可以提供一种综合多种条件判断的方法）
    }else if(g==R){
        if(count==1){
            cout<<"Bingo!"<<endl;
        }else if(count<=3){
            cout<<"Lucky You!"<<endl;
        }else if(count<=N){
            cout<<"Good Guess!"<<endl;
        }else if(count>N){
            cout<<"Game Over"<<endl;
            }break;
     }else if(g>R){
        cout<<"Too big"<<endl; 
     }else if(g<R){
         cout<<"Too small"<<endl;
     }

 if(count>=N){cout<<"Game Over"<<endl;
    break;
    }

    count++;

    }while(count<=N);
    return 0;

}
