/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Owner
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Owner.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Owner.h"
//#[ ignore
#define Default_Owner_Owner_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Owner
Owner::Owner() {
    NOTIFY_CONSTRUCTOR(Owner, Owner(), 0, Default_Owner_Owner_SERIALIZE);
}

Owner::~Owner() {
    NOTIFY_DESTRUCTOR(~Owner, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOwner::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedOperator::serializeAttributes(aomsAttributes);
}

void OMAnimatedOwner::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedOperator::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Owner, Default, false, Operator, OMAnimatedOperator, OMAnimatedOwner)

OMINIT_SUPERCLASS(Operator, OMAnimatedOperator)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Owner.cpp
*********************************************************************/
