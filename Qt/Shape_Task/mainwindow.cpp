#include "mainwindow.h"
#include "drawarea.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
    drawArea = new DrawArea(this);
    penWidthEdit = new QLineEdit("2", this);
    penColorEdit = new QLineEdit("black", this);
    brushColorEdit = new QLineEdit("yellow", this);


    QHBoxLayout *mainLayout = new QHBoxLayout(this);


    QVBoxLayout *shapeButtonsLayout = new QVBoxLayout();
    QList<DrawArea::ShapeType> shapeTypes = {
        DrawArea::Circle,
        DrawArea::Rectangle,
        DrawArea::Square,
        DrawArea::Pentagon,
    };
    QStringList shapeNames = {"Circle", "Rectangle", "Square", "Pentagon"};

    for (int i = 0; i < shapeTypes.size(); ++i) {
        QPushButton *button = new QPushButton(shapeNames[i], this);
        shapeButtonsLayout->addWidget(button);

        connect(button, &QPushButton::clicked, this, [=]() {
            onShapeButtonClicked(shapeTypes[i]);
        });
    }
    shapeButtonsLayout->addStretch();

    QVBoxLayout *rightLayout = new QVBoxLayout();


    QHBoxLayout *controlsLayout = new QHBoxLayout();
    controlsLayout->addWidget(new QLabel("Pen Width:"));
    controlsLayout->addWidget(penWidthEdit);
    controlsLayout->addWidget(new QLabel("Pen Color:"));
    controlsLayout->addWidget(penColorEdit);
    controlsLayout->addWidget(new QLabel("Brush Color:"));
    controlsLayout->addWidget(brushColorEdit);

    rightLayout->addLayout(controlsLayout);
    rightLayout->addWidget(drawArea, 1);

    mainLayout->addLayout(shapeButtonsLayout);
    mainLayout->addLayout(rightLayout, 1);

    setLayout(mainLayout);
}

void MainWindow::onShapeButtonClicked(DrawArea::ShapeType shape) {
    drawArea->setShape(shape);
    drawArea->setPenWidth(penWidthEdit->text().toInt());
    drawArea->setPenColor(QColor(penColorEdit->text()));
    drawArea->setBrushColor(QColor(brushColorEdit->text()));
    drawArea->update();
}
