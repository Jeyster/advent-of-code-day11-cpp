#include "tools.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

vector<string> importInput(string const &filename)
{
    ifstream myStream(filename.c_str());
    if(!myStream)
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
        //exit(0);
    }
    string inputLine;
    getline(myStream, inputLine);

    stringstream ss(inputLine);
    vector<string> result;

    while( ss.good() )
    {
        string substring;
        getline( ss, substring, ',' );
        result.push_back( substring );
    }
    return result;
}

void displayVector(vector<string> const &stringVector)
{
    cout << "Input : " << endl;
    for(int i(0); i != stringVector.size(); ++i)
    {
        cout << stringVector[i] << endl;
    }
    cout << endl << "Taille input : " << stringVector.size() << endl;;
}
