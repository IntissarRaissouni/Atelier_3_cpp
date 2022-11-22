#include<iostream>
using namespace std;

    class Mere{
public:
    void display(){
        cout << "Je suis la classe Mere" << endl;
    }
};

class Fille : public Mere{
public:
    void display(){
        cout << "Je suis la classe Fille" << endl;
    }
};

int main()
{
    Fille obj;
    obj.display();
    return 0;
}

