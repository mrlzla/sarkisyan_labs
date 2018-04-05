#ifndef IELEMENT_H
#define IELEMENT_H

#include "basictypes.h"
#include "visitor.h"

class IElement
{
public:
    IElement(std::string type): type(type){}
    virtual void Draw(cv::Mat & canvas, cv::Scalar & color) = 0;
    virtual void Accept(Visitor &v) = 0;

public:
    std::string type;
};

typedef std::shared_ptr<IElement> IElementPtr;

#endif // IELEMENT_H
