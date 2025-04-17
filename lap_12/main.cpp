#include <iostream>
#include <string>
#include <vector>
#include"player.hpp"

using namespace std;

int main(){
    int selection;
    vector<Player*> players ;


    do
    {   
        cout<<"Select An Operation From The Given Menu:\n";
        cout<<" [1] Add Player\n [2] Display Players\n [3] Increase Player Goal Scored\n [4] Delete Player\n [5] Exit\n\n";
        cout<<"Enter Selection:";
        cin>>selection;

        switch (selection)
        {
        case 1:{
            string firstname, midname, lastname , playerID;
            int  matchesPlayed,goalScored ;
            FullName newName ;
            Player* newpalyer = new Player;
            cout<<"Add Player\n";
            cout<<"Enter The First Name: ";
            cin>>firstname;
            newName.setFirstName(firstname);
            cout<<"Enter The Middle Name: ";
            cin>>midname;
            newName.setMiddleName(midname);
            cout<<"Enter The Last Name: ";
            cin>>lastname;
            newName.setLastName(lastname);
            
            newpalyer->setPlayerName(newName);

            cout<<"Enter The Player ID: ";
            cin>>playerID;
            newpalyer->setPlayerID(playerID);

            cout<<"Enter The Number Of Played Matches: ";
            cin>>matchesPlayed;
            newpalyer->setMatchesPlayed(matchesPlayed);

            cout<<"Enter Number Of Goals Scored: ";
            cin>>goalScored;
            newpalyer->setGoalScored(goalScored);

            cout<<"Added Sucsesfully!\n";
            players.push_back(newpalyer);
            break;
        }
        case 2: {
            
            if (players.empty()) {
                cout << "No players found!\n";
                return 0;
            }
            cout<<"Players :\n";
            for (size_t i = 0; i < players.size(); i++)
            {
                cout<<"Player["<<i+1<<"] :\n";
                cout<<"Player ID: "<<players[i]->getPlayerID()<<endl;
                cout<<"Player Name: "<<players[i]->getPlayerName()<<endl;
                cout<<"Matches Played: "<<players[i]->getMatchesPlayed()<<endl;
                cout<<"Goals Scored: "<<players[i]->getGoalScored()<<endl;
                cout<<"-----------\n";
            }
            break;
            
        }
        case 3:{
            string playerid;
            int goals;
            if (players.empty()) {
                cout << "No players found!\n";
                return 0;
            }
            cout<<"Enter Player ID:";
            cin>>playerid;
            for (size_t i = 0; i < players.size(); i++)
            {
                if (players[i]->getPlayerID() == playerid)
                {
                    cout<<"Enter Number of Goals:";
                    cin>>goals;
                    increaseGoals( players[i], goals);
                    break;
                }
                if((players[i]->getPlayerID() != playerid) && (i = players.size()-1)){
                    cout << "Invalid ID!\n";
                }
            }
            break;
        }
        case 4:{
            string playerid;
            cout<<"Delete Player:\n";
            if (players.empty()) {
                cout << "No players found!\n";
                break;
            }
            cout<<"Enter Player ID:";
            cin>>playerid;
            for (size_t i = 0; i < players.size(); i++)
            {
                if (players[i]->getPlayerID() == playerid)
                {
                    delete players[i];
                    players.erase(players.begin()+i);
                    break;
                }
                if((players[i]->getPlayerID() != playerid) && (i == players.size()-1)){
                    cout << "Invalid ID!\n";
                }
            }
            break;
        }
        case 5 :{
            cout<<"Good Bye\n";
            break;
        }
        default:{
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
        }
    }while(selection != 5);
     
    for (Player* player : players) {
        delete player; // Free memory for all players
    }
    players.clear(); // Clear the vector

    return 0;
}