//-*-mode:c++; mode:font-lock;-*-

#ifndef _TOBJECT_H_
#define _TOBJECT_H_

class TObject 
{

public:
    TObject();
    TObject(int ival, double dval);
    virtual ~TObject();

    int getIntValue();
    void setIntValue(int value);

    double getDoubleValue();
    void setDoubleValue(double value);

    friend std::ostream& operator << (std::ostream& os, const TObject& object);

private:
    int m_int;
    double m_double;

};

#endif
