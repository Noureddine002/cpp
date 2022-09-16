#include <iostream>
#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <unistd.h>

int main (void){
    std::string option;
    Phonebook pb_instance = Phonebook();
    while(1){
        std::cout << "**********************" << std::endl ;
        std::cout << "|       * ADD        | " << std::endl ;
        std::cout << "|       * SEARCH     |" << std::endl ;
        std::cout << "|       * EXIT       |" << std::endl ;
        std::cout << "********************** " << std::endl ;
        std::cout << std::endl;
        std::cout << "Please enter your option : ";
        std::getline(std::cin, option);
        if(option == "ADD" || option == "add"){
            pb_instance.add_contact();
        }
        else if(option == "SEARCH" || option == "search"){
            pb_instance.get_listContacts();
        }
        else if(option == "EXIT" || option == "exit"){
            std::cout << "GOODBYE see you next time !";
            break ;
        }
        else{
            std::cout << "Your command does not match the ones in the list, please check again !" << std::endl;
            sleep(1);
        }
    }
    return 0;
}