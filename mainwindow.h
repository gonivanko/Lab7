#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "timeofaday.h"
#include "timeerror.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_SecondsEdit_textChanged(const QString &arg1);

    void on_SecondsEdit_2_textChanged(const QString &arg1);

    void on_minutes1Edit_textChanged(const QString &arg1);

    void on_Hours1Edit_textChanged(const QString &arg1);

    void on_Hours2Edit_textChanged(const QString &arg1);

    void on_minutes2Edit_textChanged(const QString &arg1);

    void on_DayPeriodButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
