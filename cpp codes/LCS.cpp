#include <iostream>
#include<cstring>
using namespace std;

int LCS_Length(char X[], char Y[], int m, int n)
{
    int c[m+1][n+1];

    for(int i=1; i<=m; i++)
        c[i][0]=0;

    for(int j=0; j<=n; j++)
        c[0][j]=0;

    for(int i=1; i<=m; i++)
    {

        for(int j=1; j<=n; j++)
        {
            if(X[i-1]==Y[j-1]){
                c[i][j]=c[i-1][j-1]+1;
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j]=c[i-1][j];
            }
            else{
                c[i][j]=c[i][j-1];
            }
        }
    }

    return c[m][n];
}

int main()
{
    char X[] = "STRING";
    char Y[] = "STEERING";

    int m = strlen(X);
    int n = strlen(Y);

    cout << "Length of LCS = " << LCS_Length(X, Y, m, n);
    return 0;
}
