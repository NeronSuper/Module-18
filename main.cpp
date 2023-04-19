#include <iostream> 
#include <filesystem>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;


#include "Message.h"
#include "User.h"


int main()
{
    // for the first time youll receive a message that there is no data, cause it's really true) but
    // for the next time, you will have the data, and won't see this message again
    User user;
    Message message;

    user.setSpecificData();
    message.setSpecificData();


    fs::permissions("user.txt", fs::perms::group_write | fs::perms::others_all | fs::perms::owner_exec, fs::perm_options::remove);
    fs::permissions("message.txt", fs::perms::group_write | fs::perms::others_all | fs::perms::owner_exec, fs::perm_options::remove);
    
    return 0;
}