//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSUniversalControlServerToClientInterface-Protocol.h>

@class BSCompoundAssertion, BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface SBSUniversalControlService : NSObject <SBSUniversalControlServerToClientInterface>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BSCompoundAssertion *_disableKeyboardFocusAssertion;	// 24 = 0x18
    BSCompoundAssertion *_screenEdgeOwnershipAssertion;	// 32 = 0x20
    BSServiceConnection *_serverConnection;	// 40 = 0x28
}

+ (id)new;	// IMP=0x000000000003a446
+ (id)sharedInstance;	// IMP=0x000000000003a132
- (void).cxx_destruct;	// IMP=0x000000000003b00c
- (id)acquireScreenEdgeOwnershipForPointerEvents:(unsigned long long)arg1 forReason:(id)arg2;	// IMP=0x000000000003ab12
- (id)disableKeyboardFocusOnCurrentDeviceForReason:(id)arg1;	// IMP=0x000000000003aafc
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000003a574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

