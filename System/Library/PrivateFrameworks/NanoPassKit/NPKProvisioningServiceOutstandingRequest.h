//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKProvisioningServiceOutstandingRequest : NSObject
{
    NSString *_messageIdentifier;	// 8 = 0x8
    id _completionHandler;	// 16 = 0x10
    CDUnknownBlockType _errorHandler;	// 24 = 0x18
    CDUnknownBlockType _timeoutHandler;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_timeoutQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b67bc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timeoutQueue; // @synthesize timeoutQueue=_timeoutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
- (void)invalidateCleanupTimer;	// IMP=0x00000000000b66ec
- (void)setOrResetCleanupTimer;	// IMP=0x00000000000b64e2

@end

