#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *ms, *mh;
    int ch;
    ms=fopen("G:/OFFICIAL- 'Manwa Laage' VIDEO Song - Happy New Year - Shah Rukh Khan - Arijit Singh - Shreya Ghoshal - YouTube.mp4", "rb");
    if(ms==NULL){
        puts("file can't open");
        fclose(ms);
        //exit(1);

    }
    mh=fopen("H:/manoa lage.mp4", "wb");
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
