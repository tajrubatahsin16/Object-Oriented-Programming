#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;
public:

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

    virtual void Work(){
        cout<<Name<<" is checking email, task backlog and performing tasks..."<<endl;
    }
};
//here Developer is the child class and Employee is the base class
class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string language):Employee(name, company, age){
        FavProgrammingLanguage = language;
    }
    void fixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl; //protected variable of base class "Name" is directly accessible from child class
        cout<<Name<<" is a "<<FavProgrammingLanguage<<" expert at "<<getAge()<<" years old"<<endl; //here private variable of base class "Age" is accessible from child class only through getters and setters.
    }
    void Work(){
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<endl;
    }
};

class Teacher:public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }
    void prepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<endl;
    }
};

int main()
{
      Developer dev1 = Developer("Tajruba", "YT", 24, "C++");
      Teacher t1 = Teacher("Nileema", "YT", 22, "Math");
      //dev1.Work();
      //t1.Work();
      Employee *e1 = &dev1;
      Employee *e2 = &t1;

      e1->Work();
      e2->Work();

    return 0;
}

