//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADHomeAccessorySiriDataSharingLogger, MISSING_TYPE, NSArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface ADHomeDataSharingRepromptManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _needsInitialPropagationKickOff;	// 16 = 0x10
    _Bool _needsPropagationAfterRetryFires;	// 17 = 0x11
    NSNumber *_targetHomeKitOptInStatus;	// 24 = 0x18
    NSArray *_accessoryIdsThatNeedPropagation;	// 32 = 0x20
    int _retryCounter;	// 40 = 0x28
    ADHomeAccessorySiriDataSharingLogger *_homeAccessorySiriDataSharingLogger;	// 48 = 0x30
    NSString *_logEventIdentifier;	// 56 = 0x38
    unsigned long long _propagationDelayInSeconds;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x004000000007d78d
- (void).cxx_destruct;	// IMP=0x0020000000080447
- (void)removeAccessoryFromPropagationList:(id)arg1;	// IMP=0x001000000008020b
- (MISSING_TYPE *)_clearPropagationStatusFromLocalStorage;	// IMP=0x00100000000801c5
- (void)_writePropagationStatusToLocalStorage;	// IMP=0x0010000000080047
- (void)_loadStoredPropagationStatus;	// IMP=0x001000000007fe86
- (void)_homeKitDataSyncHasFinished:(id)arg1;	// IMP=0x001000000007fce3
- (void)_propagateSiriDataSharingToAccessory:(id)arg1 home:(id)arg2 homeManager:(id)arg3 propagationEvent:(long long)arg4 propagationReason:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000007f7e1
- (void)_propagateDataSharingStatusToAccessoriesWithPropagationEvent:(long long)arg1 propagationReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007e7cc
- (void)propagateDataSharingStatusToAccessoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007e4a5
- (void)_kickOffInitialPropagationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007dd72
- (void)_propagateToAllHomeAccessoriesAfterReprompt:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007da67
- (void)propagateToAllHomeAccessoriesAfterReprompt:(long long)arg1 source:(long long)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007d904
- (id)initWithPropagationDelay:(unsigned long long)arg1;	// IMP=0x001000000007d7f7

@end

