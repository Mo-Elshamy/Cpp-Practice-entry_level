#include<iostream>
#include <string>
using namespace std;

class student
{
private:
    string studentID;
    string studentName;
    double oop2Score;
    double mathsScore;
    double englishScore;
    double totalScore;

    double ctotal(double eng , double math , double oop_2){
        return eng+math+oop_2;
    }
public:
    void takeData(string ID, string name , double opp2 , double math , double eng ){
       studentID = ID;
       studentName = name;
       oop2Score = opp2;
       mathsScore = math;
       englishScore = eng;
       totalScore =ctotal(eng , math ,opp2); 
    }
    void showData(){
        cout<<"Student_ID: "<<studentID<<"\n";
        cout<<"Student_Name: "<<studentName<<"\n";
        cout<<"OOP2_Score: "<<oop2Score<<"\n";
        cout<<"Maths_Score: "<<mathsScore<<"\n";
        cout<<"English_Score: "<<englishScore<<"\n";
        cout<<"Total_Score: "<<totalScore<<"\n";
    }
};


int main(){

    student student1;

    student1.takeData("2018","Mohamed ELshamy",55.6,26.6,20.5);
    student1.showData();
    return 0;
}