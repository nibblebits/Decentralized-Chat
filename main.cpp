/*
Decentralized Chat - Simple project to demonstrate decentralization
Copyright (C) 2019  Daniel McCarthy

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

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