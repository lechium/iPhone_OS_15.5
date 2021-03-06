//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BannerKit/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSServiceConnectionListener, NSHashTable, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface BNBannerHostMonitorListener : NSObject <BSServiceConnectionListenerDelegate>
{
    NSSet *_authorizedBundleIDs;	// 8 = 0x8
    BSServiceConnectionListener *_connectionListener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableArray *_connections;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x000000000002594e
- (void).cxx_destruct;	// IMP=0x0000000000026b1d
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000269cf
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000026838
- (void)_addConnection:(id)arg1;	// IMP=0x0000000000026686
- (_Bool)_isConnectingProcessAuthorized:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000264b5
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000025ed1
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000025e58
- (void)addObserver:(id)arg1;	// IMP=0x0000000000025dac
@property(readonly, nonatomic, getter=isBannerHostAvailable) _Bool bannerHostAvailable;
@property(readonly, copy) NSString *description;
- (id)initWithServiceDomain:(id)arg1 authorizedBundleIDs:(id)arg2;	// IMP=0x0000000000025976

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

