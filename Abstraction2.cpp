#include<iostream>
using namespace std;

class SmartPhone{
public:
    virtual void takeASelfie() = 0;
    virtual void makeACall() = 0;
};

class Huawei : public SmartPhone{
public:
    void takeASelfie(){
       cout<<"Selfie is taken by Huawei."<<endl;
    }
    void makeACall(){
        cout<<"Huawei is calling."<<endl;
    }
};

class Iphone:public SmartPhone{
public:
    void takeASelfie(){
        cout<<"Selfie is taken by Iphone."<<endl;
    }
    void makeACall(){
        cout<<"Iphone is calling."<<endl;
    }
};

int main()
{
    SmartPhone *s1 = new Huawei();
    SmartPhone *s2 = new Iphone();
    s1->takeASelfie();
    s2->takeASelfie();
    s1->makeACall();
    s2->makeACall();
    return 0;
}
