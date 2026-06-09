/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-103
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 9, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsController
class Controller;

//## auto_generated
class Detector;

//## auto_generated
class Display;

//## auto_generated
class Drive;

//## auto_generated
class Keyboard;

//## auto_generated
class Lamp;

//## auto_generated
class Module;

//## auto_generated
class Receiver;

//## classInstance object_1
class object_1_C;

//#[ ignore
#define evSignal_Default_id 18601

#define eventmessage_0_Default_id 18602

#define evStop_Default_id 18603

#define evStart_Default_id 18604

#define evStep_Default_id 18605

#define evCheckCollision_Default_id 18606

#define evCollision_Default_id 18607

#define evActivate_Default_id 18608

#define evError_Default_id 18609

#define evSuccess_Default_id 18610

#define evRegulate_Default_id 18611

#define evFirmware_Default_id 18612

#define evTest_Default_id 18613

#define evFAIL_Default_id 18614

#define evOK_Default_id 18615
//#]

//## package Default


//## type States
enum States {
    OPENING = 1,
    STOPPED = 0,
    CLOSING = -1
};

//## type Directions
enum Directions {
    FORWARD = 1,
    BACKWARD = -1
};

//## classInstance itsController
extern Controller itsController;

//## classInstance object_1
extern object_1_C object_1;

//## auto_generated
void Default_initRelations();

//## auto_generated
bool Default_startBehavior();

//#[ ignore
class Default_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Default_OMInitializer();
    
    //## auto_generated
    ~Default_OMInitializer();
};
//#]

//## event evSignal()
class evSignal : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSignal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSignal();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSignal : virtual public AOMEvent {
    DECLARE_META_EVENT(evSignal)
};
//#]
#endif // _OMINSTRUMENT

//## event eventmessage_0()
class eventmessage_0 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedeventmessage_0;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    eventmessage_0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedeventmessage_0 : virtual public AOMEvent {
    DECLARE_META_EVENT(eventmessage_0)
};
//#]
#endif // _OMINSTRUMENT

//## event evStop()
class evStop : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStop;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStop : virtual public AOMEvent {
    DECLARE_META_EVENT(evStop)
};
//#]
#endif // _OMINSTRUMENT

//## event evStart(States)
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
//#[ ignore
    evStart(int p_state);
//#]

    //## auto_generated
    evStart();
    
    //## auto_generated
    evStart(States p_state);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    States state;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

//## event evStep(float)
class evStep : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStep;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStep();
    
    //## auto_generated
    evStep(float p_amount);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    float amount;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStep : virtual public AOMEvent {
    DECLARE_META_EVENT(evStep)
};
//#]
#endif // _OMINSTRUMENT

//## event evCheckCollision()
class evCheckCollision : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCheckCollision;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCheckCollision();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCheckCollision : virtual public AOMEvent {
    DECLARE_META_EVENT(evCheckCollision)
};
//#]
#endif // _OMINSTRUMENT

//## event evCollision()
class evCollision : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCollision;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCollision();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCollision : virtual public AOMEvent {
    DECLARE_META_EVENT(evCollision)
};
//#]
#endif // _OMINSTRUMENT

//## event evActivate(bool)
class evActivate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevActivate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evActivate();
    
    //## auto_generated
    evActivate(bool p_active);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    bool active;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevActivate : virtual public AOMEvent {
    DECLARE_META_EVENT(evActivate)
};
//#]
#endif // _OMINSTRUMENT

//## event evError()
class evError : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevError;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evError();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevError : virtual public AOMEvent {
    DECLARE_META_EVENT(evError)
};
//#]
#endif // _OMINSTRUMENT

//## event evSuccess()
class evSuccess : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSuccess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSuccess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSuccess : virtual public AOMEvent {
    DECLARE_META_EVENT(evSuccess)
};
//#]
#endif // _OMINSTRUMENT

//## event evRegulate()
class evRegulate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRegulate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRegulate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRegulate : virtual public AOMEvent {
    DECLARE_META_EVENT(evRegulate)
};
//#]
#endif // _OMINSTRUMENT

//## event evFirmware()
class evFirmware : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFirmware;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFirmware();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFirmware : virtual public AOMEvent {
    DECLARE_META_EVENT(evFirmware)
};
//#]
#endif // _OMINSTRUMENT

//## event evTest()
class evTest : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTest;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTest();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTest : virtual public AOMEvent {
    DECLARE_META_EVENT(evTest)
};
//#]
#endif // _OMINSTRUMENT

//## event evFAIL()
class evFAIL : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFAIL;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFAIL();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFAIL : virtual public AOMEvent {
    DECLARE_META_EVENT(evFAIL)
};
//#]
#endif // _OMINSTRUMENT

//## event evOK()
class evOK : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevOK;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evOK();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevOK : virtual public AOMEvent {
    DECLARE_META_EVENT(evOK)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/
