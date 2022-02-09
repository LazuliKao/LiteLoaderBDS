// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DisplayNameItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPLAYNAMEITEMCOMPONENT
public:
    class DisplayNameItemComponent& operator=(class DisplayNameItemComponent const&) = delete;
    DisplayNameItemComponent(class DisplayNameItemComponent const&) = delete;
    DisplayNameItemComponent() = delete;
#endif

public:
    /*0*/ virtual ~DisplayNameItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);
    MCAPI DisplayNameItemComponent(class ComponentItem*);
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

protected:

private:

};