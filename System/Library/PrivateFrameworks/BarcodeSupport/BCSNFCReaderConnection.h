//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSNotificationServiceConnection;
@protocol OS_dispatch_queue;

@interface BCSNFCReaderConnection : NSObject
{
    BCSNotificationServiceConnection *_notificationServiceConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b220
- (void)disconnect;	// IMP=0x000000000000b206
- (void)stopReaderWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b1f0
- (void)startReaderWithDelegate:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 interruptionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b0f8
- (long long)_hardwareSupportState;	// IMP=0x000000000000b0ed
- (void)checkHardwareSupportStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000afb5
- (_Bool)_enableNFC;	// IMP=0x000000000000afad
- (void)enableNFCWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ae75
- (_Bool)_isNFCEnabled;	// IMP=0x000000000000ae6d
- (void)checkNFCEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ad1e
- (id)init;	// IMP=0x000000000000ac8b

@end
