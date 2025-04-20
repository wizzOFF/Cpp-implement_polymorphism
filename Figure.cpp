
#include "Figure.hpp"

using namespace.std;

void::Figure.afficher();
{
    cout << "Je suis une figure" << endl;
}

Carre::Carre(double cote) : m_cote(cote) {}

void Carre::afficher()
{
    cout << "Je suis un carre" << endl;
}

double Carre::perimetre()
{
    return 4 * m_cote;
}

double Carre::aire()
{
    return m_cote * m_cote;
}

Cercle::Cercle(double rayon) : m_rayon(rayon) {}

void Cercle::afficher()
{
    cout << "Je suis un cercle" << endl;
}

double Cercle::perimetre()
{
    return 2 * pi * m_rayon;
}

double Cercle::aire()
{
    return pi * m_rayon * m_rayon;
}
