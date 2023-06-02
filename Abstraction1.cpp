#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;
public:
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void IntroduceYourself(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
    }

    void AskForPromotion(){
        if(Age>30)
            cout<<Name<<" got promoted!"<<endl;
        else
            cout<<Name<<" sorry, no promotion!"<<endl;
    }
};

int main()
{
    Employee em1 = Employee("Nileema", "YT", 19);
    em1.AskForPromotion();


    return 0;
}
