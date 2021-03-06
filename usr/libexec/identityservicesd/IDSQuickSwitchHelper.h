//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IDSQuickSwitchHelper : NSObject
{
    _Bool _isQuickSwitchingToAnotherDevice;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _isQuickSwitchingMutex;	// 16 = 0x10
}

+ (MISSING_TYPE *)sharedInstance;	// IMP=0x004000000013dd20
- (void)_resetCommunicationStateBeforeQuickSwitchDeactivatePairedDevices:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x002000000013ef10
- (void)resetCommunicationStateBeforeQuickSwitchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000013eeb0
- (void)initiateQuickSwitchToDeviceWithCBUUID:(id)arg1 force:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000013e050
- (void)_setIsQuickSwitchingToAnotherDevice:(_Bool)arg1;	// IMP=0x001000000013df20
- (_Bool)isQuickSwitchingToAnotherDevice;	// IMP=0x001000000013ded0
- (void)dealloc;	// IMP=0x001000000013de80
- (id)init;	// IMP=0x001000000013dde0

@end

