//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener, SNSystemServiceResourceCoordinator;

__attribute__((visibility("hidden")))
@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    SNSystemServiceResourceCoordinator *_coordinator;	// 16 = 0x10
}

+ (id)launchWithResourceCoordinator:(id)arg1 onXPCListener:(id)arg2;	// IMP=0x0000000000016a42
+ (id)launchAsMachServiceWithName:(id)arg1;	// IMP=0x00000000000169a0
+ (id)launchDefaultServer;	// IMP=0x0000000000016987
- (void).cxx_destruct;	// IMP=0x0000000000016acc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000168dc
- (id)connectLocally;	// IMP=0x0000000000016865
- (void)start;	// IMP=0x000000000001682f
- (id)initWithResourceCoordinator:(id)arg1 onListener:(id)arg2;	// IMP=0x0000000000016796
- (id)init;	// IMP=0x000000000001674d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

