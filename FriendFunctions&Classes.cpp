#include<iostream>
using namespace std;

class EquilateralTriangle{
private:
    float a;
    float circumference;
    float area;

public:
    void setA(float length){
        a = length;
        circumference = a*3;
        area = (1.73 * a * a)/4;
    }

    //friend void PrintResults(EquilateralTriangle);
    friend class Homework;

};
//Friend Function of class EquilateralTriangle
/*
void PrintResults(EquilateralTriangle et){
    cout<<"circumference: "<<et.circumference<<endl;
    cout<<"area: "<<et.area<<endl;
}
*/

class Homework{
public:
    void PrintResults(EquilateralTriangle et){
    cout<<"circumference: "<<et.circumference<<endl;
    cout<<"area: "<<et.area<<endl;
}

};

int main()
{
    EquilateralTriangle et;
    et.setA(9);
    //PrintResults(et);
    Homework h1;
    h1.PrintResults(et);


    return 0;
}
