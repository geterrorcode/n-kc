#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_nkeepcleaner.h"

class NKeepCleaner : public QMainWindow
{
    Q_OBJECT

public:
    NKeepCleaner(QWidget *parent = nullptr);
    ~NKeepCleaner();

private:
    Ui::NKeepCleanerClass ui;
};
