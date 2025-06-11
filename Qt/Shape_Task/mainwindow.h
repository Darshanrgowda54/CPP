#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "drawarea.h"

class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void onShapeButtonClicked(DrawArea::ShapeType shape);

private:
    DrawArea *drawArea;
    QLineEdit *penWidthEdit;
    QLineEdit *penColorEdit;
    QLineEdit *brushColorEdit;
};

#endif // MAINWINDOW_H
