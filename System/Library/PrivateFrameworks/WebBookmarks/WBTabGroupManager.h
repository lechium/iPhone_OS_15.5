//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPointerArray, WBSavedStateManager;
@protocol OS_dispatch_queue, WBTabProvider;

@interface WBTabGroupManager : NSObject
{
    NSMutableArray *_groups;	// 8 = 0x8
    NSMutableArray *_tabGroupStatesGenerations;	// 16 = 0x10
    NSMutableArray *_tabStatesGenerations;	// 24 = 0x18
    NSMutableArray *_closedTabUUIDsGenerations;	// 32 = 0x20
    NSPointerArray *_observers;	// 40 = 0x28
    WBSavedStateManager *_savedStateManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_tabProviderAccessQueue;	// 56 = 0x38
    id <WBTabProvider> _tabProvider;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000064bde
@property(readonly, nonatomic) id <WBTabProvider> tabProvider; // @synthesize tabProvider=_tabProvider;
- (void)notifyDidUpdateTab:(id)arg1 userDriven:(_Bool)arg2;	// IMP=0x0000000000064a44
- (void)notifyDidUpdateTabsInTabGroup:(id)arg1;	// IMP=0x00000000000648c9
- (void)notifyDidUpdateTabGroup:(id)arg1;	// IMP=0x000000000006474e
- (void)notifyDidRemoveTabGroup:(id)arg1;	// IMP=0x00000000000645d3
- (void)notifyDidUpdateTabGroups;	// IMP=0x000000000006447f
- (void)notifyDidFinishSetup;	// IMP=0x000000000006432b
- (void)removeTabGroupObserver:(id)arg1;	// IMP=0x0000000000064280
- (void)addTabGroupObserver:(id)arg1;	// IMP=0x000000000006424d
- (void)_compareInMemoryTabGroups:(id)arg1 knownTabStates:(id)arg2 withTabGroups:(id)arg3;	// IMP=0x000000000006393a
- (void)_reloadTabGroupsFromDatabase;	// IMP=0x0000000000063334
- (void)_tabGroupSyncDidFinish:(id)arg1;	// IMP=0x00000000000632a4
- (void)updateTabsInTabGroup:(id)arg1;	// IMP=0x0000000000062fab
- (void)saveTab:(id)arg1;	// IMP=0x0000000000062f1d
- (void)saveTabGroup:(id)arg1;	// IMP=0x0000000000062ec7
- (void)removeTabGroup:(id)arg1;	// IMP=0x0000000000062d14
- (void)moveTabGroup:(id)arg1 afterTabGroup:(id)arg2;	// IMP=0x0000000000062c61
- (void)insertTabGroup:(id)arg1 afterTabGroup:(id)arg2;	// IMP=0x0000000000062ade
@property(readonly, copy, nonatomic) NSArray *tabGroups;
- (void)_addKnownStateForTab:(id)arg1;	// IMP=0x00000000000628e7
- (void)_didUpdateTabGroups:(id)arg1;	// IMP=0x00000000000622a8
- (void)_readTabGroups;	// IMP=0x0000000000062198
- (id)initWithTabProvider:(id)arg1 savedStateManager:(id)arg2;	// IMP=0x0000000000061e79

@end

