#include <iostream>
#include <string>
#include "network.h"
int main(int argc, char** argv)
{
    std::cout << "Starting decentralized chat app" << std::endl;
    std::cout << "Scanning IP list" << std::endl;

    Network network;
    network.begin();
    network.bindMyself();
    network.useIPFile("./ips.txt");
    network.scan();

    while(1)
    {
        std::string msg;
        std::getline (std::cin,msg);
      //  std::cout << "You: " << msg << std::endl;
        network.sendMessage(msg);
    }
    return 0;
}