#include<iostream>
#include<string>
#include<vector>

#include"accounts.hpp"

using namespace std;

void menuDisplay(){
    cout<<"    *** Menu ***\n"
        <<" [1] Deposit\n"
        <<" [2] Display Balance\n"
        <<" [3] Withdraw\n"
        <<" [4] Create Account\n";
}

int main(){
    int selection;
    vector<Curr_Acct*> currAcct;
    vector<SAV_ACCT*> savAcct;

    do  // Loop To Keep Looping Until Exit
    {   
        int acc_type;
        menuDisplay();
        cout<<"Enter Your Choice: "; 
        cin>>selection;

        cout<<"\nChose Account Type: \n"
            <<" [1] Current Account\n"
            <<" [2] Saving Account\n";
        cin>>acc_type;
        if (acc_type == 1) // Select the current account class
        {
            
            switch (selection)
            {
            case 1:{
                double amount;
                string actNum;
                if (currAcct.empty())   // Check if their is any Current Acounts Stored
                {
                    cout<<"No Current Accounts Found!\n";
                    return 0;
                }
                cout<<"*** Deposit ***\n";
                cout<<"Enter Account Number: ";
                cin>>actNum;
                for (size_t i = 0; i < currAcct.size(); i++)
                {
                    if (actNum == currAcct[i]->getAccount_Number())
                    {
                        cout<<"Enter The Deposit Amount: ";
                        cin>>amount;
                        currAcct[i]->Deposit(amount);
                        return 0;
                    }
                    if ( i == currAcct.size()-1 )
                    {
                        cout<<"Invalid Account Number!! \n";
                    }
                }
                break;
            }
            case 2:{
                string actNum;
                if (currAcct.empty())   // Check if their is any Current Acounts Stored
                {
                    cout<<"No Current Accounts Found!\n";
                    return 0;
                }
                cout<<"*** Dispaly Balance ***\n";
                cout<<"Enter Account Number: ";
                cin>>actNum;
                for (size_t i = 0; i < currAcct.size(); i++)
                {
                    if (actNum == currAcct[i]->getAccount_Number())
                    {
                        cout<<"Customer Name: "<<currAcct[i]->getCustomer_Name()<<endl;
                        cout<<"Account Number: "<<currAcct[i]->getAccount_Number()<<endl;
                        cout<<"Account Type: "<<currAcct[i]->getAccount_Type()<<endl;
                        cout<<"Balance Details: "<<currAcct[i]->Balance()<<endl;
                    }
                    if ( i == currAcct.size()-1 )
                    {
                        cout<<"Invalid Account Number!! \n";
                    }
                }
                break;
            }
            case 3:{
                double amount;
                string actNum;
                if (currAcct.empty())   // Check if their is any Current Acounts Stored
                {
                    cout<<"No Current Accounts Found!\n";
                    return 0;
                }
                cout<<"*** Withdraw ***\n";
                cout<<"Enter Account Number: ";
                cin>>actNum;
                for (size_t i = 0; i < currAcct.size(); i++)
                {
                    if (actNum == currAcct[i]->getAccount_Number())
                    {
                        cout<<"Enter The Withdrawn Amount: ";
                        cin>>amount;
                        currAcct[i]->withdraw(amount);
                        return 0;
                    }
                    if ( i == currAcct.size()-1 )
                    {
                        cout<<"Invalid Account Number!! \n";
                    }
                }
                break;
            }
            case 4:{
                Curr_Acct* newCustomer = new Curr_Acct;
                string name , accNum ;
                double amount;
                cout<<"*** Create Account ***\n";
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter Acount Number: ";
                cin>>accNum;
                cout<<"Enter The Amount: ";
                cin>>amount;

                newCustomer->setCustomer_Name(name);
                newCustomer->setAccount_Number(accNum);
                newCustomer->setAccount_Type("Curr_Acct");
                newCustomer->Deposit(amount);

                currAcct.push_back(newCustomer);
                break;
            }
            default:
                break;
            }
        }
        else if (acc_type == 2)
        {

            switch (selection)
            {
            case 1:{
                double amount;
                string actNum;
                if (savAcct.empty())   // Check if their is any Current Acounts Stored
                {
                    cout<<"No Current Accounts Found!\n";
                    return 0;
                }
                cout<<"*** Deposit ***\n";
                cout<<"Enter Account Number: ";
                cin>>actNum;
                for (size_t i = 0; i < savAcct.size(); i++)
                {
                    if (actNum == savAcct[i]->getAccount_Number())
                    {
                        cout<<"Enter The Deposit Amount: ";
                        cin>>amount;
                        savAcct[i]->Deposit(amount);
                        return 0;
                    }
                    if ( i == savAcct.size()-1 )
                    {
                        cout<<"Invalid Account Number!! \n";
                    }
                }
                break;
            }
            case 2:{
                string actNum;
                if (savAcct.empty())   // Check if their is any Current Acounts Stored
                {
                    cout<<"No Current Accounts Found!\n";
                    return 0;
                }
                cout<<"*** Dispaly Balance ***\n";
                cout<<"Enter Account Number: ";
                cin>>actNum;
                for (size_t i = 0; i < savAcct.size(); i++)
                {
                    if (actNum == savAcct[i]->getAccount_Number())
                    {
                        savAcct[i]->Balance();
                    }
                    if ( i == savAcct.size()-1 )
                    {
                        cout<<"Invalid Account Number!! \n";
                    }
                }
                break;
            }
            case 3:{
                double amount;
                string actNum;
                if (savAcct.empty())   // Check if their is any Current Acounts Stored
                {
                    cout<<"No Current Accounts Found!\n";
                    break;
                }
                cout<<"*** Withdraw ***\n";
                cout<<"Enter Account Number: ";
                cin>>actNum;
                for (size_t i = 0; i < savAcct.size(); i++)
                {
                    if (actNum == savAcct[i]->getAccount_Number())
                    {
                        cout<<"Enter The Withdrawn Amount: ";
                        cin>>amount;
                        savAcct[i]->withdraw(amount);
                        break;
                    }
                    if ( i == savAcct.size()-1 )
                    {
                        cout<<"Invalid Account Number!! \n";
                    }
                }
                break;
            }
            case 4:{
                SAV_ACCT* newCustomer = new SAV_ACCT;
                string name , accNum ;
                double amount;
                cout<<"*** Create Account ***\n";
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter Acount Number: ";
                cin>>accNum;
                cout<<"Enter The Amount: ";
                cin>>amount;

                newCustomer->setCustomer_Name(name);
                newCustomer->setAccount_Number(accNum);
                newCustomer->setAccount_Type("SAV_ACCT");
                newCustomer->Deposit(amount);

                savAcct.push_back(newCustomer);
                break;
            }
            default:
                break;
            }
        }
        else
        {
            cout<<"Invalid Account Choice !!\n";
        }
        

    } while (selection != 5);
    
    for (Curr_Acct* acct : currAcct) {
        delete acct; // Free memory for all players
    }
    currAcct.clear(); // Clear the vector

    for (SAV_ACCT* acct : savAcct) {
        delete acct; // Free memory for all players
    }
    savAcct.clear(); // Clear the vector


    return 0;
}
