#include <iostream>
#include<vector>

using namespace std;
vector<int>vector1;

void Binary_search(vector<int>&vector1,int y){
    int i = 0;
    int j = vector1.size()-1;
    int m;
    int location;
    while(i<j){
        m = (i+j)/2;
        if(y>vector1[m])
            i = m + 1;
        else
            j = m;
    }
    if (y == vector1[i])
        location=i+1;
    else
        location = 0;
    cout<<"Location: "<<location;

}
int main()
{
    int n,x,y;
    do{
        cout<<"Enter total number of elements: ";
        cin>>n;
        if(n==0){
            cout<<"Try again!"<<endl;

        }
    }while(n==0);
    for(int i = 0; i < n;i++){
        cin >> x;
        vector1.push_back(x);
    }
    cout<<"Enter a number to Search: ";
    cin>>y;
    Binary_search(vector1,y);
}
