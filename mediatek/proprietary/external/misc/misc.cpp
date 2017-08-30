/*
* Copyright (C) 2014 MediaTek Inc.
* Modification based on code covered by the mentioned copyright
* and/or permission notice(s).
*/
/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#include <linux/fb.h>
#include <sys/ioctl.h>
#include <sys/mman.h>

#include <binder/ProcessState.h>

#include <gui/SurfaceComposerClient.h>
#include <gui/ISurfaceComposer.h>

#include <ui/PixelFormat.h>

#include <utils/Log.h>
#include "libfile_op.h"
#include "libnvram.h"
#include "CFG_WIFI_Default.h"
#include "Custom_NvRam_LID.h"
#include "CFG_file_lid.h"
#include "CFG_PRODUCT_INFO_File.h"
#include "CFG_Wifi_File.h"

#define MAX_RETRY_COUNT 20

using namespace android;

int main(int argc, char** argv)
{

	char retry = 0;
	
	while(retry < MAX_RETRY_COUNT)
	{
		if(FileOp_BackupToBinRegion_All())
		{
			ALOGD("backup nvram data to binregion success!");
			break;
		}
		if(retry == MAX_RETRY_COUNT)
		{
			ALOGD("backup nvram data to binregion fail!");
		}	
		retry++;
	}
	sync ();
    return 0;
}
