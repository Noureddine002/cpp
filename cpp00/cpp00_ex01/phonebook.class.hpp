#ifndef _PHONEBOOK_CLASS_HPP
#define _PHONEBOOK_CLASS_HPP
#include<iostream>
#include "contact.class.hpp"

class Phonebook{
private:
    Contact contacts[8];
    int nb_conts;
    void get_contact(int i);
public:
    Phonebook();
    void add_contact();
    void get_listContacts();
};

#endif