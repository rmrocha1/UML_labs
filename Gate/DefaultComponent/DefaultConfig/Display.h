/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## class Display
#include "Module.h"
//## package Default

//## class Display
class Display : public Module {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Display();
    
    //## auto_generated
    ~Display();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDisplay : public OMAnimatedModule {
    DECLARE_META(Display, OMAnimatedDisplay)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Display.h
*********************************************************************/
