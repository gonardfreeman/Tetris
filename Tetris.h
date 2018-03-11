#ifndef Tetris_h

#define Tetris_h

#define ROW_1 2
#define ROW_2 3
#define ROW_3 4
#define ROW_4 5
#define ROW_5 6
#define ROW_6 7
#define ROW_7 8
#define ROW_8 9

#define COL_1 10
#define COL_2 11
#define COL_3 12
#define COL_4 13
#define COL_5 A0
#define COL_6 A1
#define COL_7 A2
#define COL_8 A3


#include "Arduino.h"


class Tetris
{
    public:
        void drawScreen(byte buffer2[]);
        void drawFigure(String figure);
    private:
        void dropFigure(byte figure[]);
        byte rows[8] = { ROW_1, ROW_2, ROW_3, ROW_4, ROW_5, ROW_6, ROW_7, ROW_8};
        byte T_Figure[8] = {B00000000, B00000000, B10000000,B11000000,B10000000,B00000000,B00000000,B00000000};
        byte TODOS[8] = {B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};
        byte A[8] = {B00000000,B00011000,B00100100,B00100100,B00111100,B00100100,B00100100,B00000000};
        void setColumns(byte b);
        int _a;
};



#endif