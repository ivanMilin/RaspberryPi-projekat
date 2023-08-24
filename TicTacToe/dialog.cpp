#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    clearMatrix();
    init_keypad();
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Dialog::button_pressed);
    timer->start(50);
}

Dialog::~Dialog()
{
    delete ui;
    delete timer;
}

void Dialog::init_keypad() {
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

char Dialog::getKey() {
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

char Dialog::whichTurn(int *counter){
    char player;
    if(*counter %2 == 1){
        player = 'X';
        ui->label->setText("Na redu je igrac O");
    }
    else{
        player = 'O';
        ui->label->setText("Na redu je igrac X");
    }
    ++(*counter);
    return player;
}

void Dialog::button_pressed(){
    for(int i=0;i<16;i++){
        delay(50);
        char key = getKey();

        if(key != '\0'){
            if(key == '1'){
                position_0_0 = whichTurn(&counter);
                ui->pushButton_1->setText(QString(position_0_0));
            }
            if(key == '4'){
                position_0_1 = whichTurn(&counter);
                ui->pushButton_2->setText(QString(position_0_1));
            }
            if(key == '7'){
                position_0_2 = whichTurn(&counter);
                ui->pushButton_3->setText(QString(position_0_2));
            }
            if(key == '*'){
                position_0_3 = whichTurn(&counter);
                ui->pushButton_4->setText(QString(position_0_3));
            }
            if(key == '2'){
                position_1_0 = whichTurn(&counter);
                ui->pushButton_5->setText(QString(position_1_0));
            }
            if(key == '5'){
                position_1_1 = whichTurn(&counter);
                ui->pushButton_6->setText(QString(position_1_1));
            }
            if(key == '8'){
                position_1_2 = whichTurn(&counter);
                ui->pushButton_7->setText(QString(position_1_2));;
            }
            if(key == '0'){
                position_1_3 = whichTurn(&counter);
                ui->pushButton_8->setText(QString(position_1_3));
            }
            if(key == '3'){
                position_2_0 = whichTurn(&counter);
                ui->pushButton_9->setText(QString(position_2_0));
            }
            if(key == '6'){
                position_2_1 = whichTurn(&counter);
                ui->pushButton_10->setText(QString(position_2_1));
            }
            if(key == '9'){
                position_2_2 = whichTurn(&counter);
                ui->pushButton_11->setText(QString(position_2_2));
            }
            if(key == '#'){
                position_2_3 = whichTurn(&counter);
                ui->pushButton_12->setText(QString(position_2_3));
            }
            if(key == 'A'){
                position_3_0 = whichTurn(&counter);
                ui->pushButton_13->setText(QString(position_3_0));
            }
            if(key == 'B'){
                position_3_1 = whichTurn(&counter);
                ui->pushButton_14->setText(QString(position_3_1));
            }
            if(key == 'C'){
                position_3_2 = whichTurn(&counter);
                ui->pushButton_15->setText(QString(position_3_2));
            }
            if(key == 'D'){
                position_3_3 = whichTurn(&counter);
                ui->pushButton_16->setText(QString(position_3_3));
            }
            luckyWinner();//funkcija koja proverava ko je pobedio
        }
    }
}
//Funkcija proverava ko je pobedio
void Dialog::luckyWinner(){
    //Provera VERTIKALE
    if((position_0_0 == 'X' && position_0_0==position_0_1 && position_0_1==position_0_2 && position_0_2==position_0_3) ||
       (position_0_0 == 'O' && position_0_0==position_0_1 && position_0_1==position_0_2 && position_0_2==position_0_3))
    {
            ui->pushButton_1->setStyleSheet("QPushButton {background-color: red;}");
            ui->pushButton_2->setStyleSheet("QPushButton {background-color: red;}");
            ui->pushButton_3->setStyleSheet("QPushButton {background-color: red;}");
            ui->pushButton_4->setStyleSheet("QPushButton {background-color: red;}");
            ui->label->setText("Imamo pobednika");

            if(position_0_0 == 'X') {
                counter_X ++;
                ui->lcdNumber_X->display(counter_X);
            }
            else {
                counter_Y ++;
                ui->lcdNumber_O->display(counter_Y);
            }
    }
    else if((position_1_0 == 'X' && position_1_0==position_1_1 && position_1_1==position_1_2 && position_1_2==position_1_3) ||
            (position_1_0 == 'O' && position_1_0==position_1_1 && position_1_1==position_1_2 && position_1_2==position_1_3))
    {
            ui->pushButton_5->setStyleSheet("QPushButton {background-color: red;}");
            ui->pushButton_6->setStyleSheet("QPushButton {background-color: red;}");
            ui->pushButton_7->setStyleSheet("QPushButton {background-color: red;}");
            ui->pushButton_8->setStyleSheet("QPushButton {background-color: red;}");
            ui->label->setText("Imamo pobednika");

            if(position_1_0 == 'X') {
                counter_X ++;
                ui->lcdNumber_X->display(counter_X);
            }
            else {
                counter_Y ++;
                ui->lcdNumber_O->display(counter_Y);
            }
    }
    else if((position_2_0 == 'X' && position_2_0==position_2_1 && position_2_1==position_2_2 && position_2_2==position_2_3) ||
            (position_2_0 == 'O' && position_2_0==position_2_1 && position_2_1==position_2_2 && position_2_2==position_2_3))
    {
        ui->pushButton_9->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_10->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_11->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_12->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_2_0 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }
    }
    else if((position_3_0 == 'X' && position_3_0==position_3_1 && position_3_1==position_3_2 && position_3_2==position_3_3) ||
            (position_3_0 == 'O' && position_3_0==position_3_1 && position_3_1==position_3_2 && position_3_2==position_3_3))
    {
        ui->pushButton_13->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_14->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_15->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_16->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_3_0 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }

    }
    //Provera HORIZONTALE
    else if((position_0_0 == 'X' && position_0_0==position_1_0 && position_1_0==position_2_0 && position_2_0==position_3_0) ||
            (position_0_0 == 'O' && position_0_0==position_1_0 && position_1_0==position_2_0 && position_2_0==position_3_0))
    {
        ui->pushButton_1->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_5->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_9->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_13->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_0_0 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }
    }
    else if((position_0_1 == 'X' && position_0_1==position_1_1 && position_1_1==position_2_1 && position_2_1==position_3_1) ||
            (position_0_1 == 'O' && position_0_1==position_1_1 && position_1_1==position_2_1 && position_2_1==position_3_1))
    {
        ui->pushButton_2->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_6->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_10->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_14->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_0_1 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }
    }
    else if((position_0_2 == 'X' && position_0_2==position_1_2 && position_1_2==position_2_2 && position_2_2==position_3_2) ||
            (position_0_2 == 'O' && position_0_2==position_1_2 && position_1_2==position_2_2 && position_2_2==position_3_2))
    {
        ui->pushButton_3->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_7->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_11->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_15->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_0_2 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }
    }
    else if((position_0_3 == 'X' && position_0_3==position_1_3 && position_1_3==position_2_3 && position_2_3==position_3_3) ||
            (position_0_3 == 'O' && position_0_3==position_1_3 && position_1_3==position_2_3 && position_2_3==position_3_3))
    {
        ui->pushButton_4->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_8->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_12->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_16->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_0_3 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }
    }

    //Provera DIJAGONALE
    else if((position_0_0 == 'X' && position_0_0==position_1_1 && position_1_1==position_2_2 && position_2_2==position_3_3) ||
            (position_0_0 == 'O' && position_0_0==position_1_1 && position_1_1==position_2_2 && position_2_2==position_3_3))
    {
        ui->pushButton_1->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_6->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_11->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_16->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_0_0 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }
    }
    else if((position_0_3 == 'X' && position_0_3==position_1_2 && position_1_2==position_2_1 && position_2_1==position_3_0) ||
            (position_0_3 == 'O' && position_0_3==position_1_2 && position_1_2==position_2_1 && position_2_1==position_3_0))
    {
        ui->pushButton_4->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_7->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_10->setStyleSheet("QPushButton {background-color: red;}");
        ui->pushButton_13->setStyleSheet("QPushButton {background-color: red;}");
        ui->label->setText("Imamo pobednika");

        if(position_0_3 == 'X') {
            counter_X ++;
            ui->lcdNumber_X->display(counter_X);
        }
        else {
            counter_Y ++;
            ui->lcdNumber_O->display(counter_Y);
        }
    }
}

// Funkcija resetuje samo tabelu
void Dialog::on_pushButton_clicked(){
    clearMatrix();
    counter = 0;
    ui->label->setText("CLEAR TABLE");
    delay(300);
}

// Funkcija resetuje celu igru
void Dialog::on_pushButton_17_clicked(){
    clearMatrix();
    counter = 0;
    counter_X = 0;
    counter_Y = 0;
    ui->label->setText("RESET GAME");
    ui->lcdNumber_O->display(counter_Y);
    ui->lcdNumber_X->display(counter_X);
    delay(300);
}

// Postavlja sve vrednosti na nula i brise vrednosti iz polja
void Dialog::clearMatrix(){
    position_0_0 = 0;
    position_0_1 = 0;
    position_0_2 = 0;
    position_0_3 = 0;

    position_1_0 = 0;
    position_1_1 = 0;
    position_1_2 = 0;
    position_1_3 = 0;

    position_2_0 = 0;
    position_2_1 = 0;
    position_2_2 = 0;
    position_2_3 = 0;

    position_3_0 = 0;
    position_3_1 = 0;
    position_3_2 = 0;
    position_3_3 = 0;

    ui->pushButton_1->setText(" ");
    ui->pushButton_2->setText(" ");
    ui->pushButton_3->setText(" ");
    ui->pushButton_4->setText(" ");
    ui->pushButton_5->setText(" ");
    ui->pushButton_6->setText(" ");
    ui->pushButton_7->setText(" ");
    ui->pushButton_8->setText(" ");
    ui->pushButton_9->setText(" ");
    ui->pushButton_10->setText(" ");
    ui->pushButton_11->setText(" ");
    ui->pushButton_12->setText(" ");
    ui->pushButton_13->setText(" ");
    ui->pushButton_14->setText(" ");
    ui->pushButton_15->setText(" ");
    ui->pushButton_16->setText(" ");

    ui->pushButton_1->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_2->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_3->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_4->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_5->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_6->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_7->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_8->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_9->setStyleSheet ("QPushButton {background-color: white;}");
    ui->pushButton_10->setStyleSheet("QPushButton {background-color: white;}");
    ui->pushButton_11->setStyleSheet("QPushButton {background-color: white;}");
    ui->pushButton_12->setStyleSheet("QPushButton {background-color: white;}");
    ui->pushButton_13->setStyleSheet("QPushButton {background-color: white;}");
    ui->pushButton_14->setStyleSheet("QPushButton {background-color: white;}");
    ui->pushButton_15->setStyleSheet("QPushButton {background-color: white;}");
    ui->pushButton_16->setStyleSheet("QPushButton {background-color: white;}");
}

