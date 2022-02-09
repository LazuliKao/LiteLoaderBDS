// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockSourceHandle : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCEHANDLE
public:
    class BlockSourceHandle& operator=(class BlockSourceHandle const&) = delete;
    BlockSourceHandle(class BlockSourceHandle const&) = delete;
    BlockSourceHandle() = delete;
#endif

public:
    /*0*/ virtual ~BlockSourceHandle();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void onSourceDestroyed(class BlockSource&);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void onBlockEntityAboutToBeRemoved(class BlockSource&, class std::shared_ptr<class BlockActor>);

protected:

private:

};