#include "changeOfBase.h"

void catalog(string &numChar, int &numBase, int &newBase) {
    string temp;

    cout << "Please enter the number's base: ";
    cin >> ws >> numBase;

    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Please enter the number: ";
    //getline(cin, numChar);
    //stringstream ss(numChar);
    cin >> numChar;

    cout << "Please enter the new base: ";
    cin >> ws >> newBase;
}

unsigned int getOldBaseNum(string numChar, int numBase) {
    int len = numChar.length();
    unsigned int totalNum = 0;

    for (int i = len - 1; i >= 0; i--){
        if (isalpha(numChar[i])) {
            // Character represents num
            // Times their num with numBase^len - i
            // Because from right to left is n^0 n^1 n^2...
            totalNum += switchChar2Num(numChar[i]) * pow(numBase, len - i - 1);
        } else {
            totalNum += (numChar[i] - '0') * pow(numBase, len - i - 1);
        }
    } 

    return totalNum;
}

string convertToNewBase(unsigned int oldTotalBaseTen, int newBase) {
    string newBaseNum;

    while (oldTotalBaseTen > 0) {
        unsigned int temp = oldTotalBaseTen % newBase;
        
        if (temp < 10) {
            newBaseNum.insert(0, to_string(temp));
        } else {
            newBaseNum.insert(0, 1, switchNum2Char(temp));
        }
        oldTotalBaseTen = oldTotalBaseTen / newBase;
    }

    return newBaseNum;
}

char switchNum2Char(int num) {
    return char(num + 55);
}

int switchChar2Num(char numChar) {
    return toupper(numChar) - 'A' + 10;
}