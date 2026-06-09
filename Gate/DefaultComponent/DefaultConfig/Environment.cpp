/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//#[ ignore
#define Default_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Environment
Environment::Environment() {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, Default_Environment_Environment_SERIALIZE);
}

Environment::~Environment() {
    NOTIFY_DESTRUCTOR(~Environment, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Environment, Default, Default, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Environment.cpp
*********************************************************************/
