#include <iostream>
using namespace std;

class Test {
public:
    static int callCounter;
    void call() {
        callCounter++;
    }
};

int Test::callCounter = 0;

int main() {
    Test t1, t2;
    t1.call();
    t2.call();
    t1.call();
    cout << "callCounter = " << Test::callCounter << endl;
    return 0;
}