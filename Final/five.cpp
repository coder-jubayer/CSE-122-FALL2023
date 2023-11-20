// Question:
// 5. You have an object "obj" of a class named ‘OpOverload’. This class contains two private integer member variable var1 and var2. Your task is to overload the ‘++’ operator in the class so that you can perform the increment of both var1 and var2 by the sum of last three digits of your ID through the following instructions obj++ and ++obj. Perform decrement operation on ‘obj’ through the following instructions obj—and --obj by overloading ‘--’ operator in the same class.
// Solution:
#include <iostream>
using namespace std;

class OpOverload{  
    private:
    int var1=0;
    int var2=0; 

    public:

OpOverload operator ++(int){
    var1+=071;
    var2+=071;
    return *this;
}
OpOverload operator ++(){
    var1+=071;
    var2+=071;
    return *this;
}
OpOverload operator --(){
    var1-=071;
    var2-=071;
    return *this;
}
OpOverload operator --(int){
    var1-=071;
    var2-=071;
    return *this;
}
void display(){
    cout<<endl<<"var 1: "<<var1<<endl;
    cout<<"var 2: "<<var2<<endl;
}

};


int main(){
    OpOverload obj;
    cout<<"Without ++ or --";
    obj.display();

    obj++;
    cout<<endl<<"After obj++";
    obj.display();

    ++obj;
    cout<<endl<<"After ++obj";
    obj.display();

    obj--;
    cout<<endl<<"After obj--";
    obj.display();
    
    --obj;
    cout<<endl<<"After --obj";
    obj.display();
    return 0;
}



