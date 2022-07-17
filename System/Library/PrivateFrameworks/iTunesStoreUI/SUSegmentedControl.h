//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <iTunesStoreUI/SUMenuViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/UIPopoverControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUSimpleMenuViewController, UIColor, UIPopoverController, UISegmentedControl;

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate>
{
    _Bool _autosizesText;	// 8 = 0x8
    NSString *_cancelButtonTitle;	// 16 = 0x10
    SUClientInterface *_clientInterface;	// 24 = 0x18
    _Bool _hidingPopoverForRotation;	// 32 = 0x20
    NSMutableArray *_items;	// 40 = 0x28
    long long _maximumNumberOfItems;	// 48 = 0x30
    double _maximumWidth;	// 56 = 0x38
    SUSimpleMenuViewController *_menuViewController;	// 64 = 0x40
    NSString *_moreListTitle;	// 72 = 0x48
    UIPopoverController *_popoverController;	// 80 = 0x50
    UISegmentedControl *_segmentedControl;	// 88 = 0x58
    long long _selectionIndex;	// 96 = 0x60
    _Bool _showsMoreListAutomatically;	// 104 = 0x68
    long long _tintStyle;	// 112 = 0x70
}

@property(nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(nonatomic) _Bool showsMoreListAutomatically; // @synthesize showsMoreListAutomatically=_showsMoreListAutomatically;
@property(copy, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (id)_titlesForMoreList;	// IMP=0x000000000010db2c
- (void)_showMoreList:(_Bool)arg1;	// IMP=0x000000000010d8fd
- (void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;	// IMP=0x000000000010d871
- (void)_reloadData;	// IMP=0x000000000010d685
- (void)_presentPopoverAnimated:(_Bool)arg1;	// IMP=0x000000000010d509
- (void)_destroyPopoverController;	// IMP=0x000000000010d4ce
- (void)_destroyMenuViewController;	// IMP=0x000000000010d493
- (void)_applyStyling;	// IMP=0x000000000010d33a
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000010d2f4
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x000000000010d260
- (void)menuViewControllerDidCancel:(id)arg1;	// IMP=0x000000000010d1fc
- (void)_windowWillRotateNotification:(id)arg1;	// IMP=0x000000000010d196
- (void)_windowDidRotateNotification:(id)arg1;	// IMP=0x000000000010d101
- (void)_valueChangedEvent:(id)arg1;	// IMP=0x000000000010cffa
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000010cf50
- (void)layoutSubviews;	// IMP=0x000000000010ced4
- (id)titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x000000000010ceb7
@property(retain, nonatomic) UIColor *tintColor;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;	// IMP=0x000000000010cdcf
- (void)sizeToFitUserInterfaceIdiom;	// IMP=0x000000000010cd3b
- (void)showPopover:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000000010cc54
- (void)showMoreList:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000010cb83
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000010cb26
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;	// IMP=0x000000000010cb14
@property(nonatomic) long long selectedItemIndex;
@property(nonatomic) long long segmentedControlStyle;
@property(copy, nonatomic) NSArray *items;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;	// IMP=0x000000000010c84a
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000010c82d
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000010c72a
@property(readonly, nonatomic) long long selectedSegmentIndex;
@property(readonly, nonatomic) long long numberOfVisibleSegments;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x000000000010c666
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x000000000010c649
- (void)dealloc;	// IMP=0x000000000010c513
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010c2ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
