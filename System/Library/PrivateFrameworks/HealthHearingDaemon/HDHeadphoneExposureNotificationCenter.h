//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAENotificationCenter, HDProfile;

__attribute__((visibility("hidden")))
@interface HDHeadphoneExposureNotificationCenter : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    HAENotificationCenter *_notificationCenter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001446f
- (void)_reportHeadphoneNotificationWithNowDate:(id)arg1 eventDuration:(double)arg2 exposureLevel:(double)arg3 exposureDuration:(double)arg4 hasPrunableData:(_Bool)arg5 isDeviceLocked:(_Bool)arg6 analyticsInfo:(id)arg7;	// IMP=0x0000000000013e9c
- (id)postSevenDayDoseNotification:(id)arg1 nowDate:(id)arg2 analyticsInfo:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001375c
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000001365e

@end

