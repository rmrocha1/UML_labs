/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Display.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Display.h"
//#[ ignore
#define Default_Display_Display_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Display
Display::Display() {
    NOTIFY_CONSTRUCTOR(Display, Display(), 0, Default_Display_Display_SERIALIZE);
}

Display::~Display() {
    NOTIFY_DESTRUCTOR(~Display, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDisplay::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedDisplay::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedModule::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Display, Default, false, Module, OMAnimatedModule, OMAnimatedDisplay)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Display.cpp
*********************************************************************/
