// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IceSpikeFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICESPIKEFEATURE
public:
    class IceSpikeFeature& operator=(class IceSpikeFeature const&) = delete;
    IceSpikeFeature(class IceSpikeFeature const&) = delete;
    IceSpikeFeature() = delete;
#endif

public:
    /*0*/ virtual ~IceSpikeFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

protected:

private:

};