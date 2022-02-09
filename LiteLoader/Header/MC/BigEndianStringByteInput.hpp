// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StringByteInput.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BigEndianStringByteInput : public StringByteInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIGENDIANSTRINGBYTEINPUT
public:
    class BigEndianStringByteInput& operator=(class BigEndianStringByteInput const&) = delete;
    BigEndianStringByteInput(class BigEndianStringByteInput const&) = delete;
    BigEndianStringByteInput() = delete;
#endif

public:
    /*0*/ virtual ~BigEndianStringByteInput();
    /*3*/ virtual float readFloat();
    /*4*/ virtual double readDouble();
    /*6*/ virtual short readShort();
    /*7*/ virtual int readInt();
    /*8*/ virtual __int64 readLongLong();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool readBigEndianBytes(void*, unsigned __int64);
    /*
    inline  ~BigEndianStringByteInput(){
         (BigEndianStringByteInput::*rv)();
        *((void**)&rv) = dlsym("??1BigEndianStringByteInput@@UEAA@XZ");
        return (this->*rv)();
    }
    inline bool readBytes(void* a0, unsigned __int64 a1){
        bool (BigEndianStringByteInput::*rv)(void*, unsigned __int64);
        *((void**)&rv) = dlsym("?readBytes@BigEndianStringByteInput@@UEAA_NPEAX_K@Z");
        return (this->*rv)(std::forward<void*>(a0), std::forward<unsigned __int64>(a1));
    }
    */

protected:

private:

};