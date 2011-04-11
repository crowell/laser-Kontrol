#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_checkBox_toggled(bool checked);
    void on_commandLinkButton_clicked();
    void on_radioButton_toggled(bool checked);
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
