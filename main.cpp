
#include <iostream>
#include <vector>
#include "Figure.hpp"

using namespace std;

int main (int argc, char* argv[])
{
    vector<Figure*> vector;

    vector.puch_back(new Carre(10));
    vector.puch_back(new Cercle(10));

    for(int i = 0; i < vector.size(); i++)
    {
        vector[i]->afficher();
        cout << "perimetre : " vector[i]->perimetre();
        cout << "aire : " vector[i]->aire();
    }
    
    return 0;
}