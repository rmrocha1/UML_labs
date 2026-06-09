/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Module
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Module.h
*********************************************************************/

#ifndef Module_H
#define Module_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Module
class Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedModule;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Module();
    
    //## auto_generated
    ~Module();
    
    ////    Operations    ////
    
    //## operation get_active()
    bool get_active();
    
    //## operation is_ok()
    bool is_ok();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getId() const;
    
    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    bool getIs_active() const;
    
    //## auto_generated
    void setIs_active(bool p_is_active);
    
    //## auto_generated
    RhpString getName() const;
    
    //## auto_generated
    void setName(RhpString p_name);
    
    ////    Attributes    ////

protected :

    int id;		//## attribute id
    
    bool is_active;		//## attribute is_active
    
    RhpString name;		//## attribute name
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedModule : virtual public AOMInstance {
    DECLARE_META(Module, OMAnimatedModule)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Module.h
*********************************************************************/
