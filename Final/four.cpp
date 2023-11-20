//question:
//4. Suppose, there are 10 students in a class. The students are assigned five courses each. You have to determine which student gets the highest mark, which obtains the average mark, and which obtains the lowest mark. Create a calculate_marks() function in the Student class and get three of the marks from this function. Create an individual display_result function() to show the output.
//Solution:
#include <iostream>
using namespace std;

class students{   
    public:
    int mark[5]; 
    int sum;

    void  calculate_marks(){
        for(int i=0;i<5;i++){
            cout<<"Course: "<<i+1<<endl;
            cout<<"Mark: ";
            cin>>mark[i];
            sum+=mark[i];
        }
        

        
    }
    
};
    void display(students student[10]){
    int max=student[0].sum, maxIndex;
    int min=student[0].sum, minIndex;
    int avg, avgIndex;
    int allsum=0;

    for(int i=0;i<10;i++){
        student[i].calculate_marks();
        allsum+=student[i].sum;
        
        if(student[i].sum>max){
            max=student[i].sum;
            maxIndex=i;
        }
        if(student[i].sum<min){
            min=student[i].sum;
            minIndex=i;
        }
            avg=allsum/10;
        if(student[i].sum==avg){
            avgIndex=i;
        }
    }
    cout<<endl<<"Student no "<<maxIndex<<" got Maximum mark"<<endl;
    cout<<"Student no "<<minIndex<<" got Minumum mark"<<endl;
    cout<<"Student no "<<avgIndex<<" got Average mark"<<endl;
    
    
    }
    



int main(){
    students student[10];
    for(int i=0;i<10;i++){
        student[i].calculate_marks();
    }
    
    display(student);
    

    return 0;
}



