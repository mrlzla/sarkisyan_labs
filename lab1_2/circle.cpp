#include "circle.h"

Circle::Circle(cv::Point center, unsigned int radius): IElement("circle"), center(center), radius(radius)
{
}

void Circle::Draw(cv::Mat &canvas, cv::Scalar &color)
{
    cv::circle(canvas, center, radius, color, 4);
}
