#include "Message.h"

Message::Message()
{

}

Message::Message(const string& _text, const string& _sender, const string& _receiver)
    : _text(_text), _sender(_sender), _receiver(_receiver)
{

}

Message::~Message()
{
    //writeData();
}

bool Message::writeData()
{
    ofstream file("message.txt", ios::trunc);

    if (!file.is_open())
        return false;

    if (!(file << *this))
        return false;


    return true;
}

bool Message::getData()
{
    ifstream file("message.txt");

    if (!file.is_open())
        return false;


    if (!(file >> *this))
        return false;


    return true;
}
