/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

package com.mediatek.keyguard.plugin;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.telephony.TelephonyManager;
import android.util.Log;
import android.view.Gravity;

import com.android.internal.telephony.PhoneConstants;

import com.mediatek.common.PluginImpl;
import com.mediatek.keyguard.ext.DefaultKeyguardUtilExt;
import com.mediatek.op09.plugin.R;

/**
 * Customize keyguard utils.
 */
@PluginImpl(interfaceName = "com.mediatek.keyguard.ext.IKeyguardUtilExt")
public class OP09KeyguardUtilExt extends DefaultKeyguardUtilExt {
    public static final String TAG = "OP09KeyguardUtilExt";

    private Context mContext;

    /**
     * The constructor and to save the plugin's context for resource access.
     *
     * @param context the context of plugin.
     */
    public OP09KeyguardUtilExt(Context context) {
        super();
        mContext = context;
    }

    /**
     * Whether we need to customize PIN/PUK lock view.
     *
     * @return true if we need to customize.
     */
    @Override
    public boolean needCustomizePinPukLockView() {
        Log.d(TAG, "needCustomizePinPukLockView");
        if (TelephonyManager.getDefault().getPhoneCount() > 1) {
            return true;
        } else {
            return false;
        }
    }

    /**
     * Get the drawable of the SIM icon according to
     * phone ID in PIN/PUK lock view.
     *
     * @param phoneId the current phone ID.
     *
     * @param icon the default icon drawable.
     *
     * @return the drawable of the SIM icon.
     */
    @Override
    public Drawable getCustomizedSimIcon(int phoneId, Drawable icon) {
        Log.d(TAG, "getCustomizedSimIcon phoneId = " + phoneId);
        if (phoneId == PhoneConstants.SIM_ID_1) {
            return mContext.getResources().
                        getDrawable(R.drawable.ic_lockscreen_sim1);
        } else if (phoneId == PhoneConstants.SIM_ID_2) {
            return mContext.getResources().
                        getDrawable(R.drawable.ic_lockscreen_sim2);
        }
        return icon;
    }

    /**
     * Set the carrier text gravity.
     *
     * @param gravity the gravity value of current carrier text.
     *
     * @return the customized gravity value.
     */
    @Override
    public int setCarrierTextGravity(int gravity) {
        Log.d(TAG, "setCarrierTextGravity gravity = " + gravity);
        return Gravity.CENTER;
    }
}
