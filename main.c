/*
    Music Management

    Date:2017/03/06

*/

#define TRUE 1
#define FALSE 0


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

typedef struct song
{
    int id;
    char name[40];
    char singer[30];
    char lyricist[30];
    char  songwriter[30];
    int songtime;
    struct song *next;
    struct song *pre;
}SONG,*pSONG;

pSONG Song=NULL;

pSONG NewSong();



void MusicList(pSONG Song);

void homepage();


int main()
{
    homepage();



    return 0;
}



pSONG NewSong(pSONG Song)
{
    pSONG newSong=(pSONG)calloc(1,sizeof(SONG));
    system("Cls");
    printf("Add Music           [h]home \n");
    printf("_________________________________\n");

    printf("name:");
    scanf("%s",newSong->name);
    printf("singer:");
    scanf("%s",newSong->singer);
    printf("adding...");

    Sleep(300);
    printf("suscced!");
    Sleep(200);
    if(Song!=NULL)
    {
        newSong->pre=Song;
        Song->next=newSong;

    }
    return newSong;

}

void MusicList(pSONG Song)
{
    int n=0;
    char ch;
    system("Cls");
    printf("MUSIC LIST\n\n");
    printf("num     name                singer\n");
    printf("_____________________________________________\n");
    while(Song!=NULL)
    {
        printf("%d    %s                 %s\n",++n,Song->name,Song->singer);
        Song=Song->pre;
    }
    printf("\n");
    printf("_____________________________________________\n");
    printf("[h] home [a] add music");
    ch=getch();
    while(ch!='h')ch=getch();

}

void homepage()
{
    char ch;


    system("Cls");

    printf("_______________________________________\n");
    printf("______    MUSIC  MANAGEMENT     _______\n");
    printf("_______________________________________\n");
    Sleep(500);
    printf("0.addSong\n");
    printf("1.MusicList\n");
    printf("2.Exit\n");

    printf("_______________________________________\n");

    while(TRUE)
    {
        ch=getch();
        if(ch=='0')
        {
            Song=NewSong(Song);
            homepage();
        }
        if(ch=='1')
        {
            MusicList(Song);
            homepage();
        }
        if(ch=='2')
        {
            exit(0);
        }
    }

}
