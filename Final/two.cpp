// Question:
// 2. Manchester United is a class with two private integer member variables coach and player, and a public void member function getData (). Create an object named ‘ronaldo’ in the main function. Overload the operator '++' in this class to perform the increment of both member variables through the following instruction ronaldo++ from the main function. After that create another instance of the Manchester United class named ‘fernandes’. Now, you set the values of coach and player for ronaldo to 4 and 5, and for fernandes, it is 5 and 6. Overloading only one relational operator, compare the result of ronaldo with fernandes before and after incrementing ronaldo by one. Which operator will be appropriate for both cases? Support your explanation by implementing that operator.
// Solution
#include <iostream>
using namespace std;
class ManchesterUnited{
    private:
    int player;
    int coach;
    public:
    void getData (int a,int b){
        player=a;
        coach=b;
    }
    ManchesterUnited operator ++(int){
        player++;
        coach++;
        return *this;
    }
    bool operator ==(ManchesterUnited& temp){
        if(player==temp.player && coach==temp.coach)
        return true;
        else
        return false;

    }
   
};
int main(){
ManchesterUnited ronaldo, fernandes;
ronaldo.getData(4,5);
fernandes.getData(5,6);

if(ronaldo==fernandes)
    cout << "ronaldo is equal to fernandes." <<endl;
else
    cout << "ronaldo is not equal to fernandes." <<endl;

ronaldo++;

if(ronaldo==fernandes)
    cout << "ronaldo is equal to fernandes." <<endl;
else
    cout << "ronaldo is not equal to fernandes." <<endl;
return 0;
}
