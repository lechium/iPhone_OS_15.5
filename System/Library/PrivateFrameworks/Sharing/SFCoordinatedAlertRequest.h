//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    _Bool _started;	// 10 = 0xa
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 16 = 0x10
    NSXPCConnection *_xpcCnx;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
    double _timeout;	// 56 = 0x38
    long long _type;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000985dd
- (void).cxx_destruct;	// IMP=0x00000000000993a8
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_timeoutFired;	// IMP=0x0000000000099246
- (void)_invalidated;	// IMP=0x0000000000098fe3
- (void)_interrupted;	// IMP=0x0000000000098f8d
- (void)_ensureXPCStarted;	// IMP=0x0000000000098d93
- (void)_start;	// IMP=0x00000000000989d9
- (void)start;	// IMP=0x0000000000098978
- (void)_invalidate;	// IMP=0x000000000009887d
- (void)invalidate;	// IMP=0x000000000009881c
- (void)dealloc;	// IMP=0x000000000009878b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000098761
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009863c
- (id)init;	// IMP=0x00000000000985e5

@end
