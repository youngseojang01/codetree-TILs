#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i=0; i<n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    for (int i=0; i<n; i++){
        int min = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}