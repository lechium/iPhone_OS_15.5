//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WBStateProvider-Protocol.h>

@class NSArray, NSString, WBBrowserState, WBTabCollection;

@interface WBReadonlyTabCollection : NSObject <WBStateProvider>
{
    WBTabCollection *_collection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000048d6f
@property(nonatomic) unsigned long long maximumTabsPerGroup;
- (id)tabWithUUID:(id)arg1;	// IMP=0x0000000000048d2d
- (id)tabGroupWithUUID:(id)arg1;	// IMP=0x0000000000048d17
- (id)tabsForTabGroup:(id)arg1;	// IMP=0x0000000000048d01
@property(readonly, copy, nonatomic) NSArray *tabGroups;
@property(readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property(readonly, nonatomic) int privatePinnedTabsFolderID;
@property(readonly, nonatomic) int pinnedTabsFolderID;
- (id)windowStateWithUUID:(id)arg1;	// IMP=0x0000000000048c5e
- (id)windowWithUUID:(id)arg1;	// IMP=0x0000000000048c48
@property(readonly, copy, nonatomic) NSArray *windows;
@property(readonly, nonatomic) int windowsFolderSpecialID;
@property(readonly, copy, nonatomic) NSArray *windowStates;
@property(readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property(readonly, nonatomic) WBBrowserState *browserState;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
@property(readonly, nonatomic, getter=hasCompletedMigration) _Bool completedMigration;
- (id)init;	// IMP=0x0000000000048afa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

