#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of integers: ";
    cin >> n;

    vector<int> arr(n);
    int x;
    cout << "Enter integers: ";
    for(int i = 0; i < n; i++){
        cin >> x;
        arr[i] = x;
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int avg = sum / n;
    cout << "The average is: " << avg << endl;

    return 0;
}
