//
// Created by joker on 22-8-31.
//

#include "iostream"
#include <unistd.h>
using namespace std;
int main (int argc, char const *argv[])
{
    int i, j, k, f;
    for (i=1;i <=4;i++){
        for (j = 1; j <= 30; j++) {
            cout << "a";
        }
        for (k = 1; k <=  8-2*i; k++) {
            cout << "b";
        }
        for (f = 1; f <= 2*i; f++) {
            cout << '*';
        }
        cout << endl;
    }
    for(i=1;i<=3;i++){
        for (j=1;j<=30;j++)
            cout<<" ";
        for (f=1;f<=7-2*i;f++)
            cout<<'*';
        cout<<endl;
    }
    pause();
    return 0;
}
