# define LOADSTR \
\
struct inkey cannot;\
ALLNULL(cannot);\
keyword[11]=&cannot;\
cannot.name="cannot";\
cannot.context.i="YOU CAN IF YOU BELEIVE.";\
cannot.context.you="YEAH I CANT.I HAVE GOT MY OWN LIMITATIONS .";\
cannot.spec="";\
if(!strcmpi(scan2,cannot.name))\
word=cannot;\
\
struct inkey can;\
ALLNULL(can);\
keyword[12]=&can;\
cannot.name="can";\
can.context.i="YOU CAN IF YOU BELEIVE.";\
can.context.you="WELL I HAVE GOT MY OWN LIMITATIONS .";\
can.spec="";\
if(!strcmpi(scan2,can.name))\
word=can;\
 \
struct inkey me;\
ALLNULL(me);\
me.name="me";\
keyword[13]=&me;\
me.context.tell="WHAT DO YOU WANT TO TALK ABOUT IT.";\
me.spec="YES YOU.";\
if(!strcmpi(scan2,me.name)) \
word=me;\
  \
struct inkey feel;\
ALLNULL(feel);\
feel.name="feel";\
keyword[14]=&feel;\
feel.context.i="WHAT MAKES YOU FEEL THAT WAY ?";\
feel.spec="WELL I DONT FEEL ANYTHING SO I CANT REALLY UNDERSTAND YOU.";\
if(!strcmpi(scan2,feel.name))\
word=feel;\
		      \
struct inkey stupid;\
ALLNULL(stupid);\
stupid.name="stupid";\
keyword[15]=&stupid;\
stupid.context.i="YOU SHOULDNT SAY THAT FOR YOURSELF.";\
stupid.context.you="THATS WHAT YOU THINK.";\
stupid.spec="THATS WHAT YOU THINK.";\
if(!strcmpi(scan2,stupid.name))\
word=stupid;\
				\
struct inkey boring;\
ALLNULL(boring);\
boring.name="boring";\
keyword[16]=&boring;\
boring.context.you="HEY ITS YOU WHO IS BORING NOT ME.";\
boring.context.i="HEY THATS NOT TRUE.";\
boring.context.is="WHY DO YOU THINK SO ?";\
boring.spec="WELL EVERYTHING CANT BE INTRESTING.";\
if(!strcmpi(scan2,boring.name))  \
word=boring;\
				  \
struct inkey idiot;\
ALLNULL(idiot);\
keyword[17]=&idiot;\
idiot.name="idiot";\
idiot=stupid;\
if(!strcmpi(scan2,idiot.name))\
word=idiot;\
			       \
struct inkey girlfreind;\
ALLNULL(girlfreond);\
girlfreind.name="girlfreind";\
keyword[18]=&girlfreind;\
girlfreind.context.my="THATS INTERESTING TELL ME MORE ABOUT HER.";\
girlfreind.spec="ARE YOU TALKING ABOUT YOUR GIRLFRIEND ?";\
if(!strcmpi(scan2,girlfreind.name))\
word=girlfreind;\
				    \
struct inkey boyfreind;\
boyfreind.name="boyfreind";\
ALLNULL(boyfreind);\
keyword[19]=&boyfreind;\
boyfreind.context.my="THATS INTERESTING TELL ME MORE ABOUT HIM.";\
boyfreind.spec="THATS INTERESTING TELL ME MORE ABOUT HIM.";\
if(!strcmpi(scan2,girlfreind.name))  \
word=boyfreind;\
				      \
struct inkey depresed;\
ALLNULL(depressed);\
depresed.name="depresed";\
keyword[20]=&depresed;\
depresed.context.i="DONT YOU THINK LIFE IS SO BEAUTIFULL ?";\
depresed.spec="DEPRESSION IS REALLY A BAD DISEASE.";\
if(!strcmpi(scan2,depresed.name))      \
word=depresed;\
					\
struct inkey unhappy;\
ALLNULL(unhappy);\
unhappy.name="unhappy";\
keyword[21]=&unhappy;\
unhappy.context.i="DONT YOU THINK LIFE IS SO BEAUTIFULL ?";\
unhappy.spec="THAT IS REALLY A BAD.";\
if(!strcmpi(scan2,unhappy.name))         \
word=unhappy;\
					  \
struct inkey sad;\
ALLNULL(sad);\
sad.name="sad";\
keyword[22]=&sad;\
sad.context.i="HEY LETS CHEER UP NOW.";\
sad.spec="THAT IS REALLY A BAD.";\
if(!strcmpi(scan2,unhappy.name))           \
word=unhappy;\
					    \
struct inkey mom;\
ALLNULL(mom);\
mom.name="mom";\
keyword[23]=&mom;\
mom.context.my="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mom.context.i="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mom.spec="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
if(!strcmpi(scan2,mom.name))                 \
word=mom;\
					      \
struct inkey mother;\
ALLNULL(mother);\
mother.name="mother";\
keyword[23]=&mother;\
mother.context.my="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mother.context.i="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mother.spec="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
if(!strcmpi(scan2,mother.name))                \
word=mother;\