#ifndef PHONEBOOK_HPP
#define PONEBOOK_HPP

# include <cstring>
# include <iostream>

class Contact
{
    public:
        char *nom;
        char *prenom;
        char *surnom;
        char *phone;
        char *secret;
};

class PhoneBook
{
    public:
        Contact repertoire[8];
        int nombre;
};

 
#endif