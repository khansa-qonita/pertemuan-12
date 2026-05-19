#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarOn[10];

public:
    void setSaklarOn(int i, string value) {
        saklarOn[i] = value;
    }

    string getSaklarOn(int i) {
        return saklarOn[i];
    }
};

