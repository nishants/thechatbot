#define LOADSTRING \
struct inkey word;\
\
struct inkey sun;\
ALLNULL(sun);\
sun.name="sun";\
keyword[0]=&sun;\
sun.context.what="sun is a celestial body";\
sun.spec="DO YOU MEAN SUN";\
sun.context.how="MADE BY THE GASES AND DUST OF UNIVERSE";\
\
struct inkey got;\
ALLNULL(got);\
got.name="got";\
keyword[1]=&got;\
got.context.i="SINCE WHEN HAVE U GOT IT?";\
got.spec="";\
\
struct inkey like;\
ALLNULL(like);\
like.name="like";\
keyword[2]=&like;\
like.context.i="THATS INTRESTING TELL ME MORE.";\
like.context.you="WELL I AM NOT SURE WHAT I REALLY LIKE.";\
like.context.are="WHY DO YOU THINK THAT WAY ?";\
like.spec="TELL ME WHAT DO YOU LIKE TO DO";\
\
struct inkey you;\
ALLNULL(you); \
you.name="you";\
keyword[3]=&you;\
you.context.who="I AM SANDY,I AM AN ARIFICIAL INTELLIGENT SYSTEM PROGRAMMED BY NISHANT SINGH AND ATISH GAUTUM SINGH AT IPEC GHAZIABAD.";\
strcpy(you.context.made,you.context.who);\
you.context.how="I DONT DO OR THINK ANYTHING ON MY OWN . I AM ONLY MADE TO ACT SMART.";\
you.context.when="WHY ARE YOU TALKING TOO MUCH ABOUT ME ?";\
you.spec="ARE YOU TALKING ABOUT ME ?";\
\
struct inkey is;\
ALLNULL(is);  \
is.name="is";\
keyword[4]=&is;\
is.context.who="DONT YOU KNOW ?";\
is.context.what="I AM AFRAID I DONT KNOW?";\
is.spec="YOU ARE NOT CLEAR TO ME.";\
\
struct inkey lon;\
ALLNULL(lon);  \
lon.name="long";\
keyword[5]=&lon;\
lon.context.how="DOES THAT REALLY MATTER FOR HOW LONG HAS IT BEEN?";\
lon.spec="ARE YOU TALKING ABOUT SOME LENGTH";\
\
struct inkey more;\
ALLNULL(more);  \
more.name="more";\
keyword[6]=&more;\
more.context.tell="LETS TALK ABOUT SOMETHING ELSE.";\
more.spec="DO YOU WANT MORE OF IT.";\
\
struct inkey love;\
ALLNULL(love);   \
love.name="love";\
keyword[7]=&love;\
love.context.me="ITS GOOD TO THINK THAT WAY FOR SOMEONE.";\
love.spec="THATS INTRESTING TELL ME MORE.";\
\
struct inkey freinds;\
ALLNULL(freinds); \
freinds.name="freinds";\
keyword[8]=&freinds;\
freinds.context.my="ITS FUN TO BE WITH FRIENDS ISNT IT ?";\
freinds.spec="ARE YOU TALKING ABOUT YOUR FREINDS";\
\
struct inkey freind;\
ALLNULL(freind);\
keyword[9]=&freind;\
freind=freinds;\
\
struct inkey cant;\
ALLNULL(cant);\
keyword[10]=&cant;\
cant.name="cant";\
cant.context.i="YOU CAN IF YOU BELEIVE.";\
cant.context.you="YEAH I CANT.I HAVE GOT MY OWN LIMITATIONS .";\
cant.spec="";\
\





