# define LOADSTR \
\
struct inkey cannot;\
ALLNULL(cannot);\
keyword[11]=&cannot;\
cannot.name="cannot";\
cannot.context.i="YOU CAN IF YOU BELEIVE.";\
cannot.context.you="YEAH I CANT.I HAVE GOT MY OWN LIMITATIONS .";\
cannot.spec="";\
\
struct inkey can;\
ALLNULL(can);\
keyword[12]=&can;\
cannot.name="can";\
can.context.i="YOU CAN IF YOU BELEIVE.";\
can.context.you="WELL I HAVE GOT MY OWN LIMITATIONS .";\
can.spec="";\
\
struct inkey me;\
ALLNULL(me);\
me.name="me";\
keyword[13]=&me;\
me.context.tell="WHAT DO YOU WANT TO TALK ABOUT IT.";\
me.spec="YES YOU.";\
\
struct inkey feel;\
ALLNULL(feel);\
feel.name="feel";\
keyword[14]=&feel;\
feel.context.i="WHAT MAKES YOU FEEL THAT WAY ?";\
feel.spec="WELL I DONT FEEL ANYTHING SO I CANT REALLY UNDERSTAND YOU.";\
\
struct inkey stupid;\
ALLNULL(stupid);\
stupid.name="stupid";\
keyword[15]=&stupid;\
stupid.context.i="YOU SHOULDNT SAY THAT FOR YOURSELF.";\
stupid.context.you="THATS WHAT YOU THINK.";\
stupid.spec="THATS WHAT YOU THINK.";\
				\
struct inkey boring;\
ALLNULL(boring);\
boring.name="boring";\
keyword[16]=&boring;\
boring.context.you="HEY ITS YOU WHO IS BORING NOT ME.";\
boring.context.i="HEY THATS NOT TRUE.";\
boring.context.is="WHY DO YOU THINK SO ?";\
boring.spec="WELL EVERYTHING CANT BE INTRESTING.";\
				  \
struct inkey idiot;\
ALLNULL(idiot);\
keyword[17]=&idiot;\
idiot.name="idiot";\
idiot=stupid;\
			       \
struct inkey girlfreind;\
ALLNULL(girlfreind);\
girlfreind.name="girlfreind";\
keyword[18]=&girlfreind;\
girlfreind.context.my="THATS INTERESTING TELL ME MORE ABOUT HER.";\
girlfreind.spec="ARE YOU TALKING ABOUT YOUR GIRLFRIEND ?";\
				    \
struct inkey boyfreind;\
boyfreind.name="boyfreind";\
ALLNULL(boyfreind);\
keyword[19]=&boyfreind;\
boyfreind.context.my="THATS INTERESTING TELL ME MORE ABOUT HIM.";\
boyfreind.spec="THATS INTERESTING TELL ME MORE ABOUT HIM.";\
				      \
/*struct inkey depressed;\
ALLNULL(depressed);\
depresed.name="depressed";\
keyword[20]=&depressed;\
depressed.context.i="DONT YOU THINK LIFE IS SO BEAUTIFULL ?";\
depressed.spec="DEPRESSION IS REALLY A BAD DISEASE.";\*/   \
\					\
struct inkey unhappy;\
ALLNULL(unhappy);\
unhappy.name="unhappy";\
keyword[21]=&unhappy;\
unhappy.context.i="DONT YOU THINK LIFE IS SO BEAUTIFULL ?";\
unhappy.spec="THAT IS REALLY A BAD.";\
					  \
struct inkey sad;\
ALLNULL(sad);\
sad.name="sad";\
keyword[22]=&sad;\
sad.context.i="HEY LETS CHEER UP NOW.";\
sad.spec="THAT IS REALLY A BAD.";\
					    \
struct inkey mom;\
ALLNULL(mom);\
mom.name="mom";\
keyword[23]=&mom;\
mom.context.my="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mom.context.i="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mom.spec="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
					      \
struct inkey mother;\
ALLNULL(mother);\
mother.name="mother";\
keyword[23]=&mother;\
mother.context.my="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mother.context.i="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
mother.spec="MOTHERS ARE SO LOVING AND CARING ARENT THEY ?";\
