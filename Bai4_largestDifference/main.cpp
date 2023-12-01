#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int largest_difference;

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
    largest_difference= abs(vector1[0]-vector1[1]);
    //cout<<largest_difference<<endl;
    for (int i = 1; i < n; i++) {
        int j = i + 1;
        if(j<n){
            int temp = abs(vector1[i] - vector1[j]);
            if(largest_difference<temp){
                largest_difference = temp;
            }
        }
    }

    cout << "largest_Difference: " << largest_difference << endl;

    return 0;
}
