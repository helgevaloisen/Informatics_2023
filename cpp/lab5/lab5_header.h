#pragma once
#ifndef LAB5_HEADER_H
#define LAB5_HEADER_H

class Character {

private:

std::string name;
int HP, EXP;

public:

Character();
void Show_stats();

std::string Rename(std::string name);

int Take_hit(int DMG);
int Restore (int Heal);
int Open_chest (int number);
};

#endif