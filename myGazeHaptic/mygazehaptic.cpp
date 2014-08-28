#include "mygazehaptic.h"

QTextEdit *text;
QPushButton *button;
//QPushButton *calibrateButton;
QString xValue, yValue, quadrant;
QString alert;
QLabel *eyeLabel;
int xV=0;
int xY =  0;

QStringList list;

myGazeHaptic::myGazeHaptic(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	createWindow();
}


myGazeHaptic::~myGazeHaptic()
{

}
void myGazeHaptic::createWindow(){
	
	button = new QPushButton;
	button->setText("Stop MyGaze");
	/*
	calibrateButton = new QPushButton;
	calibrateButton->setText("Calibrate");
	*/

	text = new QTextEdit;
	
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(button);
	//layout->addWidget(calibrateButton);
	layout->addWidget(text);
	

	QMainWindow *mainWindow = new QMainWindow;
	QWidget *centralWidget = new QWidget;

	centralWidget->setLayout(layout);
	mainWindow->setCentralWidget(centralWidget);

	eyeLabel = new QLabel(centralWidget);
	eyeLabel->setFixedHeight(130);
	eyeLabel->setFixedWidth(130);
	paintEvent();

	QObject::connect(this, SIGNAL(theFinalcall()), this, SLOT(talkSlot()));
	QObject::connect(this, SIGNAL(stringAlert()), this, SLOT(alertSlot()));

	mainWindow->show();



	
	
}
void myGazeHaptic::notify(double x,double y){
	xV = x;
	xY = y;
	if (x != 0 || y != 0){
		if (x <= 1440 / 2) {
			if (y <= 900 / 2){
				quadrant = " Quad : 1";
			}
			else{
				quadrant = " Quad : 3";
			}
		}
		else{
			if (y <= 900 / 2){
				quadrant = " Quad : 2";
			}
			else{
				quadrant = " Quad : 4";
			}
		}
	}
	else{
		quadrant = "Out of scope";
	}


	xValue = QString::number(x);
	yValue = QString::number(y);
	
	emit theFinalcall();
}
void myGazeHaptic::stringNotify(QString a){
	alert = a;
	emit stringAlert();
}

QPushButton* myGazeHaptic::getButtonPointer(){
	return button;
}
/*
QPushButton* myGazeHaptic::getCalibrateButtonPointer(){
	return calibrateButton;
}
*/
void myGazeHaptic::talkSlot(){
	text->append("X:" + xValue + "   Y:" + yValue);
	eyeLabel->move(xV-65, xY-65);
	text->append(quadrant);
	QString valuesToFileString = "X:" + xValue + "   Y:" + yValue;
	list << valuesToFileString;
	
	
}
void myGazeHaptic::alertSlot(){
	text->append(alert);
}
void myGazeHaptic::paintEvent(){
	
	QPixmap pix(130, 130);
	pix.fill(QColor(0, 0, 0, 50));
	QPainter painter(&pix);
	// do paint operations
	painter.end();
	eyeLabel->setPixmap(pix);
}
QStringList getStringList(){
	return list;
}
