#include <iostream>
#include "lab5_header.h"

int main()
{
Character Player;
Player.Show_stats();
std::cout<<"What would you like to be called? ";
std::string new_name;
std::cin>>new_name;
Player.Rename(new_name);
Player.Take_hit(20);
Player.Restore(5);
Player.Open_chest(70);
Player.Show_stats();
}
