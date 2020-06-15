#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AutoCarSimClient.h"

class AutoCarSimClient : public QMainWindow
{
	Q_OBJECT

public:
	AutoCarSimClient(QWidget *parent = Q_NULLPTR);

private:
	Ui::AutoCarSimClientClass ui;
};
