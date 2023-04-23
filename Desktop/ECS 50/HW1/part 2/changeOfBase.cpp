#include "changeOfBase.h"

int main() {
    string numChar;
    int numBase = 0, newBase = 0;

    catalog(numChar, numBase, newBase);

    unsigned int oldTotalBaseTen = getOldBaseNum(numChar, numBase);
    cout << numChar << " base " << numBase << " is " << convertToNewBase(oldTotalBaseTen, newBase) 
    << " base " << newBase << endl;

    return 0;
}
