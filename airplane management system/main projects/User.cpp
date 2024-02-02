//
// Created by Dell on 6/19/2021.
//

#include "User.h"

User::User() {
    registered=false;
    CNIC=0;
    name="";
    userName="";
    password="";
}

int User::count_users=0;

User::User(const string &name, const string &userName, const string &password, long long int cnic, bool registered) : name(name),userName(userName),password(password),CNIC(cnic),registered(registered) {}

User::~User() {

}

string User::getName() {
    return name;
}

void User::setName(string name) {
    User::name = name;
}

int User::getCountUsers() {
    return count_users;
}
void User::setCountUsers(int countUsers) {
    count_users = countUsers;
}

bool User::setPassword(string s) {
    if (verifyPassword(s)){
        this->password = s;
        return true;
    }
    return false;
}

string User::getPassword() {
    return password;
}

void User::setUserName(string s) {
    this->userName=s;
}

string User::getUserName() {
    return this->userName;
}

long long int User::getCnic()  {
    return CNIC;
}

void User::setCnic(long long int cnic) {
    CNIC = cnic;
}

bool User::isRegistered() const {
    return registered;
}

void User::setRegistered(bool registered) {
    User::registered = registered;
}

bool User::verifyPassword(string s) {
    if ( s.length()<8 ){
        return false;
    }
    // lower case 97 to 122
    // upper case 65  to 90
    // digits 48 to 57
    bool up=false;
    bool down=false;
    bool spec=false;
    bool dig = false;
    for (int i = 0; i <=s.length() ; ++i) {
        if (s[i]>= 65 && s[i]<= 90 ){
            up = true;
        }
        if (s[i]>= 97 && s[i]<= 122 ){
            down = true;
        }
        if (s[i]>= 48 && s[i]<= 57 ){
            dig = true;
        }
        else
            spec=true;
    }
    if (up && down && spec && dig){
        return true;
    }
    return false;
}


void User::resetPass() {
    cout<<"Enter your new Password\n";
    string temp1;
    label:
    cin.ignore();
    cin >> temp1;
    if (!verifyPassword(temp1)){
        cout<<"Your password must contain a single lowercase, uppercase, a digit and a special character\n";
        cout<<"Please enter again\n";
        goto label;
    }
    cout<<"Re-enter your Password\n";
    cin.ignore();
    string temp2;
    label1:
    cin >> temp2;
    if (temp2!=temp1){
        cout<<"Your passwords don't match\nPlease type the password you previously entered\n";
        goto label1;
    }
    this->password = temp1;

}

bool User::isAdmin() const {
    return admin;
}

void User::setAdmin(bool admin) {
    User::admin = admin;
}



