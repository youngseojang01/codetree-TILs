#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    vector<int> ans;

    int n, k;
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        q.push(i);
    }

    int cnt = 1;
    while(q.empty()){
        if (cnt == k){
            int fr = q.front();
            q.pop();
            ans.push(fr);
            cnt = 1;
        }
        else {
            int fr = q.front();
            q.push(fr);
            q.pop();
            cnt++;
        }
    }

    for (int i=0; i<n; i++){
        cout << ans[i];
    }
    
    return 0;
}