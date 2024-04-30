/* PC on the Table */
#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    string str[H];
    for(int i=0; i<H; i++) cin >> str[i];

    for (int i=0; i<H; i++){
        for(int j=0; j<W-1; j++){
            if(str[i][j]=='T' && str[i][j+1]=='T'){
                str[i][j]   = 'P';
                str[i][j+1] = 'C';
            }
        }
    }

    // result
    for(int i=0; i<H; i++) cout << str[i] << endl;

    return 0;
}