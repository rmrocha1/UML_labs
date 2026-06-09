/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Detector
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Detector.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Detector.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define Default_Detector_Detector_SERIALIZE OM_NO_OP

#define Default_Detector_check_collision_SERIALIZE OM_NO_OP

#define Default_Detector_message_0_SERIALIZE OM_NO_OP

#define Default_Detector_reset_counters_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Detector
Detector::Detector(IOxfActive* theActiveContext) : pulses_sent(0), threshold(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Detector, Detector(), 0, Default_Detector_Detector_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsController = NULL;
    initStatechart();
    initWebAdapters();
}

Detector::~Detector() {
    NOTIFY_DESTRUCTOR(~Detector, false);
    delete itsWebAdapter;
    cleanUpRelations();
}

bool Detector::check_collision() {
    NOTIFY_OPERATION(check_collision, check_collision(), 0, Default_Detector_check_collision_SERIALIZE);
    //#[ operation check_collision()
    if(pulses_sent < threshold) {
    	return false; } else {
    	return true; }
    //#]
}

void Detector::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, Default_Detector_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void Detector::reset_counters() {
    NOTIFY_OPERATION(reset_counters, reset_counters(), 0, Default_Detector_reset_counters_SERIALIZE);
    //#[ operation reset_counters()
    //#]
}

int Detector::getMargin() const {
    return margin;
}

void Detector::setMargin(int p_margin) {
    margin = p_margin;
}

int Detector::getPulses_sent() const {
    return pulses_sent;
}

void Detector::setPulses_sent(int p_pulses_sent) {
    pulses_sent = p_pulses_sent;
}

int Detector::getThreshold() const {
    return threshold;
}

void Detector::setThreshold(int p_threshold) {
    threshold = p_threshold;
}

Controller* Detector::getItsController() const {
    return itsController;
}

void Detector::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Detector::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Detector::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Detector::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

//#[ ignore
const ClassWebAdapter * Detector::getItsWebAdapter() const {
    return itsWebAdapter;
}

void Detector::visitWebAdaptedRelations() const {
}

void Detector::initWebAdapters() {
    itsWebAdapter = new ClassWebAdapterTmpl< Detector >(this, "Detector");
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< Detector, evCollision >(this, "evCollision"));
}

void Detector::evCollisionWebWrapper() {
    GEN_BY_X(evCollision( ), this);
}
//#]

void Detector::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

void Detector::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Detector::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Detector::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Inactive");
        rootState_subState = Inactive;
        rootState_active = Inactive;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Detector::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Inactive
        case Inactive:
        {
            if(IS_EVENT_TYPE_OF(evStart_Default_id))
                {
                    OMSETPARAMS(evStart);
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Inactive");
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Active
        case Active:
        {
            if(IS_EVENT_TYPE_OF(evStop_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    NOTIFY_STATE_ENTERED("ROOT.Inactive");
                    rootState_subState = Inactive;
                    rootState_active = Inactive;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.Active");
                    //#[ transition 5 
                    pulses_sent += margin;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evCheckCollision_Default_id))
                {
                    //## transition 3 
                    if(check_collision())
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.Active");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_2");
                            pushNullTransition();
                            rootState_subState = sendaction_2;
                            rootState_active = sendaction_2;
                            //#[ state sendaction_2.(Entry) 
                            itsController->GEN(evCollision);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State sendaction_2
        case sendaction_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_2");
                    //#[ transition 4 
                    reset_counters();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Active");
                    rootState_subState = Active;
                    rootState_active = Active;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDetector::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pulses_sent", x2String(myReal->pulses_sent));
    aomsAttributes->addAttribute("margin", x2String(myReal->margin));
    aomsAttributes->addAttribute("threshold", x2String(myReal->threshold));
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedDetector::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedModule::serializeRelations(aomsRelations);
}

void OMAnimatedDetector::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Detector::Inactive:
        {
            Inactive_serializeStates(aomsState);
        }
        break;
        case Detector::Active:
        {
            Active_serializeStates(aomsState);
        }
        break;
        case Detector::sendaction_2:
        {
            sendaction_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDetector::sendaction_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_2");
}

void OMAnimatedDetector::Inactive_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Inactive");
}

void OMAnimatedDetector::Active_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Active");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Detector, Default, false, Module, OMAnimatedModule, OMAnimatedDetector)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Detector.cpp
*********************************************************************/
