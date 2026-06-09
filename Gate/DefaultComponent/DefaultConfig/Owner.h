/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Owner
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Owner.h
*********************************************************************/

#ifndef Owner_H
#define Owner_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## actor Owner
#include "Operator.h"
//## package Default

//## actor Owner
class Owner : public Operator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOwner;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Owner();
    
    //## auto_generated
    ~Owner();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOwner : public OMAnimatedOperator {
    DECLARE_META(Owner, OMAnimatedOwner)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Owner.h
*********************************************************************/
