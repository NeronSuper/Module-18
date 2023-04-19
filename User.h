#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class User 
{
    string _name;
    string _login;
    string _pass;

public:

    User();
    ~User();

    friend ostream& operator<<(ostream& os, const User& u)
    {
        os << u._name << ' ' << u._login << ' ' << u._pass << '\n';

        return os;
    }

    friend ifstream& operator>>(ifstream& fs, User& u)
    {
        fs.seekg(0, ios_base::beg);
        fs >> u._name >> u._login >> u._pass;

        return fs;
    }

    void setSpecificData()
    {
        _name = "Gregor";
        _login = "Gregor_pro229";
        _pass = "12345678";
    }

    bool writeData();
    bool readData();
};
