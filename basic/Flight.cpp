#include<iostream>
#include<string.h>
using namespace std;
class flight{
private:
    int fno;
    string destination;
    float distance;
    float fuel;
    float calfuel(){
        if(distance<=1000)
            return(500);
        else{
            if(distance>1000 &&  distance<=2000)
                return(1100);
            else{
                if(distance>2000)
                    return(2200);
            }
        }
    }
public :
    void feedinfo();
    void showinfo();
};
void flight::feedinfo(){
    cout<<"\n\t *******ENTER FLIGHT INFORMATION ********"<<endl;;
    cout<<"\n\t Enter Flight Number = ";
    cin>>fno;
    cout<<"\n\t Enter Flight Destination = ";
    cin>>destination;
    cout<<"\n\t Enter Flight Distance= ";
    cin>>distance;
}
void flight::showinfo(){
    cout<<"\n\n\t *******FLIGHT INFORMATION ********"<<endl;
    cout<<"\n\t Flight Number is = "<<fno;
    cout<<"\n\t Flight Destination is = "<<destination;
    cout<<"\n\t Flight Distance is = "<<distance;
    fuel=calfuel();
    cout<<"\n\t Required fuel is = "<<fuel<<" RS";
}
int main(){
    flight f;
    f.feedinfo();
    f.showinfo();
    return 0;
}

