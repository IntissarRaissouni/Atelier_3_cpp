#include <iostream> 
using namespace std; 

class Animal 
{ 
    public: 
        string nom; 
        int age; 
        void set_value() 
        { 
            nom = "Itri"; 
            age = 36; 
        } 
}; 

class Zebra: public Animal 
{ 
    public: 
        void affiche() 
        { 
            cout << "Nom: " << nom << endl; 
            cout << "Age: " << age << endl; 
            cout << "Origine: Afrique" << endl; 
        } 
};

class Dolphin: public Animal 
{ 
    public: 
        void affiche() 
        { 
            cout << "Nom: " << nom << endl; 
            cout << "Age: " << age << endl; 
            cout << "Origine: Ocean" << endl; 
        } 
}; 

int main() 
{ 
    Zebra zebra1; 
    Dolphin dolphin1; 
    zebra1.set_value(); 
    dolphin1.set_value(); 
    zebra1.affiche(); 
    dolphin1.affiche(); 
    return 0; 
}

