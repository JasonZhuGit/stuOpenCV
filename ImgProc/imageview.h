#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QtWidgets/QLabel>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QImage>
#include <QPixmap>
#include <QDebug>

class ImageView : public QScrollArea
{
public:
    explicit ImageView(QWidget *parent = 0);

    QLabel * imgLabel;

    void setupUi();


public:
    void showImg(cv::Mat mat);
};

#endif // IMAGEVIEW_H