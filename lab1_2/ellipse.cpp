#include "ellipse.h"

Ellipse::Ellipse(cv::Point center, cv::Size axes, double angle):
    IElement("ellipse"), center(center), axes(axes), angle(angle)
{

}

void Ellipse::Draw(cv::Mat &canvas, cv::Scalar &color)
{
    cv::ellipse(canvas, center, axes, angle, 0, 360, color);
}
