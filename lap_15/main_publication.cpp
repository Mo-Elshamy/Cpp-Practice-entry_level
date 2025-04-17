#include <iostream>
#include <string>
#include"publication.hpp"

using namespace std;

int main(){
    int selection;


    cout<<"*** Program 1 ***\n";
    cout<<" Select The Product Type:\n"
        <<" [1] Book\n"
        <<" [2] Tape\n";
    cin>>selection;

    if (selection == 1)
    {
        Book book1;
        string title;
        int pages;
        float price;

        cout<<"Enter The Book Details:\n";
        cout<<"Enter The Title: ";
        cin>>title;
        cout<<"Enter The Price: ";
        cin>>price;
        cout<<"Enter The Number Of Pages: ";
        cin>>pages;

        book1.setTitle(title);
        book1.setPrice(price);
        book1.setPage(pages);

        cout<<"\n\nThe Book Title is: "<<book1.getTitle()<<endl;
        cout<<"The Book Pages is: "<<book1.getPage()<<endl;
        cout<<"The Book Price is: "<<book1.getPrice()<<"\n\n";

    }
    else if (selection == 2)
    {
        Tape tape1;
        string title;
        int minutes;
        float price;

        cout<<"Enter The Tape Details:\n";
        cout<<"Enter The Title: ";
        cin>>title;
        cout<<"Enter The Price: ";
        cin>>price;
        cout<<"Enter The Minutes: ";
        cin>>minutes;

        tape1.setTitle(title);
        tape1.setPrice(price);
        tape1.setMinutes(minutes);

        cout<<"\n\nThe Tape Title is: "<<tape1.getTitle()<<endl;
        cout<<"The Tape Minutes is: "<<tape1.getMinutes()<<endl;
        cout<<"The  Tape Price is: "<<tape1.getPrice()<<"\n\n";

    }
    else
    {
        cout<<"Invalid Number !!\n";
    }
    
    return 0;
}