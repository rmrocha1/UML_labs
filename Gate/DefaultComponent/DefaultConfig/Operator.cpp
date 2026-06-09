/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Operator
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Operator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Operator.h"
//#[ ignore
#define Default_Operator_Operator_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Operator
Operator::Operator() {
    NOTIFY_CONSTRUCTOR(Operator, Operator(), 0, Default_Operator_Operator_SERIALIZE);
}

Operator::~Operator() {
    NOTIFY_DESTRUCTOR(~Operator, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOperator::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Operator, Default, Default, false, OMAnimatedOperator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Operator.cpp
*********************************************************************/
