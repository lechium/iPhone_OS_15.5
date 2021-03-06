//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, STTransportDelegate;

@interface STIDSTransport : NSObject
{
    NSObject *_cachedIDSAccountIsActiveLock;	// 8 = 0x8
    _Bool _invalid;	// 16 = 0x10
    _Bool _resumed;	// 17 = 0x11
    _Bool _cachedIDSAccountIsActive;	// 18 = 0x12
    id <STTransportDelegate> _delegate;	// 24 = 0x18
    IDSService *_service;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serviceQueue;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSMutableSet *_cachedIDSDestinations;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004af2f
@property(retain, nonatomic) NSMutableSet *cachedIDSDestinations; // @synthesize cachedIDSDestinations=_cachedIDSDestinations;
@property(nonatomic) _Bool cachedIDSAccountIsActive; // @synthesize cachedIDSAccountIsActive=_cachedIDSAccountIsActive;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic, getter=isResumed) _Bool resumed; // @synthesize resumed=_resumed;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) __weak id <STTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x001000000004abd2
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000004a98a
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000004a7d2
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x001000000004a65f
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x001000000004a4ac
- (void)resolveTransportDestinations:(id)arg1 toLocal:(_Bool)arg2 persistenceController:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004a1bb
- (void)_receivePayloadData:(id)arg1 fromID:(id)arg2 serverReceivedTime:(id)arg3;	// IMP=0x0010000000049f31
- (_Bool)isPayloadWithIdentifierValid:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000049eb4
- (void)sendPayload:(id)arg1;	// IMP=0x0010000000049347
- (void)invalidate;	// IMP=0x001000000004921b
- (void)resume;	// IMP=0x0010000000048f04
- (void)dealloc;	// IMP=0x0010000000048e52
- (id)init;	// IMP=0x0010000000048d1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

