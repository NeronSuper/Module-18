#pragma once
#include <string>
#include <fstream>

using namespace std;

class Message 
{
    string _text;
    string _sender;
    string _receiver;

public:

    Message();
    Message(const string& _text, const string& _sender, const string& _receiver);
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

    bool writeData();
    bool getData();
};