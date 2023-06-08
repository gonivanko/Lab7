#include "mainwindow.h"
#include "ui_mainwindow.h"

TimeOfADay time1, time2;
bool time1_completed = false, time2_completed = false;
bool error_occurred = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int checkHours(const QString h)
{
    int hours1;
    hours1 = h.toInt();
    if ((hours1 < 1) || (hours1 > 24))
    {
        throw TimeError(1);

    }
    return hours1;

}

int checkMinutesSeconds(const QString str, int type = 2)
{
    int t1;
    t1 = str.toInt();
    if ((t1 < 0) || (t1 > 60))
    {
        throw TimeError(type);
    }
    return t1;

}

void MainWindow::on_Hours1Edit_textChanged(const QString &arg1)
{
    int new_hours;
    time1_completed = (arg1 != "");
    ui->DayPeriodLabel1->setText("");
    try
    {
        new_hours = checkHours(arg1);
    }
    catch (TimeError time_error)
    {
        ui->DayPeriodLabel1->setText(time_error.errorText());
        new_hours = -1;
    }

    time1.setHours(new_hours);
}

void MainWindow::on_minutes1Edit_textChanged(const QString &arg1)
{
    int new_minutes;
    time1_completed = (arg1 != "");
    ui->DayPeriodLabel1->setText("");
    try
    {
        new_minutes = checkMinutesSeconds(arg1, 2);
    }
    catch (TimeError time_error)
    {
        ui->DayPeriodLabel1->setText(time_error.errorText());
        new_minutes = -1;
    }

    time1.setMinutes(new_minutes);
}

void MainWindow::on_SecondsEdit_textChanged(const QString &arg1)
{
    int new_seconds;
    time1_completed = (arg1 != "");
    ui->DayPeriodLabel1->setText("");
    try
    {
        new_seconds = checkMinutesSeconds(arg1, 3);
    }
    catch (TimeError time_error)
    {
        ui->DayPeriodLabel1->setText(time_error.errorText());
        new_seconds = -1;
    }

    time1.setSeconds(new_seconds);
}

void MainWindow::on_Hours2Edit_textChanged(const QString &arg1)
{
    int new_hours;
    time2_completed = (arg1 != "");
    ui->DayPeriodLabel2->setText("");
    try
    {
        new_hours = checkHours(arg1);
    }
    catch (TimeError time_error)
    {
        ui->DayPeriodLabel2->setText(time_error.errorText());
        new_hours = -1;
    }

    time2.setHours(new_hours);
}


void MainWindow::on_minutes2Edit_textChanged(const QString &arg1)
{
    int new_minutes;
    time2_completed = (arg1 != "");
    ui->DayPeriodLabel2->setText("");
    try
    {
        new_minutes = checkMinutesSeconds(arg1, 2);
    }
    catch (TimeError time_error)
    {
        ui->DayPeriodLabel2->setText(time_error.errorText());
        new_minutes = -1;
    }

    time2.setMinutes(new_minutes);
}

void MainWindow::on_SecondsEdit_2_textChanged(const QString &arg1)
{
    int new_seconds;
    time2_completed = (arg1 != "");
    ui->DayPeriodLabel2->setText("");
    try
    {
        new_seconds = checkMinutesSeconds(arg1, 3);
    }
    catch (TimeError time_error)
    {
        ui->DayPeriodLabel2->setText(time_error.errorText());
        new_seconds = -1;
    }

    time2.setSeconds(new_seconds);
}


void MainWindow::on_DayPeriodButton_clicked()
{
    if (time1_completed && time1.isCorrect())
    {
        ui->DayPeriodLabel1->setText(time1.stringDayPeriod());
    }
    if (time2_completed && time2.isCorrect())
    {
        ui->DayPeriodLabel2->setText(time2.stringDayPeriod());
    }
}

