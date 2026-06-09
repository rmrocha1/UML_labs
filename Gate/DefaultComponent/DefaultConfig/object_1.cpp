/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: object_1
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/object_1.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "object_1.h"
//#[ ignore
#define Default_object_1_object_1_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::object_1
object_1_C::object_1_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(object_1, object_1(), 0, Default_object_1_object_1_SERIALIZE, object_1_C);
}

object_1_C::~object_1_C() {
    NOTIFY_DESTRUCTOR(~object_1, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_OBJECT_P(object_1, object_1_C, Default, Default, false, OMAnimatedobject_1_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/object_1.cpp
*********************************************************************/
