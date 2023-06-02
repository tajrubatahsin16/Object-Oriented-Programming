#include<iostream>
using namespace std;


class Instrument{
public:

    //Pure Virtual Function
    virtual void MakeSound() = 0; //After doing it, this class has become an abstract class.


    //Virtual Function
    //virtual void MakeSound(){
        //cout<<"Instrument is playing."<<endl;
    //}

};

class Harmonium : public Instrument{
public:
    void MakeSound(){
        cout<<"A harmonium is playing."<<endl;
    }
};

class Guitar : public Instrument{
public:
    void MakeSound(){
        cout<<"A guitar is playing."<<endl;
    }
};
int main()
{
    Instrument *i1 = new Harmonium();
    Instrument *i2 = new Guitar();
    //way-1
    i1->MakeSound();
    i2->MakeSound();

    //OR

    //way-2
    Instrument *instruments[2] = {i1, i2};
    for(int i=0; i<2; i++){
        instruments[i]->MakeSound();
    }

    return 0;
}
