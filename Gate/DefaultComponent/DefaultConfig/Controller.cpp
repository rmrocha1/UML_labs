/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Controller.h"
//#[ ignore
#define Default_Controller_Controller_SERIALIZE OM_NO_OP

#define Default_Controller_message_0_SERIALIZE OM_NO_OP

#define Default_Controller_set_state_SERIALIZE aomsmethod->addAttribute("state", x2String((int)state));

#define Default_object_0_object_0_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Controller
//## class Controller::object_0
Controller::object_0_C::object_0_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(object_0, object_0(), 0, Default_object_0_object_0_SERIALIZE, object_0_C);
}

Controller::object_0_C::~object_0_C() {
    NOTIFY_DESTRUCTOR(~object_0, true);
}

Controller::Controller(IOxfActive* theActiveContext) : position(0.), position_max(5.), position_min(0.), state(STOPPED), state0(CLOSING) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Controller, Controller(), 0, Default_Controller_Controller_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDetector.setShouldDelete(false);
        }
        {
            itsDrive.setShouldDelete(false);
        }
        {
            itsLamp.setShouldDelete(false);
        }
        {
            itsReceiver.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
    initWebAdapters();
}

Controller::~Controller() {
    NOTIFY_DESTRUCTOR(~Controller, false);
    delete itsWebAdapter;
    cancelTimeouts();
}

void Controller::message_0() {
    NOTIFY_OPERATION(message_0, message_0(), 0, Default_Controller_message_0_SERIALIZE);
    //#[ operation message_0()
    //#]
}

void Controller::set_state(const States& state) {
    NOTIFY_OPERATION(set_state, set_state(const States&), 1, Default_Controller_set_state_SERIALIZE);
    //#[ operation set_state(States)
    //#]
}

float Controller::getPosition() const {
    return position;
}

void Controller::setPosition(float p_position) {
    position = p_position;
    NOTIFY_SET_OPERATION;
}

float Controller::getPosition_max() const {
    return position_max;
}

void Controller::setPosition_max(float p_position_max) {
    position_max = p_position_max;
}

float Controller::getPosition_min() const {
    return position_min;
}

void Controller::setPosition_min(float p_position_min) {
    position_min = p_position_min;
}

States Controller::getState() const {
    return state;
}

void Controller::setState(States p_state) {
    state = p_state;
    NOTIFY_SET_OPERATION;
}

States Controller::getState0() const {
    return state0;
}

void Controller::setState0(States p_state0) {
    state0 = p_state0;
}

bool Controller::getState_indication() const {
    return state_indication;
}

void Controller::setState_indication(bool p_state_indication) {
    state_indication = p_state_indication;
}

Detector* Controller::getItsDetector() const {
    return (Detector*) &itsDetector;
}

Display* Controller::getItsDisplay() const {
    return (Display*) &itsDisplay;
}

Drive* Controller::getItsDrive() const {
    return (Drive*) &itsDrive;
}

Keyboard* Controller::getItsKeyboard() const {
    return (Keyboard*) &itsKeyboard;
}

Lamp* Controller::getItsLamp() const {
    return (Lamp*) &itsLamp;
}

Receiver* Controller::getItsReceiver() const {
    return (Receiver*) &itsReceiver;
}

Controller::object_0_C* Controller::getObject_0() const {
    return (Controller::object_0_C*) &object_0;
}

bool Controller::startBehavior() {
    bool done = true;
    done &= itsDetector.startBehavior();
    done &= itsDrive.startBehavior();
    done &= itsLamp.startBehavior();
    done &= itsReceiver.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Controller::initRelations() {
    itsDetector._setItsController(this);
    itsDrive._setItsController(this);
    itsReceiver._setItsController(this);
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Stop_subState = OMNonState;
    Start_subState = OMNonState;
    rootState_timeout = NULL;
}

void Controller::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

//#[ ignore
const ClassWebAdapter * Controller::getItsWebAdapter() const {
    return itsWebAdapter;
}

void Controller::visitWebAdaptedRelations() const {
    {
        const Detector* itsClient = getItsDetector();
        if (itsClient != NULL) {
            const ClassWebAdapter * peerAdapter = itsClient->getItsWebAdapter();
            if (peerAdapter != NULL) {
                itsWebAdapter->UpdateWebRelation(peerAdapter);
            }
        }
    }
    {
        const Receiver* itsClient = getItsReceiver();
        if (itsClient != NULL) {
            const ClassWebAdapter * peerAdapter = itsClient->getItsWebAdapter();
            if (peerAdapter != NULL) {
                itsWebAdapter->UpdateWebRelation(peerAdapter);
            }
        }
    }
}

void Controller::initWebAdapters() {
    itsWebAdapter = new ClassWebAdapterTmpl< Controller >(this, "Controller");
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< Controller, evSignal >(this, "evSignal"));
    itsWebAdapter->AddSubObject(new EventReceptionWebAdapterTmpl< Controller, evCollision >(this, "evCollision"));
}

void Controller::notifyWebRelationModified() const {
    ClassWebAdapter::NotifyWebRelationModified();
}

void Controller::evSignalWebWrapper() {
    GEN_BY_X(evSignal( ), this);
}

void Controller::evCollisionWebWrapper() {
    GEN_BY_X(evCollision( ), this);
}
//#]

void Controller::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDetector.setActiveContext(theActiveContext, false);
        itsDrive.setActiveContext(theActiveContext, false);
        itsLamp.setActiveContext(theActiveContext, false);
        itsReceiver.setActiveContext(theActiveContext, false);
    }
}

void Controller::destroy() {
    itsDetector.destroy();
    itsDrive.destroy();
    itsLamp.destroy();
    itsReceiver.destroy();
    OMReactive::destroy();
}

void Controller::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Servicing");
        pushNullTransition();
        rootState_subState = Servicing;
        rootState_active = Servicing;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Servicing
        case Servicing:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Servicing");
                    NOTIFY_STATE_ENTERED("ROOT.Auth");
                    rootState_subState = Auth;
                    rootState_active = Auth;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Auth
        case Auth:
        {
            if(IS_EVENT_TYPE_OF(evSuccess_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Auth");
                    NOTIFY_STATE_ENTERED("ROOT.Operation");
                    rootState_subState = Operation;
                    rootState_active = Operation;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evError_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Auth");
                    NOTIFY_STATE_ENTERED("ROOT.Error");
                    rootState_subState = Error;
                    rootState_active = Error;
                    rootState_timeout = scheduleTimeout(2000, "ROOT.Error");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Error
        case Error:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Error");
                            NOTIFY_STATE_ENTERED("ROOT.Auth");
                            rootState_subState = Auth;
                            rootState_active = Auth;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Operation
        case Operation:
        {
            if(IS_EVENT_TYPE_OF(evTest_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Testing");
                    rootState_subState = Testing;
                    rootState_active = Testing;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRegulate_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Regulation");
                    pushNullTransition();
                    rootState_subState = Regulation;
                    rootState_active = Regulation;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFirmware_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.Operation");
                    NOTIFY_STATE_ENTERED("ROOT.Firmware");
                    pushNullTransition();
                    rootState_subState = Firmware;
                    rootState_active = Firmware;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Regulation
        case Regulation:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Regulation");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_19");
                    rootState_subState = terminationstate_19;
                    rootState_active = terminationstate_19;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Testing
        case Testing:
        {
            if(IS_EVENT_TYPE_OF(evOK_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.Testing");
                    //#[ transition 9 
                    itsReceiver.GEN(evActivate(true));
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evFAIL_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.Testing");
                    //#[ transition 7 
                    itsReceiver.GEN(evActivate(false));
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Blockade");
                    pushNullTransition();
                    rootState_subState = Blockade;
                    rootState_active = Blockade;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Firmware
        case Firmware:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Firmware");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_19");
                    rootState_subState = terminationstate_19;
                    rootState_active = terminationstate_19;
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Blockade
        case Blockade:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Blockade");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_19");
                    rootState_subState = terminationstate_19;
                    rootState_active = terminationstate_19;
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Ready
        case Ready:
        {
            res = Ready_handleEvent();
        }
        break;
        // State sendaction_10
        case sendaction_10:
        {
            res = sendaction_10_handleEvent();
        }
        break;
        // State sendaction_11
        case sendaction_11:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("39");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_11");
                    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_12");
                    pushNullTransition();
                    Start_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state Start.sendaction_12.(Entry) 
                    itsDrive.GEN(evStart(state));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("39");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Start_handleEvent();
                }
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("24");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_12");
                    NOTIFY_STATE_ENTERED("ROOT.Start.terminationstate_18");
                    Start_subState = terminationstate_18;
                    rootState_active = terminationstate_18;
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Start_handleEvent();
                }
        }
        break;
        // State terminationstate_18
        case terminationstate_18:
        {
            res = Start_handleEvent();
        }
        break;
        // State sendaction_14
        case sendaction_14:
        {
            res = sendaction_14_handleEvent();
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_15");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_16");
                    pushNullTransition();
                    Stop_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state Stop.sendaction_16.(Entry) 
                    itsDrive.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Stop_handleEvent();
                }
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_16");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.terminationstate_17");
                    Stop_subState = terminationstate_17;
                    rootState_active = terminationstate_17;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Stop_handleEvent();
                }
        }
        break;
        // State terminationstate_17
        case terminationstate_17:
        {
            res = Stop_handleEvent();
        }
        break;
        // State sendaction_20
        case sendaction_20:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_20");
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_21
        case sendaction_21:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 32 
                    if(!state_indication)
                        {
                            NOTIFY_TRANSITION_STARTED("33");
                            NOTIFY_TRANSITION_STARTED("32");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_21");
                            NOTIFY_STATE_ENTERED("ROOT.Ready");
                            rootState_subState = Ready;
                            rootState_active = Ready;
                            NOTIFY_TRANSITION_TERMINATED("32");
                            NOTIFY_TRANSITION_TERMINATED("33");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("33");
                            NOTIFY_TRANSITION_STARTED("31");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.sendaction_21");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_20");
                            pushNullTransition();
                            rootState_subState = sendaction_20;
                            rootState_active = sendaction_20;
                            //#[ state sendaction_20.(Entry) 
                            itsLamp.GEN(evStep(0.));
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("31");
                            NOTIFY_TRANSITION_TERMINATED("33");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Step
        case Step:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("34");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Step");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_21");
                    pushNullTransition();
                    rootState_subState = sendaction_21;
                    rootState_active = sendaction_21;
                    //#[ state sendaction_21.(Entry) 
                    itsDetector.GEN(evCheckCollision);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("34");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Controller::Stop_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Stop");
    pushNullTransition();
    rootState_subState = Stop;
    NOTIFY_TRANSITION_STARTED("18");
    //#[ transition 18 
    set_state(STOPPED);
    //#]
    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_14");
    pushNullTransition();
    Stop_subState = sendaction_14;
    rootState_active = sendaction_14;
    //#[ state Stop.sendaction_14.(Entry) 
    itsDetector.GEN(evStop);
    //#]
    NOTIFY_TRANSITION_TERMINATED("18");
}

void Controller::Stop_exit() {
    popNullTransition();
    switch (Stop_subState) {
        // State sendaction_14
        case sendaction_14:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_14");
        }
        break;
        // State sendaction_15
        case sendaction_15:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_15");
        }
        break;
        // State sendaction_16
        case sendaction_16:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_16");
        }
        break;
        // State terminationstate_17
        case terminationstate_17:
        {
            NOTIFY_STATE_EXITED("ROOT.Stop.terminationstate_17");
        }
        break;
        default:
            break;
    }
    Stop_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Stop");
}

IOxfReactive::TakeEventStatus Controller::Stop_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 29 
            if(IS_COMPLETED(Stop)==true)
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    Stop_exit();
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::sendaction_14_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 20 
            if(!state_indication)
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_TRANSITION_STARTED("20");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_16");
                    pushNullTransition();
                    Stop_subState = sendaction_16;
                    rootState_active = sendaction_16;
                    //#[ state Stop.sendaction_16.(Entry) 
                    itsDrive.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Stop.sendaction_14");
                    NOTIFY_STATE_ENTERED("ROOT.Stop.sendaction_15");
                    pushNullTransition();
                    Stop_subState = sendaction_15;
                    rootState_active = sendaction_15;
                    //#[ state Stop.sendaction_15.(Entry) 
                    itsLamp.GEN(evStop);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("19");
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Stop_handleEvent();
        }
    return res;
}

void Controller::Start_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Start");
    pushNullTransition();
    rootState_subState = Start;
    NOTIFY_TRANSITION_STARTED("10");
    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_10");
    pushNullTransition();
    Start_subState = sendaction_10;
    rootState_active = sendaction_10;
    //#[ state Start.sendaction_10.(Entry) 
    itsDetector.GEN(evStart(state));
    //#]
    NOTIFY_TRANSITION_TERMINATED("10");
}

void Controller::Start_exit() {
    popNullTransition();
    switch (Start_subState) {
        // State sendaction_10
        case sendaction_10:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_10");
        }
        break;
        // State sendaction_11
        case sendaction_11:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_11");
        }
        break;
        // State sendaction_12
        case sendaction_12:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Start.sendaction_12");
        }
        break;
        // State terminationstate_18
        case terminationstate_18:
        {
            NOTIFY_STATE_EXITED("ROOT.Start.terminationstate_18");
        }
        break;
        default:
            break;
    }
    Start_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Start");
}

IOxfReactive::TakeEventStatus Controller::Start_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 13 
            if(IS_COMPLETED(Start)==true)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    Start_exit();
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
        }
    
    return res;
}

IOxfReactive::TakeEventStatus Controller::sendaction_10_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 12 
            if(!state_indication)
                {
                    NOTIFY_TRANSITION_STARTED("38");
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_12");
                    pushNullTransition();
                    Start_subState = sendaction_12;
                    rootState_active = sendaction_12;
                    //#[ state Start.sendaction_12.(Entry) 
                    itsDrive.GEN(evStart(state));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    NOTIFY_TRANSITION_TERMINATED("38");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("38");
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Start.sendaction_10");
                    NOTIFY_STATE_ENTERED("ROOT.Start.sendaction_11");
                    pushNullTransition();
                    Start_subState = sendaction_11;
                    rootState_active = sendaction_11;
                    //#[ state Start.sendaction_11.(Entry) 
                    itsLamp.GEN(evStart(state));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    NOTIFY_TRANSITION_TERMINATED("38");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Start_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus Controller::Ready_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSignal_Default_id))
        {
            if(TRUE)
                {
                    //## transition 16 
                    if(state0 == CLOSING)
                        {
                            NOTIFY_TRANSITION_STARTED("14");
                            NOTIFY_TRANSITION_STARTED("15");
                            NOTIFY_TRANSITION_STARTED("16");
                            NOTIFY_STATE_EXITED("ROOT.Ready");
                            //#[ transition 16 
                            set_state(OPENING);
                            //#]
                            Start_entDef();
                            NOTIFY_TRANSITION_TERMINATED("16");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            NOTIFY_TRANSITION_TERMINATED("14");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 17 
                            if(state0 == OPENING)
                                {
                                    NOTIFY_TRANSITION_STARTED("14");
                                    NOTIFY_TRANSITION_STARTED("15");
                                    NOTIFY_TRANSITION_STARTED("17");
                                    NOTIFY_STATE_EXITED("ROOT.Ready");
                                    //#[ transition 17 
                                    set_state(CLOSING);
                                    //#]
                                    Start_entDef();
                                    NOTIFY_TRANSITION_TERMINATED("17");
                                    NOTIFY_TRANSITION_TERMINATED("15");
                                    NOTIFY_TRANSITION_TERMINATED("14");
                                    res = eventConsumed;
                                }
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(evCollision_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("28");
            NOTIFY_STATE_EXITED("ROOT.Ready");
            Stop_entDef();
            NOTIFY_TRANSITION_TERMINATED("28");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evStep_Default_id))
        {
            OMSETPARAMS(evStep);
            //## transition 37 
            if(state == OPENING ? (position < position_max) : (position > position_min))
                {
                    NOTIFY_TRANSITION_STARTED("35");
                    NOTIFY_TRANSITION_STARTED("37");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    NOTIFY_STATE_ENTERED("ROOT.Step");
                    pushNullTransition();
                    rootState_subState = Step;
                    rootState_active = Step;
                    //#[ state Step.(Entry) 
                    position += 1;
                    std::cout << "\nposition: " << position;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("37");
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("35");
                    NOTIFY_TRANSITION_STARTED("36");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    Stop_entDef();
                    NOTIFY_TRANSITION_TERMINATED("36");
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String((int)myReal->state));
    aomsAttributes->addAttribute("state0", x2String((int)myReal->state0));
    aomsAttributes->addAttribute("position", x2String(myReal->position));
    aomsAttributes->addAttribute("position_max", x2String(myReal->position_max));
    aomsAttributes->addAttribute("position_min", x2String(myReal->position_min));
    aomsAttributes->addAttribute("state_indication", x2String(myReal->state_indication));
    OMAnimatedModule::serializeAttributes(aomsAttributes);
}

void OMAnimatedController::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("object_0", true, true);
    aomsRelations->ADD_ITEM(&myReal->object_0);
    aomsRelations->addRelation("itsDetector", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDetector);
    aomsRelations->addRelation("itsDrive", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDrive);
    aomsRelations->addRelation("itsLamp", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsLamp);
    aomsRelations->addRelation("itsReceiver", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsReceiver);
    aomsRelations->addRelation("itsKeyboard", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsKeyboard);
    aomsRelations->addRelation("itsDisplay", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDisplay);
    OMAnimatedModule::serializeRelations(aomsRelations);
}

void OMAnimatedController::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Controller::Servicing:
        {
            Servicing_serializeStates(aomsState);
        }
        break;
        case Controller::Auth:
        {
            Auth_serializeStates(aomsState);
        }
        break;
        case Controller::Error:
        {
            Error_serializeStates(aomsState);
        }
        break;
        case Controller::Operation:
        {
            Operation_serializeStates(aomsState);
        }
        break;
        case Controller::Regulation:
        {
            Regulation_serializeStates(aomsState);
        }
        break;
        case Controller::Testing:
        {
            Testing_serializeStates(aomsState);
        }
        break;
        case Controller::Firmware:
        {
            Firmware_serializeStates(aomsState);
        }
        break;
        case Controller::Blockade:
        {
            Blockade_serializeStates(aomsState);
        }
        break;
        case Controller::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case Controller::Start:
        {
            Start_serializeStates(aomsState);
        }
        break;
        case Controller::Stop:
        {
            Stop_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_19:
        {
            terminationstate_19_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_20:
        {
            sendaction_20_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_21:
        {
            sendaction_21_serializeStates(aomsState);
        }
        break;
        case Controller::Step:
        {
            Step_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::Testing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Testing");
}

void OMAnimatedController::terminationstate_19_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_19");
}

void OMAnimatedController::Stop_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop");
    switch (myReal->Stop_subState) {
        case Controller::sendaction_14:
        {
            sendaction_14_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_15:
        {
            sendaction_15_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_16:
        {
            sendaction_16_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_17:
        {
            terminationstate_17_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::terminationstate_17_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.terminationstate_17");
}

void OMAnimatedController::sendaction_16_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_16");
}

void OMAnimatedController::sendaction_15_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_15");
}

void OMAnimatedController::sendaction_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Stop.sendaction_14");
}

void OMAnimatedController::Step_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Step");
}

void OMAnimatedController::Start_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start");
    switch (myReal->Start_subState) {
        case Controller::sendaction_10:
        {
            sendaction_10_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_11:
        {
            sendaction_11_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_12:
        {
            sendaction_12_serializeStates(aomsState);
        }
        break;
        case Controller::terminationstate_18:
        {
            terminationstate_18_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::terminationstate_18_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.terminationstate_18");
}

void OMAnimatedController::sendaction_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_12");
}

void OMAnimatedController::sendaction_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_11");
}

void OMAnimatedController::sendaction_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Start.sendaction_10");
}

void OMAnimatedController::Servicing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Servicing");
}

void OMAnimatedController::sendaction_21_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_21");
}

void OMAnimatedController::sendaction_20_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_20");
}

void OMAnimatedController::Regulation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Regulation");
}

void OMAnimatedController::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}

void OMAnimatedController::Operation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Operation");
}

void OMAnimatedController::Firmware_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Firmware");
}

void OMAnimatedController::Error_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Error");
}

void OMAnimatedController::Blockade_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Blockade");
}

void OMAnimatedController::Auth_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Auth");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Controller, Default, false, Module, OMAnimatedModule, OMAnimatedController)

OMINIT_SUPERCLASS(Module, OMAnimatedModule)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OBJECT_P(Controller::object_0, Controller::object_0_C, Default, Default, false, OMAnimatedobject_0_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Controller.cpp
*********************************************************************/
