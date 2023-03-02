#ifndef VISITOR_H
#define VISITOR_H

#include "technology.h"
#include "bundle.h"

class Visitor
{
public:
    Visitor();
    virtual void visit(Technology* tech) = 0;
    virtual void visit(Bundle* bundle) = 0;
};

#endif // VISITOR_H
