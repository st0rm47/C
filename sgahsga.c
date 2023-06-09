#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("abc.txt", "r");
    //Opens file in read mode

    fp2 = fopen("xyz.txt", "w");
    //Opens file in write mode

    while((ch = fgetc(fp1)) != EOF){
        fputc(ch, fp2);
    }
    //Copies every character from abc.txt to xyz.txt

    fclose(fp1);
    fclose(fp2);

    fp2 = fopen("xyz.txt", "r");
    //Opens file in read mode

    while((ch = fgetc(fp2)) != EOF){
        printf("%c",ch);
    }
    //Reads data from file xyz.txt and prints it to the user in terminal

    fclose(fp2);
}