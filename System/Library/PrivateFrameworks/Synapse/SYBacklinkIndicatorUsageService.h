//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Synapse/NSXPCListenerDelegate-Protocol.h>
#import <Synapse/SYBacklinkIndicatorUsageProtocol-Protocol.h>

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface SYBacklinkIndicatorUsageService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorUsageProtocol>
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000001fb6d
+ (void)beginObservingUsage;	// IMP=0x000000000001fb52
+ (id)_listenerEndpoint;	// IMP=0x000000000001fff3
+ (void)set_testingDelegate:(id)arg1;	// IMP=0x000000000001ffdf
+ (id)_testingDelegate;	// IMP=0x000000000001ffce
- (void).cxx_destruct;	// IMP=0x000000000001ffbe
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (oneway void)didDismissBacklinkItemWithIdentifier:(id)arg1;	// IMP=0x000000000001ff1e
- (oneway void)didActivateBacklinkItemWithIdentifier:(id)arg1;	// IMP=0x000000000001fe99
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000001fd5b
- (void)dealloc;	// IMP=0x000000000001fd01
- (id)init;	// IMP=0x000000000001fbc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

