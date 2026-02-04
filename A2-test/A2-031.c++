#include <iostream>
#include <vector>
using namespace std;

int main() {
    // addsin value
    int size;
    cin >> size;
    vector<char> dna1(size),dna2(size);
    for (int i=0;i<size;i++) {
        cin >> dna1[i];
    }
    for (int i=0;i<size;i++) {
        cin >> dna2[i];
    }
    // swap value
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int cable,position;
        char gene;
        cin >> cable >> position >> gene;
        if (cable == 1) {
            dna1[position] = gene;
        }
        else if (cable == 2) {
            dna2[position] = gene;
        }
    }
    int pair = 0;
    for (int i=0;i<size;i++) {
        bool goodPair =(dna1[i]=='A' && dna2[i]=='T') ||
                        (dna1[i]=='T' && dna2[i]=='A') ||
                        (dna1[i]=='C' && dna2[i]=='G') ||
                        (dna1[i]=='G' && dna2[i]=='C');
        if (!goodPair) pair++;
    }
    for (int i=0;i<size;i++) {
        cout << dna1[i] << " ";
    }
    cout << endl;
    for (auto i:dna2) {
        cout << i << " ";
    }
    cout << endl;
    cout << pair;
    return 0;
}