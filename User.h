#pragma once
#include <string>
#include <fstream>

using namespace std;

class User 
{
    string _name;
    string _login;
    string _pass;

public:

    User();
    User(const string& _name, const string& _login, const string& _pass);
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



    bool writeData();

    bool getData();
};
