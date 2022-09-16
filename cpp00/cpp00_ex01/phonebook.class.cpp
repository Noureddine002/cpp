#include <iostream>
#include <string>
#include <sstream>
#include "phonebook.class.hpp"

Phonebook::Phonebook(){
    this->nb_conts = 0;
}

std::string get_input(void)
{
    std::string str;
    std::getline(std::cin, str);
    if(!(std::cin.good()))
    {
        std::cout << "ERROR" << std::endl;
        exit(0);
    }
    return str;
}

void Phonebook::add_contact(){
    std::string fn;
    std::string ln;
    std::string nknm;
    std::string ph;
    std::string ds;
    
    std::cout << "Enter First Name : ";
    fn = get_input();
    std::cout << "Enter Last Name : ";
    ln = get_input();
    std::cout << "Enter Nick Name : ";
    nknm = get_input();
    std::cout << "Enter Phone Number : ";
    ph = get_input();
    std::cout << "Enter your Darkest Secret : ";
    ds = get_input();
    Contact contact(fn, ln, nknm, ph, ds);
    this->contacts[nb_conts++ % 8] = contact;
}

void Phonebook::get_contact(int i){
    if(i > 7 || i >=nb_conts || i < 0){
        std::cout << "the index you entered is wrong or non existant, check again !" << std::endl;
        return ;
    }
    Contact contact = this->contacts[i];
    std::cout << std::endl;
    std::cout << "First Name : " << contact.get_fn() << std::endl;
    std::cout << "Last Name : " << contact.get_ln() << std::endl;
    std::cout << "Nickname : " << contact.get_nknm() << std::endl;
    std::cout << "Phonebook : " << contact.get_phone() << std::endl;
    std::cout << "Darkest Secret : " << contact.get_drk_sec() << std::endl;
}

void Check_str(std::string str){
    if(str.length() > 10)
        std::cout << str.substr(0, 10) << ".";
    else
        std::cout << str << "";
}

void Phonebook::get_listContacts(){
    int i = 0;
    while(i < this->nb_conts)
    {
        Contact contact = this->contacts[i];
        std:: cout << i << " | ";
        Check_str(contact.get_fn());
        std:: cout << " | ";
        Check_str(contact.get_ln());
        std:: cout << " | ";
        Check_str(contact.get_nknm());
        std::cout << std::endl;
        i++;
    }
    std::string str;
    int index;
    std::cout << "Enter the index : ";
    std::getline(std::cin, str);
    index = std::atoi(str.c_str());
    if(index < -1 || index > nb_conts || !(isdigit(str[0]))){
        std::cout << "ERROR in index !" << std::endl;
        exit(0);
    }
    get_contact(index);
    std::cout << std::endl;
}