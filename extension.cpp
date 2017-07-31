#include "pxt.h"
using namespace pxt;
/**
 * Descritpion of a block
 */
//% weight=1 color="#550000" icon="\uf2db"
namespace exampel {
    /**
     * Description of the block
     */
    //%blockId="stuff" block="haha %x| %y"
    int extfun(int x, int y) {
        return x + y;
    }
    /**
     * Shows a simpel number
     */
     //%blockId="showStuff" block="Number %num"
     void showStuff(int num){
         uBit.display.image.setPixelValue(0, 0, 1);
     }
}
