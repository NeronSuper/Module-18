#include "User.h"



User::User()
{
    if (!readData())
    {
        cout << "There is no data to read from file, you have an empty class!\n";
    }
}

User::~User()
{
    writeData();
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

bool User::readData()
{
    ifstream file("user.txt");

    if (!file.is_open())
        return false;


    if (!(file >> *this))
        return false;


    return true;
}
