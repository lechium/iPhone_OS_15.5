//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/_BKSHIDEventRouterDelegate-Protocol.h>

@class BKSHIDEventDeliveryManager, NSArray, NSMutableArray, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKSHIDEventRouterManager : NSObject <_BKSHIDEventRouterDelegate, BSDescriptionProviding>
{
    BKSHIDEventDeliveryManager *_deliveryManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableArray *_queue_routers;	// 24 = 0x18
    _Bool _queue_needsFlush;	// 32 = 0x20
    id <BSInvalidatable> _queue_dispatchingRulesAssertion;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000000001c948
- (void).cxx_destruct;	// IMP=0x000000000001c161
- (void)_queue_routerDidChange:(id)arg1;	// IMP=0x000000000001bf6a
- (id)_queue_succinctDescriptionBuilder;	// IMP=0x000000000001befc
- (void)_queue_flush;	// IMP=0x000000000001be8a
- (id)_targetForDestination:(long long)arg1;	// IMP=0x000000000001be42
@property(retain, nonatomic) NSArray *eventRouters; // @dynamic eventRouters;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001bc1f
- (id)succinctDescription;	// IMP=0x000000000001bbcf
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001bb0d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001babd
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000001b969
- (id)_initWithDeliveryManager:(id)arg1;	// IMP=0x000000000001b761
- (id)init;	// IMP=0x000000000001b633

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
