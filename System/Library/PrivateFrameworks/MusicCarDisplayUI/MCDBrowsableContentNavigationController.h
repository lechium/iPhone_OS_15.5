//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

#import <MusicCarDisplayUI/MCDPCContainerDelegate-Protocol.h>
#import <MusicCarDisplayUI/UITabBarControllerDelegate-Protocol.h>

@class CPUINowPlayingButtonWrapperView, MCDPCContainer, MCDPCModel, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MCDBrowsableContentNavigationController : UITabBarController <UITabBarControllerDelegate, MCDPCContainerDelegate>
{
    _Bool _hasCarScreen;	// 8 = 0x8
    _Bool _didFinishInitialLoad;	// 9 = 0x9
    _Bool _didFinishInitialViewAppear;	// 10 = 0xa
    _Bool _visible;	// 11 = 0xb
    _Bool _hasInvalidatedDummyTabs;	// 12 = 0xc
    MCDPCContainer *_container;	// 16 = 0x10
    UITabBarController *_tabBarController;	// 24 = 0x18
    MCDPCModel *_model;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    CPUINowPlayingButtonWrapperView *_nowPlayingButtonView;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001f91a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool hasInvalidatedDummyTabs; // @synthesize hasInvalidatedDummyTabs=_hasInvalidatedDummyTabs;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool didFinishInitialViewAppear; // @synthesize didFinishInitialViewAppear=_didFinishInitialViewAppear;
@property(nonatomic) _Bool didFinishInitialLoad; // @synthesize didFinishInitialLoad=_didFinishInitialLoad;
@property(nonatomic) _Bool hasCarScreen; // @synthesize hasCarScreen=_hasCarScreen;
@property(retain, nonatomic) CPUINowPlayingButtonWrapperView *nowPlayingButtonView; // @synthesize nowPlayingButtonView=_nowPlayingButtonView;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) MCDPCModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) MCDPCContainer *container; // @synthesize container=_container;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001f6c9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001f686
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001f532
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001f3b9
- (void)updateTitleAndTabBarItemsAtIndexes:(id)arg1;	// IMP=0x000000000001f066
- (id)_hostTabAtIndex:(unsigned long long)arg1 dummyTab:(_Bool)arg2;	// IMP=0x000000000001ec80
- (id)_tabBarItemForViewController:(id)arg1 fromItem:(id)arg2;	// IMP=0x000000000001e772
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x000000000001e686
- (void)invalidateAndReloadTabsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e354
- (void)_loadAllHostTabs;	// IMP=0x000000000001dca0
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;	// IMP=0x000000000001d79a
- (void)_nowPlayingButtonTapped:(id)arg1;	// IMP=0x000000000001d649
- (void)_updateNowPlayingButtonVisibility;	// IMP=0x000000000001d20b
- (void)_nowPlayingDidChange:(id)arg1;	// IMP=0x000000000001d195
- (void)_appRegisteredForContent:(id)arg1;	// IMP=0x000000000001cda2
- (id)initWithBundleID:(id)arg1 model:(id)arg2;	// IMP=0x000000000001cbfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

