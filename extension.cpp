#include "pxt.h"
using namespace pxt;
/**
 * Descritpion of a block
 */
//% weight=1 color="#000000" icon="\uf2db"
namespace exampel {
    /**
     * Description of the block
     */
    //%blockId="stuff" block="haha %x| %y"
    int extfun(int x, int y) {
        return x + y;
    }
}
