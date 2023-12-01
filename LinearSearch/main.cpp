#include <iostream>
#include<vector>

using namespace std;
vector<int>vector1;

void linear_search(vector<int>&vector1,int y){
    int i = 0;
    int location;
    while(i<vector1.size() && vector1[i]!=y){
        i++;
    }
    if(i<vector1.size()){
        location=i+1;
    }
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
            cout<<"try again!"<<endl;

        }
    }while(n==0);
    for(int i = 0; i < n;i++){
        cin >> x;
        vector1.push_back(x);
    }
    cout<<"Enter a number to Search: ";
    cin>>y;
    linear_search(vector1,y);
}
