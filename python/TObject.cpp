#include <iostream>

#include <boost/python.hpp>

#include "TObject.h"

using namespace boost::python;
BOOST_PYTHON_MODULE(libpytest)
{
    class_<TObject> ("TObject", "stupid test class",
                     init<>() )
        .def ( init <int, double>() )

        .def ("getIntValue", &TObject::getIntValue)
        .def ("setIntValue", &TObject::setIntValue)

        .def ("getDoubleValue", &TObject::getDoubleValue)
        .def ("setDoubleValue", &TObject::setDoubleValue)
    ;
}

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
