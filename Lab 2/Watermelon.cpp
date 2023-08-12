#include <iostream>
using namespace std;
 
int main(){
    int a; 
    cin >> a;
    
    if(a>=1 && a<=100){
        
   if(a%2==1){
       cout << "NO" << endl; }
       
   else{
       if(a==2){
       cout << "NO" << endl;}
       else{
        cout << "YES"<< endl; }
   }
    }
    return 0;
}
