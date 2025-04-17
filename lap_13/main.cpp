#include <iostream>
#include "daytime.hpp"
#include "dollar.hpp"

using namespace std;

void program1_Display(){
    cout<<"\n     *** Program 1 ***\n";
    cout<<"Select Operation From The Menu: \n"
        <<" [1] Display Time\n"
        <<" [2] Display Time In Seconds\n"
        <<" [3] Increment Seconds\n"
        <<" [4] Decrement Seconds\n"
        <<" [5] Exit\n";
}

void program2_Display(){
    cout<<"\n     *** Program 2 ***\n"
        <<"Select Operation From The Menu: \n"
        <<" [1] Set Dollar Rate\n"
        <<" [2] Display Dollar Rate\n"
        <<" [3] Exchange Dollar To EGP\n"
        <<" [4] Exit\n";
}

int main(){

    int program, selection;
    cout<<"Enter program Number 1 or 2:";

    cin>>program;

    if (program == 1)          
    {   
        Daytime daytime(1,50,20);
        do{
            program1_Display();
            cin>>selection;
            switch (selection)
            {
            case 1:{
                cout<<"The Time Is = "<<daytime.getHour()<<":"<<daytime.getMinute()<<":"<<daytime.getSecond()<<endl;
                break;
            }
            case 2: {
                cout<<"Time in Seconds = "<<daytime.asSeconds()<<endl;
                break;
            }
            case 3:{
                cout<<"Add 1 Second\n";
                ++daytime;
                break;
            }
            case 4:{
                cout<<"Remove 1 Minute\n";
                --daytime;
                break;
            }
            case 5:{
                cout<<"Exiting !\n";
                break;
            }
            default:
                cout<<"Invalid Selection!";
                break;
            }
        }while(selection != 5);   
    }
    else if (program == 2)
    {
        Dollar dollar;
        do{
            program2_Display();
            cin>>selection;
            switch (selection)
            {
            case 1:{
                float mktrate, offrate;
                cout<<"Set Dollar Rate:\n";
                cout<<"Enter Market Rate For 1 Dollar: ";
                cin>> mktrate;
                cout<<"Enter Official Rate For 1 Dollar: ";
                cin>> offrate;
                dollar.setRates(offrate,mktrate);
                break;
            }
            case 2: {
                cout<<"Dollar Rates:\n";
                dollar<<dollar;
                break;
            }
            case 3:{
                float curr;
                cout<<"Dollar Exchange:\n";
                cout<<"Set Amount of Dollars : ";
                cin>>curr;
                dollar.setCurrency(curr);
                cout<<"Market Price: "<<dollar.getMarketPounds()<<" EGP\n";
                cout<<"Oficial Price: "<<dollar.getOfficialPounds()<<" EGP\n";
                break;
            }
            case 4:{
                cout<<"Exiting !\n";
                break;
            }
            default:
                cout<<"Invalid Selection!";
                break;
            }
        }while(selection != 4);
    }
    else
    {
        cout<<"Invalid Program Selection";
    }
    

    return 0;
}