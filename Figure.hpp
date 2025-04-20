
#ifdef Figure_hpp
#define Figure_hpp

#include <iostream>

class Figure
{
    public:
        virtual void afficher();
        virtual double perimetre() = 0;
        virtual double air() = 0;

};

class Carre
{
    public:
        Carre(double cote);
        virtual void afficher();
        virtual double perimetre() = 0;
        virtual double air() = 0;
    
    private:
        double m_cote;
};

class Cercle
{
    public:
        Cercle(double rayon);
        virtual void afficher();
        virtual double perimetre() = 0;
        virtual double aire() = 0;
    
    private:
        double m_rayon;
        const double pi(3.14);
};

#endif /* Figure_hpp */