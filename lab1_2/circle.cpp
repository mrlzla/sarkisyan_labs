#include "circle.h"

Circle::Circle(const cv::Point center, const unsigned int radius): IElement("circle"), center(center), radius(radius)
{
}

void Circle::Draw(cv::Mat &canvas, cv::Scalar &color)
{
    cv::circle(canvas, center, radius, color, 4);
}

void Circle::Accept(Visitor &v) override 
{
    v.visit(*this);
}
