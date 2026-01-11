#include <iostream>
using namespace std;

int main() {

    char pearltype;
    int pearlgram;
    char typetea;
    int sweetlevel;
    int v;

    cin >> pearltype >> pearlgram;
    cin >> typetea >> sweetlevel >> v;

    int energy=0;
    int energypercc=0;
    if (pearltype == 'H') {
        energy=5*pearlgram;
    }
    else if (pearltype == 'O') {
        energy=3*pearlgram;
    }
    else if (pearltype == 'J') {
        energy=2*pearlgram;
    }
    
    if (typetea == 'R') {
        if (sweetlevel == 1) energypercc=12;
        else if (sweetlevel == 2) energypercc=18;
        else if (sweetlevel == 3) energypercc=25;
    }
    else if (typetea == 'T') {
        if (sweetlevel == 1) energypercc=15;
        else if (sweetlevel == 2) energypercc=20;
        else if (sweetlevel == 3) energypercc=30;
    }
    else if (typetea == 'M') {
        if (sweetlevel == 1) energypercc=10;
        else if (sweetlevel==2) energypercc=15;
        else if (sweetlevel==3) energypercc=20;
    }

    int teaenergy=energypercc*v;
    int total=energy+teaenergy;

    cout << total;
    
    return 0;
    
}