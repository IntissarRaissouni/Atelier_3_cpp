
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Vecteur3d
{
public:
    //attributs
    float x;
    float y;
    float z;
    //Constructeur
    Vecteur3d(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}
    //Méthodes
    string toString();
    float produitScalaire(Vecteur3d v2);
    float norme();
    bool coincide(Vecteur3d v2);
    static Vecteur3d sum(Vecteur3d v1, Vecteur3d v2);
    static Vecteur3d normax(Vecteur3d v1, Vecteur3d v2);
};

//Fonction produitScalaire
//Retourne le produit scalaire de 2 vecteurs
float Vecteur3d::produitScalaire(Vecteur3d v2)
{
  return x * v2.x + y * v2.y + z * v2.z;
}

//Fonction norme
//Retourne la norme d'un vecteur
float Vecteur3d::norme()
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

//Fonction coincide
//Retourne true si les 2 vecteurs ont les mêmes composantes
bool Vecteur3d::coincide(Vecteur3d v2)
{
    return x == v2.x && y == v2.y && z == v2.z;
}

//Fonction sum
//Retourne la somme de 2 vecteurs
Vecteur3d Vecteur3d::sum(Vecteur3d v1, Vecteur3d v2)
{
    Vecteur3d v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    v3.z = v1.z + v2.z;
    return v3;
}

//Fonction normax
//Retourne le vecteur ayant la plus grande norme
Vecteur3d Vecteur3d::normax(Vecteur3d v1, Vecteur3d v2)
{
    if (v1.norme() < v2.norme())
    {
    return v2;
    }
    else
    {
    return v1;
    }
}

//Fonction toString
//Retourne un string contenant les 3 composantes du vecteur
string Vecteur3d::toString()
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}

int main()
{
  //Déclaration de vecteurs
    Vecteur3d v1(1, 2, 3);
    Vecteur3d v2(-1, -2, -3);
    Vecteur3d v3(2, 2, 2);
    Vecteur3d v4(1, 2, -3);

  //Somme
    Vecteur3d v5 = Vecteur3d::sum(v2, v3);

  //Produit scalaire
    float ps = v1.produitScalaire(v5);

  //Norme
    cout << "Norme de v1 : " << v1.norme() << endl;

  //Coïncide
    if (v1.coincide(v5))
    {
    cout << "v1 et v5 ont les mêmes composantes" << endl;
    }
    else
    {
    cout << "v1 et v5 n'ont pas les mêmes composantes" << endl;
    }

  //Normax
    Vecteur3d vn = Vecteur3d::normax(v1, v2);
    cout << "Vecteur ayant la plus grande norme : " << vn.toString() << endl;

    return 0;
}