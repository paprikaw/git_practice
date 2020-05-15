// Calculate the resources remained in the rewards income

#include<stdio.h>

int main(void) {
    int i = 0;
    int j = 0;
    int k = 0;
    while (1) {
        int i1 = 0;
        int j1 = 0;
        int k1 = 0;
        printf("Muzhu:");
        scanf("%d", &i1);
        printf("Zuan:");
        scanf("%d", &j1);
        printf("SuiPian:"); 
        scanf("%d", &k1);
        i = i +i1;
        j = j + j1;
        k = k + k1;
        printf("Muzhu: %d Zuan: %d SuiPian: %d\n", i, j, k);
    }
}