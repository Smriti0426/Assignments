#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*source,*dest;
    char ch;
    source=fopen("source.txt","r");
    if(source==NULL)
    {
        printf("File not found");
        exit(1);
    
    }
    dest=fopen("dest.txt","r");
    if(dest== NULL)
    {
        printf("File not open");
        exit(1);

    }
    while(ch=fgetc(source)!=EOF)
    {
        fputc(ch,dest);
    }
    printf("File copied successfully");
    return 0;

}