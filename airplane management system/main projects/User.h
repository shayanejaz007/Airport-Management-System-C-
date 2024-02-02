
#ifndef CLION_USER_H
#define CLION_USER_H

#include <iostream>
using namespace std;

class User {
protected:
    static int count_users;
    string name;
    string userName;
    string password;
    long long int CNIC;
    bool registered;
    bool admin;
public:
    User();
    User(const string &name, const string &userName, const string &password, long long int cnic, bool registered);
    ~User();
    string getName();
    void setName(string name);
    bool setPassword(string s);
    string getPassword();

    long long int getCnic();

    void setCnic(long long int cnic);

    bool isAdmin() const;

    void setAdmin(bool admin);

    bool isRegistered() const;

    void setRegistered(bool registered);
    bool verifyPassword(string s);
    void setUserName(string s);
    string getUserName();
    static int getCountUsers();
    static void setCountUsers(int countUsers);
    // set user ka func global jaye ga yahan nahi aye ga
    // copy that
    void resetPass();
};


#endif //CLION_USER_H
