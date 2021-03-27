#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int i,number;
    int arry[2][k+1];
   // int arry1[100];
    int sum = 0,num = 0;
    int counts = 0;

    for(i = 0 ; i <= k ; i++){
        cin >> number;
        arry[0][i] = number;
        arry[1][i] = 0;
    }
    for(i = 0 ; i < k+1 ; i++){
        sum = sum + arry[0][i];
        if((arry[0][i+1] - arry[0][i]) > 7){
            num = arry[0][i+1] - arry[0][i];
            cout << "No Solution";
            return 0;
        }
        if(sum > 7){
            arry[1][i] = 1;
            counts++ ;
            sum = 0;
            i--;
        }
    }

    cout << counts << endl;
    for(i = 0 ; i <= k ; i++){
        if(arry[1][i] == 1){
            cout << i <<" ";
        }
    }
    return 0;
}
