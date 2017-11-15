#ifndef WIDGET_HUMANDETECTOR_H_
#define WIDGET_HUMANDETECTOR_H_

#include "application.h"

class WidgetHumandetector
{
    public:
        WidgetHumandetector(uint8_t ucItem = 0);
        ~WidgetHumandetector();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayHumanStatus(uint8_t ucVal);

    private:
        char pDataStatusTopic[64];
        uint8_t _Item=0;
};

#endif
