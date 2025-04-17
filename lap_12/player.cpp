#include <iostream>
#include<string>
#include"player.hpp"


FullName::FullName(){}
FullName::~FullName(){}
void FullName::setFirstName(std::string firstName){
    this->firstName= firstName;
}
std::string FullName::getFirstName(){
    return firstName;
}
void FullName::setMiddleName(std::string middleName){
    this->middleName=middleName;
}
std::string FullName::getMiddleName(){
    return middleName;
}
void FullName::setLastName(std::string lastName){
    this->lastName=lastName;
}
std::string FullName::getLastName(){
    return lastName;
}


Player::Player():matchesPlayed(0),goalScored(0){}
Player::~Player(){}
void Player::setPlayerID(std::string playerID){
    this->playerID=playerID;
}
std::string Player::getPlayerID(){
    return playerID;
}
void Player::setMatchesPlayed(int matchesPlayed){
    this->matchesPlayed=matchesPlayed;
}
int Player::getMatchesPlayed(){
    return matchesPlayed;
}
void Player::setGoalScored(int goalScored){
    this->goalScored = goalScored;
}
int Player::getGoalScored(){
    return goalScored;
}
void Player::setPlayerName(FullName& playerName ){

    this->playerName = playerName.getFirstName() +" "+playerName.getMiddleName() +" "+playerName.getLastName() ;
}
std::string Player::getPlayerName(){
    return playerName;
}
void increaseGoals(Player* player , int goals){
    player->goalScored += goals;
}