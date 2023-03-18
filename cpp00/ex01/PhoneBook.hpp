#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <cstring>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact
{
    public:
        std::string nom;
        std::string prenom;
        std::string surnom;
        std::string phone;
        std::string secret;
};
 
class PhoneBook
{
    public:
        Contact repertoire[8];
        int nombre;
};
   
 
#endif