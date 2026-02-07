// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;
// int main() {

//     char arr[100];
//     cin >> arr;

//     int count_o = 0, count_z = 0;

//     for(int i = 0; i < strlen(arr); i++) {
//         if(arr[i] == 'z')
//             count_z++;
//         else if(arr[i] == 'o')
//             count_o++;
//     }

//     if(count_o == 2 * count_z) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;  
//     }

//     return 0;
	
// }

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[100];
    cin >> arr;

    int count_o = 0, count_z = 0;

    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] == 'z')
            count_z++;
        else if (arr[i] == 'o')
            count_o++;
    }

    if (count_o == 2 * count_z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
