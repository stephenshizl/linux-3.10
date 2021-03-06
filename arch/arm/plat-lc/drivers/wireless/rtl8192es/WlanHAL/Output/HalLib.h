#ifndef __HALLIB_H__
#define __HALLIB_H__
/*++
Copyright (c) Realtek Semiconductor Corp. All rights reserved.

Module Name:
	HalLib.h
	
Abstract:
	API Interface that export Function Prototype & Variable & Strcture & Enum & Marco 
	for Driver
	    
Major Change History:
	When       Who               What
	---------- ---------------   -------------------------------
	2012-03-23 Filen            Create.	
--*/

#ifndef WLAN_HAL_INTERNAL_USED

//Code below only are used by "Not WlanHAL"
//1 HAL Library API

//4 Common
#include "../Include/PlatformDef.h"
#include "../Include/StatusCode.h"
#include "../Include/GeneralDef.h"

//4 HAL Common
#include "../HalCfg.h"
#include "../HalCommon.h"


//4 Chip Dependent
#if IS_RTL88XX_GENERATION
#include "../RTL88XX/Hal88XXDef.h"
#include "../RTL88XX/Hal88XXDesc.h"
#include "../RTL88XX/Hal88XXTxDesc.h"
#include "../RTL88XX/Hal88XXRxDesc.h"
#include "../RTL88XX/Hal88XXFirmware.h"
#include "../RTL88XX/Hal88XXDebug.h"
#include "../RTL88XX/Hal88XXPhyCfg.h"
#include "../RTL88XX/Hal88XXDM.h"

#if IS_EXIST_RTL8192EE
#endif

#if IS_EXIST_RTL8881AEM
#endif

#endif  //IS_RTL88XX_GENERATION



//Final Result
#include "../HalDef.h"

#endif  //WLAN_HAL_INTERNAL_USED


#endif  //#ifndef __HAL8881A_LIB_H__


