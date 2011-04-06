#include <iostream>

#include <boost/python.hpp>

#include "lib/TObject.h"

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
