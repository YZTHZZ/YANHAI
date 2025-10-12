#include <iostream>
#include <string>
using namespace std;

int main() {
    string S1, S2;
    getline(cin, S1);
    getline(cin, S2);
    size_t pos;
    while ((pos = S1.find(S2)) != string::npos) {
        S1.erase(pos, S2.size());
    }
    cout << S1 << endl;
    return 0;
}