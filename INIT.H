#define LOAD \
if(!strcmpi(scan1,"what")) \
if(strcmp(word.context.what,"")!=0);\
strcpy(reply,word.context.what);  \
 \
if(!strcmpi(scan1,"HOW")) \
if(strcmp(word.context.how,"")!=0);\
strcpy(reply,word.context.how);  \
\
if(!strcmpi(scan1,"you")) \
if(strcmp(word.context.you,"")!=0);\
strcpy(reply,word.context.you);  \
\
if(!strcmpi(scan1,"when")) \
if(strcmp(word.context.when,"")!=0);\
strcpy(reply,word.context.when);  \
\
if(!strcmpi(scan1,"i")) \
if(strcmp(word.context.i,"")!=0);\
strcpy(reply,word.context.i);  \
\
if(!strcmpi(scan1,"made")) \
if(strcmp(word.context.made,"")!=0);\
strcpy(reply,word.context.made);  \
\
if(!strcmpi(scan1,"who")) \
if(strcmp(word.context.who,"")!=0);\
strcpy(reply,word.context.who);  \
\
if(!strcmpi(scan1,"tell")) \
if(strcmp(word.context.tell,"")!=0);\
strcpy(reply,word.context.tell);  \
\
if(!strcmpi(scan1,"my")) \
if(strcmp(word.context.my,"")!=0);\
strcpy(reply,word.context.my);  \
\
if(!strcmpi(scan1,"is")) \
if(strcmp(word.context.is,"")!=0);\
strcpy(reply,word.context.is);  \
\
if(!strcmpi(scan1,"are")) \
if(strcmp(word.context.are,"")!=0);\
strcpy(reply,word.context.are);  \
\
if(!strcmpi(scan1,"me")) \
if(strcmp(word.context.me,"")!=0);\
strcpy(reply,word.context.me);  \
\