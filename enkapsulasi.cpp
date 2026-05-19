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

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarOn(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarOn(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarOn(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarOn(3, "Lampu Dapur");

    cout << lampuRumah.getSaklarOn(0) << endl;
    cout << lampuRumah.getSaklarOn(1) << endl;
    cout << lampuRumah.getSaklarOn(2) << endl;
    cout << lampuRumah.getSaklarOn(3) << endl;

    return 0;
}