#ifndef LINE_H
#define LINE_H

#include "basictypes.h"
#include "ielement.h"

class Line: public IElement
{
public:
    Line(cv::Point x, cv::Point y);
    void Draw(cv::Mat & canvas, cv::Scalar & color);
private:
    cv::Point x;
    cv::Point y;
};

typedef std::shared_ptr<Line> LinePtr;

#endif // LINE_H
