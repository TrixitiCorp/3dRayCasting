#include "raycast3d.h"


RayCast3d::RayCast3d(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
}

RayCast3d::~RayCast3d()
{

}

void RayCast3d::resizeEvent(QResizeEvent * e){
	ui.widget->setGeometry(0,0,geometry().width(),geometry().height());
}

void RayCast3d::keyPressEvent(QKeyEvent * e ){

	ui.widget->updateGL();
}

void RayCast3d::updateFT(CTFNode *pNodes, int nPoints){
    ui.widget->setFT(new CTransferFunction(pNodes, nPoints));
}

void RayCast3d::setVol(unsigned char *vol, int w, int h, int z){
    ui.widget->setVol(vol, w, h, z);
}

void RayCast3d::setVol(unsigned short *vol, int w, int h, int z){
    ui.widget->setVol(vol, w, h, z);
}
