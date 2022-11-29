#include <stdio.h>

int a[5] = {5, 4, 3, 2, 1};

int main()
{ ///可以把所有的比對,全部做過一次!!!!
    for(int i=0; i<5; i++){ ///左手i
        for(int j=i+1, j<5; j++){ ///右手j
            if( a[i] > a[j] ){ ///反過來
                int temp=a[i]; ///就交換
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0; i<5; i++) printf("%d ", a[i] );
}
