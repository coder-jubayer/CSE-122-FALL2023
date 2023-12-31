// Question:
//1.    Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores the title (a string) and price (type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float). Each of these three classes should have a getData() function to get its data from the user at the keyboard, and a putData() function to display its data. Write a main program to test the book and tape classes by creating instances of them, asking the user to fill in data with getData(), and then displaying the data with putData().
// Solution:

#include <iostream>
using namespace std;
class publication{
    public:
    string title;
    float price;
     void getData(){
        
    };
     void putData(){
        
    };

};
class book: public publication{
    public:
    int page;
    void getData(){
        cout<<"Enter title: "<<endl;
        cin>>title;
        cout<<"Enter price: "<<endl;
        cin>>price;
        cout<<"Enter page: "<<endl;
        cin>>page;
    }
    void putData(){
        cout<<endl<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Page: "<<page<<endl<<endl;
    }
};
class tape: public publication{
    public:
    float time;
    void getData(){
        cout<<"Enter title: "<<endl;
        cin>>title;
        cout<<"Enter price: "<<endl;
        cin>>price;
        cout<<"Enter time: "<<endl;
        cin>>time;
    }
     void putData(){
        cout<<endl<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Time: "<<time<<endl;
    }
};
int main(){
    book one;
    one.getData();
    one.putData();
    tape two;
    two.getData();
    two.putData();
    return 0;
}
