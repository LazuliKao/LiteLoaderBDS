// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorPassengerCountTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPASSENGERCOUNTTEST
public:
    class ActorPassengerCountTest& operator=(class ActorPassengerCountTest const&) = delete;
    ActorPassengerCountTest(class ActorPassengerCountTest const&) = delete;
    ActorPassengerCountTest() = delete;
#endif

public:
    /*0*/ virtual ~ActorPassengerCountTest();
    /*2*/ virtual bool evaluate(struct FilterContext const&) const;
    /*3*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*6*/ virtual class Json::Value _serializeValue() const;
    /*
    inline  ~ActorPassengerCountTest(){
         (ActorPassengerCountTest::*rv)();
        *((void**)&rv) = dlsym("??1ActorPassengerCountTest@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};