/* 門限 */
#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    cout << 18*60 - (h*60+m) << endl;

    return 0;
}


/* 高橋君の研修 */
// #include <iostream>
// using namespace std;

// int main() {
//     string A, B;
//     cin >> A >> B;
    
//     if(A.length() > B.length()) {
//         cout << A << endl;
//     }else{
//         cout << B << endl;
//     }

//     return 0;
// }


/* Rotate */
// #include <iostream>

// int main() {
//     std::string S, S_dash;
//     std::cin >> S;
//     std::cout << S[1] << S[2] << S[0] << std::endl;

//     return 0;
// }


/* Tires */
// #include <iostream>

// int main() {
//     std::string S;
//     std::cin >> S;
//     if (S[S.length()-1] == 'r') std::cout << "er" << std::endl;
//     else std::cout << "ist" << std::endl;

//     return 0;
// }


/* Chinchirorin*/
// #include <iostream>

// int main() {
//     int a,b,c;
//     std::cin >> a >> b >> c;

//     if (a==b)      std::cout << c << std::endl;
//     else if (b==c) std::cout << a << std::endl;
//     else if (c==a) std::cout << b << std::endl;
//     else std::cout << 0 << std::endl;

//     return 0;
// }


/* Long Loong*/
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     cout << 'L';
//     for (int i=0; i<N; i++) cout << 'o';
//     cout << "ng" << endl;

//     return 0;
// }