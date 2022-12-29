#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Aslihan Aydogdu 20010011045
 typedef struct Sarkilar
{
    char songName[100];
    int popularity;
} sarkilar;
typedef struct Sarkicilar
{
    char singerName[50];
    int howMany;
    int singerID;
    sarkilar *pointer2;
    sarkilar interesting;
} sarkicilar;
sarkicilar singers, *pointer;
int singerCount = 0;
void addSingers()
{
    int IloveBosch;
    IloveBosch = singerCount;
    printf("Please Type The name --> \n");
    scanf("%s", &singers.singerName);
    print("%s \n", singers);
    (pointer + IloveBosch)->singerID = singers.singerName;
    printf("Type a number which is not 0.(we gave you number for your singer babe! :) \n");
    printf("Hey girlie Hold Still...\n");
    scanf("%d", &singers.singerID);
    (pointer + IloveBosch)->singerID = singers.singerID;
    printf(" %d", singers.singerID);
    singerCount = singerCount + 1;
    printf("Successfully Added !");
}
void addSongForYourSinger()
{
    char singername[50];
    int popMusicRate;
    int inputId;
    int IloveVestel;
    IloveVestel = 0;
    printf("Type your singer Id to Add some Songs \n");
    scanf("%d", &inputId);
    for(int i = 0 ;i< singerCount; i++)
    {
        if((pointer + i)->singerID == inputId)
        {
            printf("Your singer Found --> %s \n", (pointer + i)->singerID);
            printf("Please Type How many Songs do you want to add?");
            scanf("%d", &singers.howMany);
            (pointer + i)->howMany = singers.howMany;
            for(int j = 0; j < (pointer + i)->howMany; j++)
            {
                printf("Please Type the songs Name \n");
                scanf("%s", &singername);
                strcpy(singers.interesting.songName, singername);
                printf("Please Type the songs popularity \n");
                scanf("%d", &popMusicRate);
                ((pointer + i)->pointer2 +j)->interesting.popularity = popMusicRate;
        }
        else
        {
            printf("505 Not found \n");
            printf("Please Type Again Later");
            break;
        }
    }
}
void listingSingers()
{
    printf("LİSTİNG... \n");
    printf("please hold still \n");
    for(int i = 0; i < singerCount; i++)
    {
        if((pointer + i)->singerID != 0)
        {
            printf("The singers Name --> %s \n", (pointer +i)->singerName);
            printf("The singers ID %d --> \n", (pointer + i)->singerID);
            printf("The songs are... \n \n");
            for(int j = 0; j< (pointer + i)->howMany; j++)
            {
                printf("%d . Song is --> %s \n",j+1, ((pointer + i)->pointer2 +j)->songName);
                printf("The popularity is --> %d \n",((pointer + i)->pointer2 +j)->popularity);
            }
        }
        else
        {
            continue;
        }
    }
}
void deleteSingers()
{
    int littleSacrificeId;
    printf("Please Type the Id you want to delete! \n");
    scanf("%d" &littleSacrificeId);
    for(int i = 0; i< singerCount; i++)
    {
        if((pointer + i)->singerID == littleSacrificeId)
        {
            printf("ID is found -> %s",(pointer + i)->singerID);
            printf("it's getting deleted, just WAİT a moment... \n");
            printf("Still Holding still? hahah joking \n");
            (pointer + i)->singerID = 0;


        }
        else
        {
            printf("Cannot found The ID, Please Try again later \n");
        }
    }
    printf("DONE \n");
}
void upgradingIsAnotherLife()
{
    int littleSacrificeForSongs;
    printf("Please Type The Singers ID to upgrade the songs\n");
    scanf("%d", &littleSacrificeForSongs);
    for(int i = 0; i < singerCount; i++)
    {
        if((pointer + i)->singerID == littleSacrificeForSongs)
        {
            printf("Id is found %s \n ", (pointer + i)->singerName);
            printf("Please type how many songs do you want (this will be upgraded)\n");
            scanf("%d" (pointer + i)->howMany);
            for(int j = 0; j < (pointer + i)->howMany; j++)
            {
                printf("Please Type the songs Name \n");
                scanf("%s" &singers.songName);
                ((pointer +i)->pointer2 + j)->songName = singers.songName;
                printf("Please Type the songs popularity \n");
                scanf("%d", &singers.popularity);
                ((pointer +i)->pointer2 +j)->popularity = singers.popularity;

            }
        }
        else
        {
            printf("The ID is not Found. Please Try again Later \n");
            break;
        }
    }
    printf("DONE \n");
}
void popularitySorting()
{
    int maxPopularity;
    for(int i = 0; i< singerCount; i++)
    {
        for(int j = 0; j<(pointer + i)->howMany ; j++)
        {
            if(maxPopularity < (pointer + i)->pointers2 +j)->popularity)
            {
                maxPopularity = *((pointer +i)->karakter2 + j)->popularity;
            }
            else
            {
                continue;
            }
        }
        printf("%s . max popularity is --> %d ", (pointer + i)->singerName, maxPopularity);
    }
}
int main()
{
    pointer = (Sarkicilar*) malloc(sizeof(Sarkicilar));
    pointer2 = (Sarkilar*) malloc(sizeof(typedef struct Sarkicilar)) ;  //buraya kitapdan bak.
    int error_count = 0;
    int choiceofMenu;
    while(error_count < 3)
    {
        printf("==============================\n");
        printf("WELCOME THE SPOTURKISCH \n");
        printf("==============================\n");
        printf("-------------------------------\n");
        printf(" 0. Exit \n");
        printf("-------------------------------\n");
        printf("1. Adding Singers \n")
        printf("-------------------------------\n");
        printf("2. Adding Songs to Singers \n");
        printf("-------------------------------\n");
        printf("3.Listing Singers \n");
        printf("-------------------------------\n");
        printf("4. Deleting Singers \n");
        printf("-------------------------------\n");
        printf("5. Upgrading Singers Songs \n");
        printf("-------------------------------\n");
        printf("6. Popularity Calculator \n");
        printf("-------------------------------\n");
        printf("!!!!!--- Please Type it correctly, if you made 3 typo error in the menu, program will *poof* close itself. \n --!!!");
        printf("Please Choose above them \n");
        scanf("%d", &choiceofMenu);
        if(choiceofMenu == 1)
        {
            addSingers();
        }
        else if(choiceofMenu == 2)
        {
            addSongForYourSinger();
        }
        else if(choiceofMenu == 3)
        {
            listingSingers();
        }
        else if(choiceofMenu == 4)
        {
            deleteSingers();
        }
        else if(choiceofMenu == 5)
        {
            upgradingIsAnotherLife();
        }
        else if(choiceofMenu == 6)
        {
            popularitySorting();
        }
        else if(choiceofMenu == 0)
        {
            printf("EXİTİNG... \n");
            break;
        }
        else
        {
            printf("You made a typo error \n");
            printf("Heading back to MENU \n");
        }
    }
    return 0;
}
