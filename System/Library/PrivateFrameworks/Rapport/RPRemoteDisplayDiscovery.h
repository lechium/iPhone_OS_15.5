//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPRemoteDisplayXPCClientInterface-Protocol.h>

@class NSArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface>
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_discoveredDevices;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    NSXPCConnection *_xpcCnx;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _interruptionHandler;	// 48 = 0x30
    CDUnknownBlockType _invalidationHandler;	// 56 = 0x38
    unsigned long long _controlFlags;	// 64 = 0x40
    CDUnknownBlockType _deviceFoundHandler;	// 72 = 0x48
    CDUnknownBlockType _deviceLostHandler;	// 80 = 0x50
    CDUnknownBlockType _deviceChangedHandler;	// 88 = 0x58
    unsigned long long _errorFlags;	// 96 = 0x60
    CDUnknownBlockType _errorFlagsChangedHandler;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004d53c
- (void).cxx_destruct;	// IMP=0x000000000004e614
@property(copy, nonatomic) CDUnknownBlockType errorFlagsChangedHandler; // @synthesize errorFlagsChangedHandler=_errorFlagsChangedHandler;
@property(nonatomic) unsigned long long errorFlags; // @synthesize errorFlags=_errorFlags;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)shouldReportDevice:(id)arg1;	// IMP=0x000000000004e533
- (void)_lostAllDevices;	// IMP=0x000000000004e31e
- (void)remoteDisplayUpdateErrorFlags:(unsigned long long)arg1;	// IMP=0x000000000004e2d5
- (void)remoteDisplayChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x000000000004e20b
- (void)remoteDisplayLostDevice:(id)arg1;	// IMP=0x000000000004e151
- (void)remoteDisplayFoundDevice:(id)arg1;	// IMP=0x000000000004e073
@property(readonly, copy, nonatomic) NSArray *discoveredDevices;
- (void)_invalidated;	// IMP=0x000000000004df1e
- (void)invalidate;	// IMP=0x000000000004de41
- (void)_interrupted;	// IMP=0x000000000004dda5
- (void)_ensureXPCStarted;	// IMP=0x000000000004db94
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;	// IMP=0x000000000004d7a9
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d6f7
- (id)description;	// IMP=0x000000000004d6bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004d691
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d5bc
- (id)init;	// IMP=0x000000000004d544

@end

