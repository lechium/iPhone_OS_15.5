//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileSafariUI/CloudTabItemViewDelegate-Protocol.h>
#import <MobileSafariUI/ViewReuseManagerDelegate-Protocol.h>

@class CloudTabHeaderView, NSArray, NSString, ViewReuseManager, WBSCloudTab, WBSCloudTabDevice;
@protocol CloudTabTableDelegate;

__attribute__((visibility("hidden")))
@interface CloudTabTable : UIView <CloudTabItemViewDelegate, ViewReuseManagerDelegate>
{
    long long _style;	// 8 = 0x8
    WBSCloudTabDevice *_device;	// 16 = 0x10
    CloudTabHeaderView *_headerView;	// 24 = 0x18
    unsigned long long _indexOfFocusedTab;	// 32 = 0x20
    ViewReuseManager *_itemViewReuseManager;	// 40 = 0x28
    struct _NSRange _trackedItemViewRange;	// 48 = 0x30
    id <CloudTabTableDelegate> _delegate;	// 64 = 0x40
    WBSCloudTab *_focusedTab;	// 72 = 0x48
    double _offsetAboveFocusedTab;	// 80 = 0x50
    double _offsetBelowFocusedTab;	// 88 = 0x58
    CDUnknownBlockType _layoutAnimator;	// 96 = 0x60
    NSArray *_displayedTabs;	// 104 = 0x68
    struct CGRect _visibleRect;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000080a77
@property(readonly, nonatomic) NSArray *displayedTabs; // @synthesize displayedTabs=_displayedTabs;
@property(copy, nonatomic) CDUnknownBlockType layoutAnimator; // @synthesize layoutAnimator=_layoutAnimator;
@property(nonatomic) double offsetBelowFocusedTab; // @synthesize offsetBelowFocusedTab=_offsetBelowFocusedTab;
@property(nonatomic) double offsetAboveFocusedTab; // @synthesize offsetAboveFocusedTab=_offsetAboveFocusedTab;
@property(retain, nonatomic) WBSCloudTab *focusedTab; // @synthesize focusedTab=_focusedTab;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) __weak id <CloudTabTableDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldShowSeparatorForItemViewAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000080991
- (void)cloudTabItemViewHighlightStateDidChange:(id)arg1;	// IMP=0x000000000008089d
- (void)cloudTabItemViewDeleteButtonWasTapped:(id)arg1;	// IMP=0x0000000000080803
- (void)cloudTabItemViewDidFinishEditing:(id)arg1;	// IMP=0x00000000000807a0
- (void)cloudTabItemViewDidStartEditing:(id)arg1;	// IMP=0x000000000008073d
- (void)viewReuseManager:(id)arg1 prepareView:(id)arg2 toRepresentObjectAtIndex:(unsigned long long)arg3;	// IMP=0x0000000000080649
- (void)viewReuseManager:(id)arg1 willRecycleView:(id)arg2;	// IMP=0x0000000000080621
- (_Bool)updateDisplayedTabs;	// IMP=0x000000000008049a
- (void)layoutSubviews;	// IMP=0x00000000000802e6
- (void)_layoutItemView:(id)arg1 representingItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000080181
@property(readonly, nonatomic) double contentMinimumY;
- (struct CGRect)rectForTab:(id)arg1;	// IMP=0x00000000000800b3
- (struct CGRect)_rectForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007ffbc
- (void)_didSelectItemView:(id)arg1;	// IMP=0x000000000007ff2d
- (struct _NSRange)_visibleItemRange;	// IMP=0x000000000007fc51
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000007fb8e
- (id)initWithDevice:(id)arg1 style:(long long)arg2;	// IMP=0x000000000007f9bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

