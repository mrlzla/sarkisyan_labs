#ifndef COMPARISON_H
#define COMPARISON_H

#include "basictypes.h"

template<class T>
class Comparison
{
public:
    Comparison(const function< bool(const T& x1, const T& x2) > & f): f(f) {}
    bool operator()(const T & x1, const T & x2){ return f(x1, x2); }
private:
    function< bool(const T& x1, const T& x2) > f;
};
#endif // COMPARISON_H
