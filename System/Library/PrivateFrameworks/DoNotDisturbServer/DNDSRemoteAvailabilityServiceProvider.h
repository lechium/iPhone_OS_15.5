//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/BSServiceConnectionListenerDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDRemoteAvailabilityServiceServerProtocol-Protocol.h>

@class BSServiceConnectionListener, DNDSClientDetailsProvider, NSMutableSet, NSString;
@protocol DNDSRemoteAvailabilityServiceProviderDelegate;

@interface DNDSRemoteAvailabilityServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteAvailabilityServiceServerProtocol>
{
    BSServiceConnectionListener *_requestListener;	// 8 = 0x8
    DNDSClientDetailsProvider *_clientDetailsProvider;	// 16 = 0x10
    struct os_unfair_lock_s _accessLock;	// 24 = 0x18
    NSMutableSet *_connections;	// 32 = 0x20
    id <DNDSRemoteAvailabilityServiceProviderDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000152c8
@property(nonatomic) __weak id <DNDSRemoteAvailabilityServiceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000015245
- (void)_addConnection:(id)arg1;	// IMP=0x00000000000151e9
- (void)_handleClientConnectionInvalidated:(id)arg1;	// IMP=0x000000000001513e
- (void)_handleClientConnectionInterrupted:(id)arg1;	// IMP=0x0000000000015093
- (void)getIsLocalUserAvailableWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000147e6
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000143a2
- (void)invalidate;	// IMP=0x000000000001438c
- (void)resume;	// IMP=0x000000000001434c
- (void)dealloc;	// IMP=0x000000000001430e
- (id)initWithClientDetailsProvider:(id)arg1;	// IMP=0x0000000000014143

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

