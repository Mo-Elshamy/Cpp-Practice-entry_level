#include <iostream>


int main(){
    char chr;

    std::cout<<"**Check Whether a Character is a Vowel or Consonant** \n";

    std::cout<<"Enter The Character: \n";
    std::cin>>chr;

    if ( chr == 'o' || chr == 'i' || chr == 'e' || chr == 'a' || chr == 'u' || chr == 'O' || chr == 'I' || chr == 'E' || chr == 'A' || chr == 'U')
    {
        std::cout<<"The Character Is A Vowel\n";
    }
    else
    {
        std::cout<<"The Character Is A Consonant\n";
    }
    

    return 0;
}


