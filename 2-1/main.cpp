#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
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

=======
    int n,i,j;
    cin>>n;
    int arry[2][n];
    int a;

    for(i = 0;i<n;i++)
    {
        cin>>a;
        arry[0][i]=a;
        arry[1][i]=1;
        for(j = 0;j<i;j++)
        {
            if(arry[0][j]==a)
            {
                arry[1][j]++;
            }
        }

    }
    int max=arry[1][0];
    int max1;

    for(i=0;i<n;i++)
    {
        if(max<arry[1][i])
        {
            max = arry[1][i];
            max1 = arry[0][i];
        }
    }

    cout << max1 << '\n' << max<< endl;
>>>>>>> 算法设计与分析 实验二 21-3-27
    return 0;
}
