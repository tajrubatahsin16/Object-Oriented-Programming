#include<iostream>
using namespace std;

class youTubeChannel{
private:
    string Name;
    int SubscribersCount;

protected:
    string OwnerName;
    int ContentQuality;
public:
    youTubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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
        cout<<"Channel Name: "<<Name<<", Owner Name: "<<OwnerName<<", Subscriber count: "<<SubscribersCount<<", Content Quality: "<<ContentQuality<<endl;
    }
    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubscribe(){
        if(SubscribersCount>0)
            SubscribersCount--;
    }
    void CheckAnalytics(){
        if(ContentQuality<5){
            cout<<Name<<" has bad content quality."<<endl;
        }
        else{
            cout<<Name<<" has good quality."<<endl;
        }
    }
};

class CookingYouTubeChannel :public youTubeChannel{
public:
    CookingYouTubeChannel(string name, string ownerName) : youTubeChannel(name, ownerName){

    }
    void Practice(){
        cout<<OwnerName<<" is practicing cooking and learning new recipes!"<<endl;
        ContentQuality++;
    }
};

class SingersYouTubeChannel :public youTubeChannel{
public:
    SingersYouTubeChannel(string name, string ownerName) : youTubeChannel(name, ownerName){

    }
    void Practice(){
        cout<<OwnerName<<" is taking classes and learning new songs!"<<endl;
        ContentQuality++;
    }
};

int main()
{
    CookingYouTubeChannel cY1("YT", "Daphne");
    SingersYouTubeChannel sY1("CB", "Simon");
    cY1.Subscribe();
    cY1.Subscribe();
    cY1.Subscribe();
    cY1.Unsubscribe();
    cY1.GetInfo();
    sY1.GetInfo();
    cY1.Practice();
    cY1.Practice();
    sY1.Practice();
    sY1.Practice();
    sY1.Practice();
    sY1.Practice();

    youTubeChannel *yT1 = &cY1;
    youTubeChannel *yT2 = &sY1;

    yT1-> CheckAnalytics();
    yT2-> CheckAnalytics();

    return 0;
}
