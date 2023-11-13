#include <iostream>
#define DIR_NUM 4
using namespace std;

int x = 0, y = 0;

// 시계방향으로 정의
int dx[DIR_NUM] = {1, 0, -1, 0};
int dy[DIR_NUM] = {0, -1, 0, 1};

int main() {
    string dirs;
    cin >> dirs;
    int dir = 3;
    for (int i=0; i<(int)dirs.size(); i++){
        char c_dir = dirs[i];

        if (c_dir=='L') dir = (dir-1 + 4) % 4;
        else if (c_dir=='R') dir = (dir+1) % 4;
        else if (c_dir=='F') {
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x << " " << y;

    return 0;
}