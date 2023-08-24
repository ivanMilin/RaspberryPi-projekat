#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <wiringPi.h>
#include <stdio.h>

#define ROWS 4
#define COLS 4


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();
    void init_keypad();
    char getKey();
    void clearMatrix();
    void button_pressed();
    char whichTurn(int *counter);
    void luckyWinner();


    void on_pushButton_17_clicked();

private:
    Ui::Dialog *ui;

    QTimer *timer;

    int counter = 0;
    int counter_X = 0;
    int counter_Y = 0;

    char position_0_0, position_0_1, position_0_2, position_0_3;
    char position_1_0, position_1_1, position_1_2, position_1_3;
    char position_2_0, position_2_1, position_2_2, position_2_3;
    char position_3_0, position_3_1, position_3_2, position_3_3;

    int rowPins[ROWS] = {1, 4, 5, 6};   // GPIO pins connected" to rows
    int colPins[COLS] = {12, 3, 2, 0};   // GPIO pins connected to columns

    // Define the keypad layout and corresponding key values
    char keys[ROWS][COLS] = {
        {'1', '2', '3', 'A'},
        {'4', '5', '6', 'B'},
        {'7', '8', '9', 'C'},
        {'*', '0', '#', 'D'}
    };
};
#endif // DIALOG_H
