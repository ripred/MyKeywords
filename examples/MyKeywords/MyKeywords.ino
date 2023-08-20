/*
 * MyKeywords.ino
 * 
 * Example of defining your own color-highlighted keywords
 * 
 * To change or add your own keyword(s) edit the: 
 *    Arduino/libraries/MyKeywords/keywords.txt 
 * file with a text editor that does not convert tabs to spaces.
 * 
 * NOTE!
 * To define your own keywords you MUST use a TAB character between the
 * keyword and the keyword type (KEYWORD1, KEYWORD2, or LITERAL1)
 * NOT SPACES!
 * 
 * To see the highlighting take effect you may need to exit the IDE and re-open it.
 * 
 * version 1.0 2023 ++trent m. wyatt
 * 
 */
#include <MyKeywords.h>

typedef  char     Fred;
typedef  int      Wilma;
typedef  double   Barney;

float const Betty = 3.14159;
Fred const Dino = 42;

Barney bambam(Barney Rubble) {
    return Rubble;
}

Wilma pebbles(Fred Flintstone) {
    return Flintstone;
}

void setup() {
    // put your setup code here, to run once:
    Wilma Flintstone = pebbles(Dino);
    Barney Rubble = bambam(Betty);
}

void loop() {
    // put your main code here, to run repeatedly:

}
