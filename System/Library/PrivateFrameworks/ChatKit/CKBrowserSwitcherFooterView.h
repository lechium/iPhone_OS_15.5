//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CKAppStripLayout, NSString, NSTimer, UICollectionView, UILongPressGestureRecognizer;
@protocol CKAppStripPredictiveTypeTransition, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherFooterViewDelegate;

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    CKAppStripLayout *_appStripLayout;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UIView *_predictiveTypeSnapshotView;	// 24 = 0x18
    UIView *_visibleView;	// 32 = 0x20
    id <CKAppStripPredictiveTypeTransition> _animator;	// 40 = 0x28
    struct UIEdgeInsets _minifiedContentInsets;	// 48 = 0x30
    _Bool _isMagnified;	// 80 = 0x50
    _Bool _isDoingMagnificationAnimation;	// 81 = 0x51
    _Bool _isMagnificationEnabled;	// 82 = 0x52
    _Bool _ignoreDataSourceChanges;	// 83 = 0x53
    NSTimer *_minificationTimer;	// 88 = 0x58
    UILongPressGestureRecognizer *_longPressRecognizer;	// 96 = 0x60
    UILongPressGestureRecognizer *_touchTracker;	// 104 = 0x68
    _Bool _hasTouches;	// 112 = 0x70
    _Bool _scrollsLastUsedAppIconIntoView;	// 113 = 0x71
    _Bool _hideShinyStatus;	// 114 = 0x72
    _Bool _toggleBordersOnInterfaceStyle;	// 115 = 0x73
    _Bool _minifiesOnSelection;	// 116 = 0x74
    _Bool _isMinifyingOnTranscriptScroll;	// 117 = 0x75
    id <CKBrowserSwitcherFooterViewDelegate> _delegate;	// 120 = 0x78
    id <CKBrowserSwitcherFooterViewDataSource> _dataSource;	// 128 = 0x80
    double _snapshotVerticalOffset;	// 136 = 0x88
    UIView *_grayLine;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000001de05c
@property(retain, nonatomic) UIView *grayLine; // @synthesize grayLine=_grayLine;
@property(nonatomic) double snapshotVerticalOffset; // @synthesize snapshotVerticalOffset=_snapshotVerticalOffset;
@property(nonatomic) _Bool isMinifyingOnTranscriptScroll; // @synthesize isMinifyingOnTranscriptScroll=_isMinifyingOnTranscriptScroll;
@property(nonatomic) _Bool minifiesOnSelection; // @synthesize minifiesOnSelection=_minifiesOnSelection;
@property(retain, nonatomic) CKAppStripLayout *appStripLayout; // @synthesize appStripLayout=_appStripLayout;
@property(nonatomic) _Bool toggleBordersOnInterfaceStyle; // @synthesize toggleBordersOnInterfaceStyle=_toggleBordersOnInterfaceStyle;
@property(nonatomic) _Bool hideShinyStatus; // @synthesize hideShinyStatus=_hideShinyStatus;
@property(nonatomic) _Bool scrollsLastUsedAppIconIntoView; // @synthesize scrollsLastUsedAppIconIntoView=_scrollsLastUsedAppIconIntoView;
@property(nonatomic) _Bool isMagnified; // @synthesize isMagnified=_isMagnified;
@property(nonatomic) __weak id <CKBrowserSwitcherFooterViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CKBrowserSwitcherFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)collectionView;	// IMP=0x00000000001ddee3
- (void)_updateVisibilityState;	// IMP=0x00000000001dde6e
- (void)animateAppStripVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ddc8b
- (void)updatePredictiveTypeSnapshot:(id)arg1;	// IMP=0x00000000001ddbe9
- (void)transcriptCollectionStartedScrolling:(id)arg1;	// IMP=0x00000000001ddb93
- (void)updateBrowserCell:(id)arg1;	// IMP=0x00000000001dd96e
- (void)reloadData;	// IMP=0x00000000001dd81d
- (void)installedAppsChanged:(id)arg1;	// IMP=0x00000000001dd7a8
- (void)updateCollectionView:(id)arg1;	// IMP=0x00000000001dd733
- (void)visibleAppsChanges:(id)arg1;	// IMP=0x00000000001dd305
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000001dd20e
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x00000000001dd05a
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001dcf4e
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001dccb0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001dcc58
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001dcc4d
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00000000001dcaad
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000001dca5c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001dc6bf
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000001dc6ae
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000001dc5e9
- (void)adjustMagnificationAtPoint:(struct CGPoint)arg1 minifyImmediately:(_Bool)arg2;	// IMP=0x00000000001dbceb
- (struct CGPoint)targetContentOffsetForFocusPoint:(struct CGPoint)arg1 initialLayoutMode:(unsigned long long)arg2 finalLayoutMode:(unsigned long long)arg3;	// IMP=0x00000000001dbc1b
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001dbc13
- (void)minifyImmediately:(_Bool)arg1;	// IMP=0x00000000001dbb9c
- (void)touchTrackerTrackedTouches:(id)arg1;	// IMP=0x00000000001dbb32
- (void)appsLongPressed:(id)arg1;	// IMP=0x00000000001db916
- (double)contentHeight;	// IMP=0x00000000001db7a4
- (double)contentHeightForCameraApps;	// IMP=0x00000000001db72e
- (void)clearSelection;	// IMP=0x00000000001db553
- (void)resetScrollPosition;	// IMP=0x00000000001db476
- (void)selectPluginAtIndexPath:(id)arg1;	// IMP=0x00000000001db194
- (void)setInitiallySelectedPluginIfNeeded;	// IMP=0x00000000001db091
@property(nonatomic) _Bool showBorders;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000001dafd8
- (struct UIEdgeInsets)insetsForAppStrip;	// IMP=0x00000000001daf27
- (void)layoutSubviews;	// IMP=0x00000000001dad2c
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000001dacc5
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000001dac5e
- (id)init;	// IMP=0x00000000001dabf6
- (id)initWithFrame:(struct CGRect)arg1 toggleBordersOnInterfaceStyle:(_Bool)arg2;	// IMP=0x00000000001da3d4
- (void)dealloc;	// IMP=0x00000000001da2ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

