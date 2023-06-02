#include<iostream>
using namespace std;

class Employee{
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
    //Setters and Getters
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if(age >= 18) //Applying Validation rules to update data
            Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
    }
};

int main()
{
    Employee em1 = Employee("Nileema", "YT", 19);
    em1.IntroduceYourself();

    em1.setAge(24);
    cout<<em1.getName()<<" is "<<em1.getAge()<<" years old"<<endl;


    return 0;
}
