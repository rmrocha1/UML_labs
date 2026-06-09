/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Keyboard
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Keyboard.h
*********************************************************************/

#ifndef Keyboard_H
#define Keyboard_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class Keyboard
#include "Module.h"
//## package Default

//## class Keyboard
class Keyboard : public Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedKeyboard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Keyboard();
    
    //## auto_generated
    ~Keyboard();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedKeyboard : public OMAnimatedModule {
    DECLARE_META(Keyboard, OMAnimatedKeyboard)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Keyboard.h
*********************************************************************/
