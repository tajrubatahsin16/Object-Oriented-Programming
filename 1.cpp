#include<iostream>
using namespace std;

class Employee{
//private:
public:
    string Name;
    string Company;
    int Age;

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
};

int main()
{
    Employee employee1 = Employee("Nileema", "YT", 16);
    /*
    employee1.Name = "Nileema";
    employee1.Company= "YT";
    employee1.Age = 16;
    */
    employee1.IntroduceYourself();
    return 0;
}
