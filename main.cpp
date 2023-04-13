#include <iostream> 
#include <filesystem>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;


#include "Message.h"
#include "User.h"


int main()
{
    User user("Vitalii", "123", "12345");
    Message messae("Hello", "Alex", "Vitalii");

    user.writeData();
    messae.writeData();
    
    
    Message tmpMe;
    User tmpUs;

    tmpMe.getData();
    tmpUs.getData();

    cout << tmpMe;
    cout << tmpUs;

    

    fs::permissions("user.txt", fs::perms::group_write | fs::perms::others_all, fs::perm_options::remove);
    fs::permissions("message.txt", fs::perms::group_write | fs::perms::others_all, fs::perm_options::remove);

    return 0;
}