//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSXPCListenerDelegate-Protocol.h>
#import <UIKitCore/_DUIClientSystemApp-Protocol.h>

@class NSMapTable, NSSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, UIDraggingSystemMonitorDelegate;

@interface UIDraggingSystemMonitor : NSObject <NSXPCListenerDelegate, _DUIClientSystemApp>
{
    NSXPCListener *_systemListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    NSMapTable *_sessionsBySessionInfo;	// 24 = 0x18
    id <UIDraggingSystemMonitorDelegate> _delegate;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000010df0ad
+ (id)new;	// IMP=0x00000000010df0a5
- (void).cxx_destruct;	// IMP=0x00000000010dfb04
@property(nonatomic) __weak id <UIDraggingSystemMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)dragDidEndWithSystemSession:(id)arg1;	// IMP=0x00000000010df9a1
- (oneway void)dragDidBeginWithSystemSession:(id)arg1 info:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000010df67a
- (void)xpcQueue_acceptNewConnection:(id)arg1;	// IMP=0x00000000010df477
- (_Bool)xpcQueue_shouldAcceptNewConnection:(id)arg1;	// IMP=0x00000000010df3d7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000010df3c2
- (id)sessionForDropSession:(id)arg1;	// IMP=0x00000000010df1ca
@property(readonly, nonatomic) NSSet *sessions;
- (id)init;	// IMP=0x00000000010df097
- (id)_init;	// IMP=0x00000000010def34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

