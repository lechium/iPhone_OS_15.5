//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol ADDeviceContextConnectionDelegate, OS_dispatch_queue;

@interface ADDeviceContextConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    id <ADDeviceContextConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _isInvalid;	// 32 = 0x20
    _Bool _isUpdatingLocalDeviceContext;	// 33 = 0x21
    CDUnknownBlockType _updateLocalDeviceContextReply;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000efb8f
- (void)_endUpdateLocalDeviceContext;	// IMP=0x00100000000efa74
- (void)_beginUpdateLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ef987
- (id)_remoteServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ef84d
- (void)_invalidate;	// IMP=0x00100000000ef746
- (void)_clearXPCConnection;	// IMP=0x00100000000ef667
- (void)_handleXPCConnectionInterruption;	// IMP=0x00100000000ef5a8
- (void)_handleXPCConnectionInvalidation;	// IMP=0x00100000000ef4e9
- (void)invalidate;	// IMP=0x00100000000ef488
- (oneway void)donateSerializedContextMapByPrivacyClass:(id)arg1 withMetadataMap:(id)arg2 forType:(id)arg3 pushToRemote:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ef37a
- (oneway void)endUpdateLocalDeviceContext;	// IMP=0x00100000000ef368
- (oneway void)beginUpdateLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ef356
- (oneway void)getLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ef06b
- (void)updateLocalDeviceContext:(id)arg1;	// IMP=0x00100000000eedd2
- (id)initWithQueue:(id)arg1 xpcConnection:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000000eea15
- (void)dealloc;	// IMP=0x00100000000ee960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

