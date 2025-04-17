
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class FullName {
    private:
    std::string firstName;
    std::string middleName;
    std::string lastName;

    public:
    FullName();
    ~FullName();
    void setFirstName( std::string firstName);
    std::string getFirstName();
    void setMiddleName(std::string middleName);
    std::string getMiddleName();
    void setLastName(std::string lastName);
    std::string getLastName();
};

class Player
{
private:
    std::string playerID;
    std::string playerName;
    int matchesPlayed;
    int goalScored;

public:
    Player();
    ~Player();
    void setPlayerID(std::string playerID);
    std::string getPlayerID();
    void setMatchesPlayed(int matchesPlayed );
    int getMatchesPlayed();
    void setGoalScored(int goalScored);
    int getGoalScored();
    void setPlayerName(FullName& playerName);
    std::string getPlayerName();
    friend void increaseGoals(Player* player , int goals);
};

#endif