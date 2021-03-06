#ifndef UGUI_BAFANG_500C
#define UGUI_BAFANG_500C

#include "../ugui/ugui.h"
    
/* *** Configuration. *** */
    
    /* Set here the name you have given to display CD and RESET signals in your schematic. */
//#define DISPLAY_RESET           GraphicLCDIntf_Write8(0, 0x01)
//#define DISPLAY_CD              DISP_CD
    
    /* Set here your display resolution. */
#define DISPLAY_WIDTH           320
#define DISPLAY_HEIGHT          480
    

#define CONCATENATE(name, function)                 CONCAT(name, function)
#define CONCAT(name, function)                      name##function

//#define mmDisplayReset_Write(value) CONCATENATE(DISPLAY_RESET, _Write(value))
//#define mmDisplayCD_Write(value)    CONCATENATE(DISPLAY_CD, _Write(value))
    
/* *** Glogal GUI structure for this. *** */
extern UG_GUI ugui_lcd;

/* *** Function prototypes. *** */
void Display_Init();
void Display_PixelSet(UG_S16 x, UG_S16 y, UG_COLOR c);
void Display_WindowSet(unsigned int s_x,unsigned int e_x,unsigned int s_y,unsigned int e_y);

    // Accelerators.
UG_RESULT HW_FillFrame(UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, UG_COLOR c);
UG_RESULT HW_DrawLine(UG_S16 x1 , UG_S16 y1 , UG_S16 x2 , UG_S16 y2 , UG_COLOR c );
UG_RESULT HW_DrawImage(UG_S16 x1, UG_S16 y1, UG_S16 x2, UG_S16 y2, uint8_t *image, uint16_t pSize);

#endif

/* [] END OF FILE */

