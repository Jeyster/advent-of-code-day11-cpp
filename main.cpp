#include <iostream>
#include "tools.h"
#include "Hex.h"

using namespace std;

int main()
{
    vector<string> input(importInput("input.txt"));
    displayVector(input);

    return 0;
}
