//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBRecentAppLayoutsDelegate-Protocol.h>

@class NSString, SBIconController, SBRecentAppLayouts;
@protocol SBAppSwitcherModelDelegate;

@interface SBAppSwitcherModel : NSObject <SBRecentAppLayoutsDelegate>
{
    SBIconController *_iconController;	// 8 = 0x8
    SBRecentAppLayouts *_recents;	// 16 = 0x10
    id _recentsChangedNotificationObserver;	// 24 = 0x18
    id <SBAppSwitcherModelDelegate> _delegate;	// 32 = 0x20
}

+ (id)appSwitcherHeaderIconImageDescriptorName;	// IMP=0x00000000003a1951
- (void).cxx_destruct;	// IMP=0x00000000003a2c1e
@property(nonatomic) __weak id <SBAppSwitcherModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_recentAppLayoutsController;	// IMP=0x00000000003a2be9
- (void)recentAppLayouts:(id)arg1 didRemoveAppLayoutForFallingOffList:(id)arg2;	// IMP=0x00000000003a2b8d
- (long long)_adjustedIndexForVisibleAppLayoutAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003a2a8d
- (unsigned long long)indexOfDisplayItem:(id)arg1 visible:(_Bool)arg2;	// IMP=0x00000000003a291d
- (void)modifyWithDropContext:(id)arg1;	// IMP=0x00000000003a1b86
- (id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(_Bool)arg2;	// IMP=0x00000000003a1b70
- (id)appLayoutsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(_Bool)arg2;	// IMP=0x00000000003a1b5a
- (id)appLayoutsIncludingHiddenAppLayouts:(_Bool)arg1;	// IMP=0x00000000003a1b44
- (void)_warmUpIconsForAppLayout:(id)arg1;	// IMP=0x0000000000080ffa
- (void)_warmUpIconsForRecentAppLayouts:(id)arg1;	// IMP=0x00000000003a1a01
- (void)hide:(id)arg1;	// IMP=0x00000000003a193b
- (void)removeAppLayouts:(id)arg1;	// IMP=0x00000000003a1925
- (void)remove:(id)arg1;	// IMP=0x00000000003a190f
- (void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2;	// IMP=0x00000000003a18f9
- (void)addAppLayout:(id)arg1 afterAppLayout:(id)arg2;	// IMP=0x00000000003a18e3
- (void)addAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000003a18cd
- (void)addToFront:(id)arg1;	// IMP=0x0000000000047bfb
- (void)dealloc;	// IMP=0x00000000003a1855
- (id)init;	// IMP=0x00000000003a17b3
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recents:(id)arg3;	// IMP=0x00000000003a13c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
