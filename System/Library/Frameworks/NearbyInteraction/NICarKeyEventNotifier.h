//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NISession;

@interface NICarKeyEventNotifier : NSObject
{
    NISession *parentSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007c25
- (void)notifyVehicleTerminatedRangingSession;	// IMP=0x0000000000007aa5
- (void)notifyRangingIntentSentToVehicleWithReason:(long long)arg1;	// IMP=0x00000000000078de
- (void)notifyVehicleReadyToDriveWithReason:(long long)arg1;	// IMP=0x0000000000007717
- (void)notifyVehicleLockedWithReason:(long long)arg1;	// IMP=0x0000000000007550
- (void)notifyVehicleUnlockedWithReason:(long long)arg1;	// IMP=0x0000000000007389
- (id)initWithParentSession:(id)arg1;	// IMP=0x0000000000007311

@end
