#ifndef CHANGE_OF_BASE_H
#define CHANGE_OF_BASE_H

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <limits>
using namespace std;
void catalog(string &numChar, int &numBase, int &newBase);
unsigned int  getOldBaseNum(string numChar, int numBase);
string convertToNewBase(unsigned int oldTotalBaseTen, int newBase);
char switchNum2Char(int num);
int switchChar2Num(char numChar);

#endif

