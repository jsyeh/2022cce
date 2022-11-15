#include <stdio.h>
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
void show_all()
{
    for(int i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");
}
int *left, *right;
int main()
{
    show_all();

    for(int k=0; k<10; k++){
        for(int i=0; i<10-1; i++){
            left = &a[i];
            right = &a[i+1];
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        show_all();
    }

}
