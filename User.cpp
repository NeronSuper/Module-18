#include "User.h"

User::User()
{

}

User::User(const string& _name, const string& _login, const string& _pass)
    : _name(_name), _login(_login), _pass(_pass)
{

}

User::~User()
{
    //writeData();
}

bool User::writeData()
{
    ofstream file("user.txt", ios::trunc);

    if (!file.is_open())
        return false;

    if (!(file << *this))
        return false;


    return true;
}

bool User::getData()
{
    ifstream file("user.txt");

    if (!file.is_open())
        return false;


    if (!(file >> *this))
        return false;


    return true;
}
