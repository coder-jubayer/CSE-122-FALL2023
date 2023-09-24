#include<iostream>
#include<string.h>
using namespace std;
int main(){
char x[100];
cin>>x;
int count=0;
    for(int i=0;i<100;i++){
        if(x[i]!=x[i+1]){
            count++;
        }
        else{
            count+=1;
        }
    }
    if(count%2!=1){

    cout<<"CHAT WITH HER!";

     }

else{cout<<"IGNORE HIM!";}

}
