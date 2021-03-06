//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBHLegibility-Protocol.h>
#import <SpringBoardHome/SBHLibraryCategoryObserver-Protocol.h>
#import <SpringBoardHome/SBIconViewCustomImageViewControlling-Protocol.h>
#import <SpringBoardHome/SBIconViewQuerying-Protocol.h>

@class NSArray, NSString, SBFolder, SBFolderIconImageCache, SBHIconImageCache, SBHLibraryCategory, SBHLibraryCategoryPodBackgroundView, SBIcon, SBIconListView, UIView, _UILegibilitySettings;
@protocol BSInvalidatable, SBIconListLayoutProvider, SBIconViewProviding, SBLeafIconDataSource;

@interface SBHLibraryCategoryIconViewController : UIViewController <SBFolderObserver, SBHLibraryCategoryObserver, SBIconViewQuerying, SBIconViewCustomImageViewControlling, SBHLegibility>
{
    SBHLibraryCategoryPodBackgroundView *_backgroundView;	// 8 = 0x8
    SBIconListView *_iconListView;	// 16 = 0x10
    SBHLibraryCategory *_category;	// 24 = 0x18
    id <BSInvalidatable> _preventFolderUpdateAssertion;	// 32 = 0x20
    _Bool _editing;	// 40 = 0x28
    _Bool _showsSquareCorners;	// 41 = 0x29
    unsigned long long _pauseReasons;	// 48 = 0x30
    SBFolder *_folder;	// 56 = 0x38
    NSString *_location;	// 64 = 0x40
    id <SBIconViewProviding> _iconViewProvider;	// 72 = 0x48
    id <SBIconListLayoutProvider> _listLayoutProvider;	// 80 = 0x50
    SBHIconImageCache *_iconImageCache;	// 88 = 0x58
    SBFolderIconImageCache *_folderIconImageCache;	// 96 = 0x60
    struct SBIconImageInfo _iconImageInfo;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000028a588
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(readonly, nonatomic) SBHLibraryCategory *category; // @synthesize category=_category;
@property(nonatomic) _Bool showsSquareCorners; // @synthesize showsSquareCorners=_showsSquareCorners;
@property(nonatomic) unsigned long long pauseReasons; // @synthesize pauseReasons=_pauseReasons;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property(readonly, nonatomic) double continuousCornerRadius;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (id)sourceView;	// IMP=0x000000000028a3b8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000028a319
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000028a1b4
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000028a07b
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;	// IMP=0x0000000000289fb7
- (_Bool)isDisplayingIconView:(id)arg1;	// IMP=0x0000000000289f9a
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x0000000000289f7d
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x0000000000289ec1
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;	// IMP=0x0000000000289e05
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;	// IMP=0x0000000000289cfe
- (id)firstIconViewForIcon:(id)arg1;	// IMP=0x0000000000289ce1
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x0000000000289c0f
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;	// IMP=0x0000000000289b3d
- (_Bool)isPresentingIconLocation:(id)arg1;	// IMP=0x0000000000289b1a
- (id)presentedIconLocations;	// IMP=0x0000000000289af3
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;	// IMP=0x0000000000289a1a
- (void)folder:(id)arg1 didAddList:(id)arg2;	// IMP=0x000000000028993a
- (void)categoryDidUpdate:(id)arg1;	// IMP=0x0000000000289902
- (void)categoryWillUpdate:(id)arg1;	// IMP=0x0000000000289737
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) SBIconListView *iconListView;
- (void)updateFolder:(id)arg1 location:(id)arg2;	// IMP=0x0000000000289545
- (void)updateCategory:(id)arg1 location:(id)arg2;	// IMP=0x0000000000289441
- (void)viewDidLoad;	// IMP=0x0000000000289092

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property(nonatomic) struct SBIconApproximateLayoutPosition approximateLayoutPosition;
@property(nonatomic) _Bool automaticallyUpdatesVisiblySettled;
@property(copy, nonatomic) CDUnknownBlockType backgroundViewConfigurator;
@property(copy, nonatomic) CDUnknownBlockType backgroundViewProvider;
@property(nonatomic) double brightness;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDropping) _Bool dropping;
@property(nonatomic) _Bool forcesEdgeAntialiasing;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBIcon *icon;
@property(nonatomic) unsigned long long imageViewAlignment;
@property(readonly, nonatomic) struct UIEdgeInsets minimumPreferredEdgeInsetsForContextMenu;
@property(nonatomic, getter=isOverlapping) _Bool overlapping;
@property(nonatomic) unsigned long long presentationMode;
@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu;
@property(nonatomic) _Bool showsSnapshotWhenDeactivated;
@property(readonly, nonatomic) UIView *snapshotView;
@property(readonly, nonatomic) struct CGPoint snapshotViewCenter;
@property(readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property(readonly) Class superclass;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic) unsigned long long userVisibilityStatus;
@property(readonly, nonatomic) id <SBLeafIconDataSource> visiblyActiveDataSource;
@property(readonly, nonatomic) _Bool wantsCaptureOnlyBackgroundView;
@property(nonatomic) _Bool wantsEditingDisplayStyle;
@property(readonly, nonatomic) _Bool wantsLabelHidden;

@end

