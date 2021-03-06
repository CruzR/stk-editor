#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#include <irrlicht.h>

#include <list>


using namespace std;
using namespace irr;
using namespace core;
using namespace io;

class Element
{
private:
    stringw             m_name;
    stringw             m_category;
    std::list<stringw>  m_tags;
    stringw             m_img;
    stringw             m_model;
    bool                m_valid;
public:
    Element(IXMLReader* xml);
    
    bool        tagBeginsWith (const stringw& s);

    stringw     getName()     { return m_name;     }
    stringw     getCategory() { return m_category; }
    stringw     getImg()      { return m_img;      }
    stringw     getModel()    { return m_model;    }
    bool        isValid()     { return m_valid;    }
};

#endif
