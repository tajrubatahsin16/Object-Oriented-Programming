#include<iostream>
using namespace std;

class youTubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;

public:
    youTubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setOwnerName(string ownerName){
        OwnerName = ownerName;
    }
    string getOwnerName(){
        return OwnerName;
    }


    void GetInfo(){
        cout<<"Channel Name: "<<Name<<", Owner Name: "<<OwnerName<<", Subscriber count: "<<SubscribersCount<<endl;
    }
    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubscribe(){
        if(SubscribersCount>0)
            SubscribersCount--;
    }
};

class CookingYouTubeChannel :public youTubeChannel{
public:
    CookingYouTubeChannel(string name, string ownerName) : youTubeChannel(name, ownerName){

    }
    void Practice(){
        cout<<getOwnerName()<<" is practicing cooking and learning new recipes!"<<endl;
    }
};

int main()
{
    CookingYouTubeChannel cY1("YT", "Daphne");
    CookingYouTubeChannel cY2("CB", "Simon");
    cY1.Subscribe();
    cY1.Subscribe();
    cY1.Subscribe();
    cY1.Unsubscribe();
    cY1.GetInfo();
    cY2.GetInfo();
    cY1.Practice();
    cY2.Practice();

    return 0;
}

