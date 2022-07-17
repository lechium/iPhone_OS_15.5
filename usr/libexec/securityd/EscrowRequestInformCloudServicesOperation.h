//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSLockStateTracker, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface EscrowRequestInformCloudServicesOperation
{
    NSString<OctagonStateString> *_nextState;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    CKKSLockStateTracker *_lockStateTracker;	// 24 = 0x18
}

+ (id)triggerCloudServicesPasscodeRequest:(id)arg1 serializedReason:(id)arg2 error:(id *)arg3;	// IMP=0x00200000001d0336
- (void).cxx_destruct;	// IMP=0x00200000001d02f4
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)main;	// IMP=0x00100000001cf98f
- (id)initWithIntendedState:(id)arg1 errorState:(id)arg2 lockStateTracker:(id)arg3;	// IMP=0x00100000001cf8c9

@end
