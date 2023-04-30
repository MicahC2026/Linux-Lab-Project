#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int count = 0;
    int x = atoi(argv[1]);
    string line;
    while (getline(cin, line)) {
        for (char letter : line) {
            letter = toupper(letter);
            if (find(alphabet.begin(), alphabet.end(), letter) != alphabet.end()) {
                int n_index = find(alphabet.begin(), alphabet.end(), letter) - alphabet.begin() + x;
                if (n_index > 25) {
                    n_index = n_index - 26;
                }
                cout << alphabet[n_index];
                count++;
                if (count % 50 == 0) {
                    cout << endl;
                }
                else if (count % 5 == 0) {
                    cout << " ";
                }
            }
        }
    }
    return 0;
}

