//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSInvalidatable-Protocol.h>
#import <CarPlayServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlayServices/CRSAppHistoryClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSHashTable, NSString;
@protocol CRSAppHistoryServiceDelegate, OS_dispatch_queue;

@interface CRSAppHistoryService : NSObject <BSServiceConnectionListenerDelegate, CRSAppHistoryClientToServerInterface, BSInvalidatable>
{
    id <CRSAppHistoryServiceDelegate> _delegate;	// 8 = 0x8
    BSServiceConnectionListener *_listener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    NSHashTable *_connections;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000009438
@property(retain, nonatomic) NSHashTable *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <CRSAppHistoryServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_connectionQueue_removeConnection:(id)arg1;	// IMP=0x000000000000934e
- (void)_connectionQueue_addConnection:(id)arg1;	// IMP=0x00000000000092dc
- (void)setSessionFeatureKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000090fa
- (void)fetchSessionFeatureKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008f8d
- (void)fetchSessionEchoContextStatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008e20
- (void)fetchSessionUIContextStatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008cb3
- (void)fetchUIContextStatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008b46
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000086aa
- (void)invalidate;	// IMP=0x0000000000008694
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000008403

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

