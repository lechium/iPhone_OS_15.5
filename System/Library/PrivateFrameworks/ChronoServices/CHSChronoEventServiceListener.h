//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChronoServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <ChronoServices/CHSChronoEventServiceServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSMutableArray, NSString;
@protocol CHSChronoEventServiceListenerDelegate, OS_dispatch_queue;

@interface CHSChronoEventServiceListener : NSObject <BSServiceConnectionListenerDelegate, CHSChronoEventServiceServerInterface>
{
    BSServiceConnectionListener *_connectionListener;	// 8 = 0x8
    NSMutableArray *_connections;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 32 = 0x20
    id <CHSChronoEventServiceListenerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000014307
@property(nonatomic) __weak id <CHSChronoEventServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeConnection:(id)arg1;	// IMP=0x000000000001422a
- (void)_addConnection:(id)arg1;	// IMP=0x0000000000014169
- (_Bool)_isConnectingProcessAuthorized:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000140d8
- (void)activate;	// IMP=0x0000000000014002
- (oneway void)handleOpenEventWithUserActivityData:(id)arg1;	// IMP=0x0000000000013e4d
- (oneway void)handleOpenEventWithURL:(id)arg1;	// IMP=0x0000000000013c5e
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000001364f
@property(readonly, copy) NSString *description;
- (id)initWithServiceDomain:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000131a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

