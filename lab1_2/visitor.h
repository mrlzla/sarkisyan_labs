#ifndef VISITOR_H
#define VISITOR_H

#include "circle.h"
#include "ellipse.h"

class Visitor {
public:
  virtual void visit(CirclePtr circle) = 0;
  virtual void visit(EllipsePtr ellipse) = 0;
};
#endif //VISITOR_H
