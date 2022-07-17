//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSXPCListenerDelegate-Protocol.h>
#import <PassKitCore/PKUsageNotificationServerExportedInterface-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;

@interface PKUsageNotificationServer : NSObject <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableSet *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001fe8c5
- (void)serviceSuspended;	// IMP=0x00000000001fe8bf
- (void)serviceResumed;	// IMP=0x00000000001fe8b9
- (void)notifyPaymentPassUsedWithTransactionInfo:(id)arg1;	// IMP=0x00000000001fe55c
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;	// IMP=0x00000000001fe1b6
- (void)initializeUsageNotificationServer;	// IMP=0x00000000001fe1b0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000001fde48
- (void)dealloc;	// IMP=0x00000000001fddee
- (id)init;	// IMP=0x00000000001fdcfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
