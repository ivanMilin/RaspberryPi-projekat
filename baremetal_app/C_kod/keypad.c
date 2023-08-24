#include <wiringPi.h>
#include <stdio.h>

#define ROWS 4
#define COLS 4

// Define the keypad layout and corresponding key values
char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'} };

int rowPins[ROWS] = {1, 4, 5, 6};   // GPIO pins connected" to rows
int colPins[COLS] = {12, 3, 2, 0};   // GPIO pins connected to columns

void setup() {
    wiringPiSetup();
    
    for (int i = 0; i < ROWS; i++) {
        pinMode(rowPins[i], OUTPUT);
        digitalWrite(rowPins[i], HIGH); // Set row pins to default high
    }
    for (int j = 0; j < COLS; j++) {
        pinMode(colPins[j], INPUT);
        pullUpDnControl(colPins[j], PUD_UP); // Enable pull-up resistors on column pins
    }
}
char getKey() {
    for (int i = 0; i < ROWS; i++) {
        digitalWrite(rowPins[i], LOW); // Set current row low
        
        for (int j = 0; j < COLS; j++) {
            if (digitalRead(colPins[j]) == LOW) {
                // Button in row i and column j is pressed
                while (digitalRead(colPins[j]) == LOW); // Wait for key release
                digitalWrite(rowPins[i], HIGH); // Restore row to high
                
                return keys[i][j]; // Return the pressed key
            }
        }
        
        digitalWrite(rowPins[i], HIGH); // Restore row to high
    }
    
    return '\0'; // No key pressed
}
int main() {
    setup();
    
    while (1) {
        char key = getKey();
        delay(50);
        if(key!='\0') {
            printf("Pressed -> %c\n", key);
        }
        
    }
    return 0;
}
