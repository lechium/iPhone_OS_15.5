//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener, WBSCyclerServiceProxy;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    WBSCyclerServiceProxy *_cyclerProxy;	// 16 = 0x10
    id <WBSCyclerTestTarget> _testTarget;	// 24 = 0x18
}

+ (_Bool)isTabCyclerEnabled;	// IMP=0x000000000006e06e
+ (_Bool)isCyclerEnabled;	// IMP=0x000000000006dff2
- (void).cxx_destruct;	// IMP=0x000000000006e482
@property(readonly, nonatomic) id <WBSCyclerTestTarget> testTarget; // @synthesize testTarget=_testTarget;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000006e30b
- (void)connect;	// IMP=0x000000000006e176
- (id)initWithTestTarget:(id)arg1;	// IMP=0x000000000006e0f8
- (id)init;	// IMP=0x000000000006e0ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

