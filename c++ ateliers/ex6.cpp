#include <iostream>
#include <string>
using namespace std;

class Personne
{
    public:
        Personne(string nom, string prenom, string dateNaissance);
        void Afficher();

    private:
        string nom;
        string prenom;
        string dateNaissance;
};

Personne::Personne(string nom, string prenom, string dateNaissance) :
    nom(nom),
    prenom(prenom),
    dateNaissance(dateNaissance)
{}

class Employe : public Personne
{
    public:
        Employe(string nom, string prenom, string dateNaissance, int salaire);
        void Afficher();

    private:
        int salaire;
};

Employe::Employe(string nom, string prenom, string dateNaissance, int salaire) :
    Personne(nom, prenom, dateNaissance),
    salaire(salaire)
{}

class Chef : public Employe
{
    public:
        Chef(string nom, string prenom, string dateNaissance, int salaire, string service);
        void Afficher();

    private:
        string service;
};

Chef::Chef(string nom, string prenom, string dateNaissance, int salaire, string service) :
    Employe(nom, prenom, dateNaissance, salaire),
    service(service)
{}

class Directeur : public Chef
{
    public:
        Directeur(string nom, string prenom, string dateNaissance, int salaire, string service, string societe);
        void Afficher();

    private:
        string societe;
};

Directeur::Directeur(string nom, string prenom, string dateNaissance, int salaire, string service, string societe) :
    Chef(nom, prenom, dateNaissance, salaire, service),
    societe(societe)
{}

int main()
{
    Personne personne("nom", "prenom", "date");
    Employe employe("nom", "prenom", "date", 0);
    Chef chef("nom", "prenom", "date", 0, "service");
    Directeur directeur("nom", "prenom", "date", 0, "service", "societe");

    personne.Afficher();
    employe.Afficher();
    chef.Afficher();
    directeur.Afficher();

    return 0;
}
void Personne::Afficher()
{
    cout << nom << " " << prenom << " " << dateNaissance << endl;
}

void Employe::Afficher()
{
    Personne::Afficher();
    cout << salaire << endl;
}

void Chef::Afficher()
{
    Employe::Afficher();
    cout << service << endl;
}

void Directeur::Afficher()
{
    Chef::Afficher();
    cout << societe << endl;
}