#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("SE","wb");
    int i;
    char ch ='A';
    for(i=0; i<5; i++){
        fputc(ch++,fp);
    }
    fclose(fp);
    return 0;
}
