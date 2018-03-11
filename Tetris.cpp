#include <Tetris.h>
#include "Arduino.h"


Tetris::Tetris(){
    count = 0;
}

void Tetris::drawScreen(byte buffer2[])
{
    for (byte i = 0; i < 8; i++) {
        setColumns(buffer2[i]); 
        digitalWrite(rows[i], HIGH);
        delay(2);
        digitalWrite(rows[i], LOW);
    }
}

void Tetris::drawFigure(String figure, byte shift)
{
    Serial.print(count);
    count+=1;
    if ( figure == "TODOS" ) {
        drawScreen(TODOS);
        return;
    } 
    if ( figure == "A" ) {
        drawScreen(A);
        return;
    }
    if ( figure == "t_figure" ) {
        dropFigure(T_Figure, shift);
        
        return;
    }
}



void Tetris::setColumns(byte b)
{
    digitalWrite(COL_1, (~b >> 0) & 0x01);
    digitalWrite(COL_2, (~b >> 1) & 0x01);
    digitalWrite(COL_3, (~b >> 2) & 0x01);
    digitalWrite(COL_4, (~b >> 3) & 0x01);
    digitalWrite(COL_5, (~b >> 4) & 0x01);
    digitalWrite(COL_6, (~b >> 5) & 0x01);
    digitalWrite(COL_7, (~b >> 6) & 0x01);
    digitalWrite(COL_8, (~b >> 7) & 0x01);
}

void Tetris::dropFigure(byte figure[], byte shift) {
    for (byte i = 0; i < 8; i++) {
        setColumns(figure[i] >> shift); 
        digitalWrite(rows[i], HIGH);
        delay(2);
        digitalWrite(rows[i], LOW);
    }
}

