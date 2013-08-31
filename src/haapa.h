#ifndef HAAPA_H
#define HAAPA_H
#include "result.h"

void start_segment();
void end_segment(char* color);
void string(Result* (*function)());
void bar(Result *(*function)());
void timeconv(Result *(*function)());
void t(char* str);

#ifndef true
int true();
#endif
#ifndef false
int false();
#endif

void tick(int fd, short event, void* arg);

#define s(commands, color, condition) \
if(condition()){ \
	start_segment(); commands; end_segment(color); \
} 

#endif