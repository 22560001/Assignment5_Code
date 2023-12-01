#include <iostream>
#include <vector>

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
    for (int i = 0; i < n; i++){
        cin >> vector1[i];
    }
    int Min = vector1[0];
    for (int i = 0; i < vector1.size(); i ++){
        if(Min > vector1[i])
            Min = vector1[i];
    }
    cout<<"smallest integer: "<< Min;
    return 0;
}
