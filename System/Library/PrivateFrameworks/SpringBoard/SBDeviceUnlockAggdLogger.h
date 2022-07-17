//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSExternalEventHandling-Protocol.h>

@class NSString;

@interface SBDeviceUnlockAggdLogger : NSObject <CSExternalEventHandling>
{
    _Bool _observeDashBoardEvents;	// 8 = 0x8
}

@property(nonatomic, getter=_observeDashBoardEvents, setter=_setObserveDashBoardEvents:) _Bool observeDashBoardEvents; // @synthesize observeDashBoardEvents=_observeDashBoardEvents;
- (_Bool)wouldHandleButtonEvent:(id)arg1;	// IMP=0x00000000000d9ea5
- (_Bool)handleEvent:(id)arg1;	// IMP=0x00000000000d9df4
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)conformsToCSEventHandling;	// IMP=0x00000000000d9ddb
- (void)logUserResetIdleTimer;	// IMP=0x00000000000d9d4f
- (void)logIdleTimerScreenDimWarning;	// IMP=0x00000000000d9cc3
- (void)logOrientationAndAccessoryStateForPrefix:(id)arg1;	// IMP=0x00000000000d9b53
- (void)logDeviceUnlock;	// IMP=0x00000000000d9b3a
- (void)logDeviceWake;	// IMP=0x00000000000d9b21
- (void)dealloc;	// IMP=0x00000000000d9a86
- (id)init;	// IMP=0x00000000000d99dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
