#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ms, *mh;
    int ch;
    ms=fopen("G:/Aami Tomar Kache - Yoddha - Dev - Mimi - Raj Chakraborty - 2014.mp4", "rb");
    if(ms==NULL){
        puts("file can't open");
        fclose(ms);
        //exit(1);

    }
    mh=fopen("H:/ame tomar kache rakbo.mp4", "wb");
    if(mh==NULL){
        puts("file can not open, sorry");
        fclose(mh);
        //exit(2);

    }
    while(1){
        ch=fgetc(ms);
        if(ch==EOF){
            break;
        }
        else
        fputc(ch, mh);
    }
    fclose(ms);
    fclose(mh);
    getch();
    return 0;
}
