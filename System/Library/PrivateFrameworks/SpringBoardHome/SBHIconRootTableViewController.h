//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <SpringBoardHome/SBHIconRootViewProviding-Protocol.h>

@class NSSet, NSString, SBFolder, SBFolderIconImageCache, SBHIconImageCache, UIView, UIViewController, _UILegibilitySettings;

@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding>
{
    SBFolder *_folder;	// 8 = 0x8
    _UILegibilitySettings *_legibilitySettings;	// 16 = 0x10
    SBFolderIconImageCache *_folderIconImageCache;	// 24 = 0x18
    SBHIconImageCache *_iconImageCache;	// 32 = 0x20
    unsigned long long _contentVisibility;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000095293
@property(nonatomic) unsigned long long contentVisibility; // @synthesize contentVisibility=_contentVisibility;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000095133
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000094fa1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000094f2d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000094ee9
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094ee3
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;	// IMP=0x0000000000094edb
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x0000000000094ed3
- (_Bool)isDisplayingIconView:(id)arg1;	// IMP=0x0000000000094ecb
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x0000000000094ec3
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;	// IMP=0x0000000000094ebb
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;	// IMP=0x0000000000094eb3
- (id)firstIconViewForIcon:(id)arg1;	// IMP=0x0000000000094eab
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x0000000000094ea3
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;	// IMP=0x0000000000094e9b
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;	// IMP=0x0000000000094e59
- (void)setIdleText:(id)arg1;	// IMP=0x0000000000094e53
- (void)revealIcon:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094d19
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094c2f
@property(nonatomic) long long currentPageIndex;
- (void)noteUserIsInteractingWithIcons;	// IMP=0x0000000000094b86
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000094b80
- (void)cancelScrolling;	// IMP=0x0000000000094b43
@property(readonly, nonatomic, getter=isScrollTracking) _Bool scrollTracking;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000094ac8
@property(nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic) UIViewController *deepestFolderController;
@property(readonly, nonatomic) UIView *contentView;
- (void)viewDidLoad;	// IMP=0x0000000000094927

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
