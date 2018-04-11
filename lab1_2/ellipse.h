#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "basictypes.h"
#include "ielement.h"

class Ellipse: public IElement
{
public:
    Ellipse(cv::Point center, cv::Size axes, double angle);
    void Draw(cv::Mat & canvas, cv::Scalar & color);
private:
    cv::Point center;
    cv::Size axes;
    double angle;
};

typedef std::shared_ptr<Ellipse> EllipsePtr;

#endif // ELLIPSE_H
