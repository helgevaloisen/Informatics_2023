#include <iostream>
#include "lab5_header.h"

Character::Character() {
    name="Hero";
    HP=100;
    EXP=0; }

int Character::Take_hit(int DMG) {
    HP-=DMG;
    std::cout<<"Taken "<<DMG<<" damage.\n\n";
    return HP; }

int Character::Restore(int Heal) {
    HP+=Heal;
    std::cout<<"Restored "<<Heal<<" Hit Points.\n\n";
    return HP; }

int Character::Open_chest(int number) {
    EXP+=number;
    std::cout<<"Received "<<number<<" EXP for opening chest.\n\n";
    return EXP; }

std::string Character::Rename(std::string rename) {
    std::cout<<"Name changed from "<<name;
    name=rename;
    std::cout<<" to "<<name<<".\n\n";
    return name;
}

void Character::Show_stats() {
    std::cout<<"Current stats are:\n"<<"Name: "<<name<<"\n"
    <<"Hit Points: "<<HP<<" out of 100\n"<<"Experience: "<<EXP<<"\n\n"; }
