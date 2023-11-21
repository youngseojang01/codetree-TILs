#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[100];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool sorted = false;
    while(!sorted){
        sorted = true;
        for (int i=0; i<n-1; i++){
            if (arr[i]>arr[i+1]){
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                sorted = false;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}