#ifndef CIRCLE_H
#define CIRCLE_H

#include "basictypes.h"
#include "ielement.h"

class Circle: public IElement
{
public:
    Circle(const cv::Point center, const unsigned int radius);
    void Draw(cv::Mat & canvas, cv::Scalar & color);
    void Accept(Visitor &v);
private:
    cv::Point center;
    unsigned int radius;
};

typedef std::shared_ptr<Circle> CirclePtr;

#endif // CIRCLE_H
