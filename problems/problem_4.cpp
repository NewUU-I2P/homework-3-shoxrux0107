#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here

    std::string firstOct = macAddress.substr(0, 2); // extracting first octet as a string

    int decOct = std::stoi(firstOct, nullptr, 16); // converting from hex to dec

    if (decOct % 2 == 0){
        return "Unicast";
    } else if (decOct % 2 == 1){
        return "Multicast";
    }else return "Broadcast";




    // make use of control flow statements
    // return result;
}
