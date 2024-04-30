


/* Balance */
// #include <iostream>
// using namespace std;

// int calcTotalWeight(
//     const int num, //1からnumまでの重りの個数
//     const int *W   // 重さの配列Wのポインタ
//     ){
    
//     int totalWeight = 0;
//     for(int i=0; i<num; i++) {
//         totalWeight += W[i];
//     }

//     // debug

//     return totalWeight;
// }

// int main() {
//     int N;
//     cin >> N;
//     int W[N];
//     for(int i=0; i<N; i++) cin >> W[i];

//     int absDiff = 999;
//     for(int i=0; i<N; i++){
//         const int tmpAbsiff = abs((abs(calcTotalWeight(N, W)-calcTotalWeight(i, W))) - calcTotalWeight(i, W));
//         if(tmpAbsiff < absDiff) absDiff = tmpAbsiff;
//     }

//     cout << absDiff << endl;

//     return 0;
// }


/* Theater */
// #include <iostream>
// using namespace std;

// int main() {
//     int N, total=0;
//     cin >> N;

//     for(int i=0; i<N; i++){
//         int l, r;
//         cin >> l >> r;
//         total += (r-l+1);
//     }
//     cout << total << endl;

//     return 0;
// }


/* Time Limit Exceed */
// #include <iostream>
// using namespace std;

// int main() {
//     int N, T;
//     cin >> N >> T;
//     int cost[N], time[N];

//     for(int i=0; i<N; i++){
//         cin >> cost[i] >> time[i];
//     }

//     int minCost = 99999;
//     for(int i=0; i<N; i++){
//         if(time[i] <= T && cost[i] < minCost){
//             minCost = cost[i];
//         }
//     }

//     if(minCost != 99999){
//         cout << minCost << endl;
//     }else{
//         cout << "TLE" << endl;
//     }
//     return 0;
// }


/* Modulo Number */
// #include <iostream>
// using namespace std;

// int main() {
//     // long long N;
//     // cin >> N;
    
//     // for(int i=0; i<998244353; i++) {
//     //     if((N-i) % 998244353 == 0){
//     //         cout << i << endl;
//     //         break;
//     //     }
//     // }

//     // return 0;

//     /* 別解 */
//     const int mod = 998244353;
//     long long N;
//     cin >> N;
//     int amari = N % mod;
//     if(amari<0) amari += mod;
//     cout << amari << endl;
// }