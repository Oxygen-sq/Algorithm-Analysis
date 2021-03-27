#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    cin >> a >> c >> b;
    int leng = b - a + 1;
    int arry[2][leng];
    int i,j;
    int sum = 0;

    for(i = 0 ; i < leng ; i++){
        arry[0][i] = a;
        for(j = 0 ; j <= i ;j++){
            if(arry[0][i] % (j + 1) == 0){
                sum ++;
            }
        }
        arry[1][i] = sum;
        sum = 0;
        a++;
    }
    int maxs = arry[1][0];
    for(i = 0 ; i < leng ; i++){
        if(maxs < arry[1][i]){
            maxs = arry[1][i];
        }
    }
    cout << maxs;

    return 0;
}
