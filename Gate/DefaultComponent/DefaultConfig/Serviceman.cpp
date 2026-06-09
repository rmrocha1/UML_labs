/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Serviceman
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Serviceman.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Serviceman.h"
//#[ ignore
#define Default_Serviceman_Serviceman_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Serviceman
Serviceman::Serviceman() {
    NOTIFY_CONSTRUCTOR(Serviceman, Serviceman(), 0, Default_Serviceman_Serviceman_SERIALIZE);
}

Serviceman::~Serviceman() {
    NOTIFY_DESTRUCTOR(~Serviceman, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedServiceman::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedOperator::serializeAttributes(aomsAttributes);
}

void OMAnimatedServiceman::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedOperator::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Serviceman, Default, false, Operator, OMAnimatedOperator, OMAnimatedServiceman)

OMINIT_SUPERCLASS(Operator, OMAnimatedOperator)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Serviceman.cpp
*********************************************************************/
