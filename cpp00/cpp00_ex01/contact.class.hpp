#ifndef _CONTACT_CLASS_HPP
#define _CONTACT_CLASS_HPP
#include <iostream>

class Contact{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_num;
    std::string darkest_secret;

public:
    Contact();
    Contact(std::string f_nm, std::string l_nm, std::string nknm, std::string ph_n, std::string drk_sec);
    std::string get_fn(void);
    std::string get_ln(void);
    std::string get_nknm(void);
    std::string get_phone(void);
    std::string get_drk_sec(void);

};

#endif