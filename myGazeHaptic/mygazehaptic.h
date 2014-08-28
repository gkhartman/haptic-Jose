#ifndef MYGAZEHAPTIC_H
#define MYGAZEHAPTIC_H

#include <QtWidgets/QMainWindow>
#include "ui_mygazehaptic.h"
#include "qobject.h"
#include "qdebug.h"
#include "QtWidgets\qpushbutton.h"
#include "QtWidgets\qtextedit.h"
#include "QtWidgets\qmainwindow.h"
#include "QtWidgets\qboxlayout.h"
#include "qpainter.h"
#include "qpixmap.h"
#include "QtWidgets\qlabel.h"
#include "qfile.h"

class myGazeHaptic : public QMainWindow
{
	Q_OBJECT

public:
	myGazeHaptic(QWidget *parent = 0);
	~myGazeHaptic();
	
	void createWindow();
	void notify(double,double);
	void stringNotify(QString);
	QPushButton* getButtonPointer();
	//QPushButton* getCalibrateButtonPointer();
	void paintEvent();
	QStringList getStringList();

public slots:
	void talkSlot();
	void alertSlot();

signals:
	void theFinalcall();
	void stringAlert();
	void talk();

private:
	Ui::myGazeHapticClass ui;

};

#endif // MYGAZEHAPTIC_H
