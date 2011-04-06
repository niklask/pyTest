#include <iostream>

#include "TObject.h"

TObject::TObject()
{
    m_int = -1;
    m_double = -1.0;
}

TObject::TObject(int ival, double dval)
{
    m_int = ival;
    m_double = dval;
}

TObject::~TObject()
{
}

int TObject::getIntValue()
{
    return m_int;
}

void TObject::setIntValue(int value)
{
    m_int = value;
}

double TObject::getDoubleValue()
{
    return m_double;
}

void TObject::setDoubleValue(double value)
{
    m_double = value;
}

std::ostream& operator << (std::ostream& os, const TObject& object)
{
    os << "' { m_int = " << object.m_int
       << "; m_double = " << object.m_double 
       << " }";
}
