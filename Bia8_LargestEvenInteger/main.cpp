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
    int max_even=-1;
    bool found = false;
    for(int i = 0; i < n ; i ++){
        if(vector1[i]%2==0 && vector1[i] > max_even){
            max_even=i;
        }
    }
    cout<<"The location of the largest even number: "<< max_even+1;
    return 0;
}
