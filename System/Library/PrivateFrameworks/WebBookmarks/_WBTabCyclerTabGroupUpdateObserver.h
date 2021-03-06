//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WBTabGroupManagerObserver-Protocol.h>

@class NSString, NSTimer, WBTabGroupManager;

__attribute__((visibility("hidden")))
@interface _WBTabCyclerTabGroupUpdateObserver : NSObject <WBTabGroupManagerObserver>
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    WBTabGroupManager *_tabGroupManager;	// 16 = 0x10
    NSTimer *_timeoutTimer;	// 24 = 0x18
    _Bool _waitForTabGroups;	// 32 = 0x20
}

+ (id)observeTabGroupManager:(id)arg1 waitForTabGroups:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000610f0
- (void).cxx_destruct;	// IMP=0x000000000006149c
- (void)tabGroupManagerDidUpdateTabGroups:(id)arg1;	// IMP=0x000000000006136a
- (void)_timeout;	// IMP=0x00000000000612f2
- (void)startObserving;	// IMP=0x0000000000061240
- (id)initWithTabGroupManager:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061183

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

