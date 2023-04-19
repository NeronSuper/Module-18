#include "Message.h"

Message::Message()
{
    if (!readData())
    {
        cout << "There is no data to read from file, you have an empty class!\n";
    }
}

Message::~Message()
{
    writeData();
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

bool Message::readData()
{
    ifstream file("message.txt");

    if (!file.is_open())
        return false;


    if (!(file >> *this))
        return false;


    return true;
}
