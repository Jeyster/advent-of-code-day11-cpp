#include <iostream>
#include "tools.h"

using namespace std;

int main()
{
    vector<string> input(importInput("input.txt"));
    displayVector(input);

    return 0;
}
