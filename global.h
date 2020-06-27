#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>

class AppConfig;
class DeviceConfig;
class SignalHandler;
//! CryEngine style global environment
//!	Global environment. Contains pointers to all global often needed interfaces.
//!	This is a faster way to get interface pointer then calling ISystem interface to retrieve one.
struct GlobalEnvironment
{
    AppConfig*                 pAppConfig = nullptr;
    DeviceConfig*              pDeviceConfig = nullptr;
    SignalHandler*             pSignalHandler = nullptr;
    // thread
};
extern GlobalEnvironment gEnv;


struct deviceEnum_guiName_t     // снести?
{
    int device_enum_index;
    QString gui_name;
};

    //! Remove pointer indirection.
//        ILINE SSystemGlobalEnvironment* operator->()
//        {
//            return this;
//        }
//        ILINE SSystemGlobalEnvironment& operator*()
//        {
//            return *this;
//        }
//        ILINE const bool operator!() const
//        {
//            return false;
//        }
//        ILINE operator bool() const
//        {
//            return true;
//        }


#endif // GLOBAL_H
//#if defined(SYS_ENV_AS_STRUCT)
