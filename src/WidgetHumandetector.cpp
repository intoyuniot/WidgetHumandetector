#include "WidgetHumandetector.h"


WidgetHumandetector::WidgetHumandetector(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/humandetector_%d/data/status",_Item);
}

WidgetHumandetector::~WidgetHumandetector()
{

}

void WidgetHumandetector::begin(void (*UserCallBack)(void))
{

}

void WidgetHumandetector::displayHumanStatus(uint8_t ucVal)
{
    IntoRobot.publish(pDataStatusTopic,ucVal);
}



