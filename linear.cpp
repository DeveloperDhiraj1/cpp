#include <iostream>
using namespace std;

int main() {
    cout<<"enter the number of search in this array:-";
    int key;
    cin>>key;
    int n;
    cout<<"enetr the size of array:-";
    cin>>n;
    int arr[n];
    cout<<"enter the element of aray:-";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found: " << key << " at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not Found" << endl;
    }

    return 0;
}
