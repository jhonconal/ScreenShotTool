#ifndef SCREENSHOTTOOL_H
#define SCREENSHOTTOOL_H

/*
 * Author:qiuzhiqian
 * Email:xia_mengliang@163.com
 * Github:https://github.com/qiuzhiqian
 * Date:2017.07.23
 **/

#include <QWidget>
#include <QScreen>
#include <QPixmap>
#include <QMouseEvent>
#include <QDesktopWidget>

#include "canvas.h"

namespace Ui {
class ScreenShotTool;
}

class ScreenShotTool : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenShotTool(QWidget *parent = 0);
    ~ScreenShotTool();



private:
    Ui::ScreenShotTool *ui;

    Canvas *screenCanvas;

    QPixmap fullPixmap;

private slots:
    void slt_ss_start();
};

#endif // SCREENSHOTTOOL_H
