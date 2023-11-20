// Question:
// 3. Suppose there are three classes named “Germany”, “Argentina” and “Brasil”. Build a diagram to show how these classes are related. What do you need to do tohide the implementation details of the parent class obtained from the diagram? Demonstrate the scenario with the help of an array of pointers.
// Solution:
#include <iostream>
using namespace std;
class parent{
    public:
    string name;
    virtual void print()=0;

};
class Germany: public parent{
    public:
    Germany(){
        name="Germany";
    }
   void print(){
    cout<<"Name: "<<name<<endl;
   }
};
class Argentina: public parent{
     public:
    Argentina(){
        name="Argentina";
    }
   void print(){
    cout<<"Name: "<<name<<endl;
   }
   
};
class Brasil: public parent{
    
    public:
    Brasil(){
        name="Brasil";
    }
   void print(){
    cout<<"Name: "<<name<<endl;
   }
};
int main(){
    parent *obj[3];
    Germany one;
    Argentina two;
    Brasil three;

    obj[0]=&one;
    obj[1]=&two;
    obj[2]=&three;

    for(int i=0;i<3;i++){
        obj[i]->print();
    }

return 0;
}
