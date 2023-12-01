#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    do {
        cout << "Enter total number of elements: ";
        cin >> n;
        if (n == 0) {
            cout << "Try again!"<< endl;
        }
    } while (n == 0);

    vector<int> vector1(n);
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    sort(vector1.begin(), vector1.end());

    auto newEnd = unique(vector1.begin(), vector1.end());
    vector1.erase(newEnd, vector1.end());

    vector<int> vector2;
    for(int i = 0; i < n; i++) {
        if (vector1[i] < 0) {
            vector2.push_back(vector1[i]);
        }
    }

    cout << "List of negative numbers from the given list: " << endl;
    for(int i = 0; i < vector2.size(); i++) {
        cout << vector2[i] << " ";
    }

    return 0;
}
