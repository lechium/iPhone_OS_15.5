//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener, XPCServiceCatalog;
@protocol OS_dispatch_queue;

@interface XPCServiceBroker : NSObject
{
    NSMutableSet *_activeClients;	// 8 = 0x8
    XPCServiceCatalog *_catalog;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

+ (id)newServerWithCatalog:(id)arg1 forMachServiceName:(id)arg2;	// IMP=0x002000000008e344
- (void).cxx_destruct;	// IMP=0x002000000008eb9b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000008e898
- (id)activeClientWithProcessInfo:(id)arg1;	// IMP=0x001000000008e836
- (id)activeClientWithBundleID:(id)arg1;	// IMP=0x001000000008e520
- (id)initWithCatalog:(id)arg1 andListener:(id)arg2;	// IMP=0x001000000008e3e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
