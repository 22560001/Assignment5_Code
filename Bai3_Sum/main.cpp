#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, sum = 0;

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

    for (int i = 0; i < n; i++) {
        sum += vector1[i];
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
