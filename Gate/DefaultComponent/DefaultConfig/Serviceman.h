/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Serviceman
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Serviceman.h
*********************************************************************/

#ifndef Serviceman_H
#define Serviceman_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## actor Serviceman
#include "Operator.h"
//## package Default

//## actor Serviceman
class Serviceman : public Operator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedServiceman;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Serviceman();
    
    //## auto_generated
    ~Serviceman();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedServiceman : public OMAnimatedOperator {
    DECLARE_META(Serviceman, OMAnimatedServiceman)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Serviceman.h
*********************************************************************/
