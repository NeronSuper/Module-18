#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Message 
{
    string _text;
    string _sender;
    string _receiver;

public:

    Message();
    ~Message();

    friend ostream& operator<<(ostream& os, const Message m)
    {
        os << m._text << ' ' << m._sender << ' ' << m._receiver << '\n';

        return os;
    }

    friend ifstream& operator>>(ifstream& fs, Message& m)
    {
        fs.seekg(0, ios_base::beg);
        fs >> m._text >> m._sender >> m._receiver;

        return fs;
    }

    void setSpecificData()
    {
        _text = "How are you?";
        _sender = "Alex";
        _receiver = "Gregor";
    }

    bool writeData();
    bool readData();
};