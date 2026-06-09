/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Module
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Module.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Module.h"
//#[ ignore
#define Default_Module_Module_SERIALIZE OM_NO_OP

#define Default_Module_get_active_SERIALIZE OM_NO_OP

#define Default_Module_is_ok_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Module
Module::Module() : is_active(false) {
    NOTIFY_CONSTRUCTOR(Module, Module(), 0, Default_Module_Module_SERIALIZE);
}

Module::~Module() {
    NOTIFY_DESTRUCTOR(~Module, true);
}

bool Module::get_active() {
    NOTIFY_OPERATION(get_active, get_active(), 0, Default_Module_get_active_SERIALIZE);
    //#[ operation get_active()
    //#]
}

bool Module::is_ok() {
    NOTIFY_OPERATION(is_ok, is_ok(), 0, Default_Module_is_ok_SERIALIZE);
    //#[ operation is_ok()
    //#]
}

int Module::getId() const {
    return id;
}

void Module::setId(int p_id) {
    id = p_id;
}

bool Module::getIs_active() const {
    return is_active;
}

void Module::setIs_active(bool p_is_active) {
    is_active = p_is_active;
}

RhpString Module::getName() const {
    return name;
}

void Module::setName(RhpString p_name) {
    name = p_name;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedModule::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    aomsAttributes->addAttribute("is_active", x2String(myReal->is_active));
    aomsAttributes->addAttribute("name", x2String(myReal->name));
}
//#]

IMPLEMENT_META_P(Module, Default, Default, false, OMAnimatedModule)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Module.cpp
*********************************************************************/
