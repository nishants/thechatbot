#include<stdio.h>
#include<conio.h>
#include"string.h"
#include"loadstring.h"
#include"loadstr2.h"
#include"checkey.h"
#include"init.h"
#define index 4

#define ALLNULL(x) \
x.context.what="";\
x.context.how="";\
x.context.when="";\
x.context.i="";\
x.context.made="";\
x.context.who="";\
x.context.tell="";\
x.context.my="";\
x.context.you="";\
x.context.is="";\
x.context.are="";\
x.context.me="";\

struct key1
{
char *what ;
char *when;
char *how;
char *i;
char *made;
char *who;
char *tell;
char *my;
char *you;
char *is;
char *are;
char *me;
};

struct inkey
{
char *name;
char *spec;
struct key1 context;
} *keyword[index];



void main()
{
char scan1[12]="",scan2[12]="",reply[20]=""; /*all strings NULL*/
clrscr();

/*
if(!strcmpi(scan1,""))
puts("as");
printf("%d",scan1[0]);*/

gets(scan1);
gets(scan2);
strcpy(scan1,"");
LOADSTRING
LOADSTR
checkkey
LOAD
else
    {
    if(strcmp(scan1,"")==0 && strcmp(scan2,"")!=0)
    strcpy(reply,word.spec);
    }

//printf("the word is %s \n to print%s=",word.name,sun.context.what);

/*if(!strcmpi("what",scan1))
strcpy(word.context.what,reply); */

puts(reply);


getch();
}


