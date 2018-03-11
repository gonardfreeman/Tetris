#include "Tetris.h"


void setup() {
    // Open serial port
    Serial.begin(9600);
    
    // Set all used pins to OUTPUT
    // This is very important! If the pins are set to input
    // the display will be very dim.
    for (byte i = 2; i <= 13; i++)
        pinMode(i, OUTPUT);
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
}

float timeCount = 0;

void loop() {
  String t_fig = "t_figure";
delay(5);
timeCount += 1;
if(timeCount <  50) {
  Tetris().drawFigure(t_fig, 0);
} else if (timeCount <  1) {
// do nothing
} else if (timeCount <  100) {
  Tetris().drawFigure(t_fig, 1);
} else if (timeCount <  1) {
// nothing
} else if (timeCount <=  150) {
    Tetris().drawFigure(t_fig, 2);
} else if (timeCount <  1) {
// nothing
} else if (timeCount <  200) {
    Tetris().drawFigure(t_fig, 3);
} else if (timeCount <  1) {
// nothing
} else if (timeCount <  250) {
  Tetris().drawFigure(t_fig, 4);
} else if (timeCount <  1) {
// nothing
} else if (timeCount <  300) {
  Tetris().drawFigure(t_fig, 5);
} else if (timeCount <  1) {
  
} else if (timeCount <  350) {
    Tetris().drawFigure(t_fig, 6);
} else if (timeCount <  1) {
// do nothing
} else if (timeCount <  400) {
  Tetris().drawFigure(t_fig, 7);
} else if (timeCount <  1) {

} else {
// back to the start
timeCount = 0;
}


}
