#ifndef RANDOM_H_
#define RANDOM_H_

#include <inttypes.h>

#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/ilist.h"

namespace multicompiler{
namespace Random {

class Random{
private:
    virtual void readStateFile() = 0;
    virtual void writeStateFile() = 0;

protected:
    Random(){ };
    Random(Random const&){}
    Random& operator=(Random const&){ return *this; }

public:
    virtual uint64_t random() = 0;
    virtual uint64_t randnext(uint64_t max) = 0;

    virtual ~Random() {}
  
};
}
}
#endif
