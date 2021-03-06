//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class MTVisualStyling, NSArray, NSMutableArray, NSMutableDictionary, NSString, UITapGestureRecognizer;
@protocol SBFluidSwitcherItemContainerHeaderViewDelegate;

@interface SBFluidSwitcherItemContainerHeaderView : UIView <PTSettingsKeyObserver>
{
    NSMutableDictionary *_itemsToIconImageViews;	// 8 = 0x8
    NSMutableArray *_iconImageViewReusePool;	// 16 = 0x10
    NSMutableDictionary *_itemsToTitleLabels;	// 24 = 0x18
    NSMutableArray *_titleLabelReusePool;	// 32 = 0x20
    NSMutableDictionary *_itemsToSubtitleLabelViews;	// 40 = 0x28
    NSMutableArray *_subtitleLabelReusePool;	// 48 = 0x30
    NSMutableDictionary *_itemsToMultiWindowIndicatorViews;	// 56 = 0x38
    NSMutableArray *_multiWindowIndicatorViewReusePool;	// 64 = 0x40
    long long _subtitleVisualStylingInterfaceStyle;	// 72 = 0x48
    MTVisualStyling *_subtitleVisualStyling;	// 80 = 0x50
    double _spacingBetweenLeadingEdgeAndIcon;	// 88 = 0x58
    double _spacingBetweenTrailingEdgeAndLabels;	// 96 = 0x60
    double _iconSideLength;	// 104 = 0x68
    double _spacingBetweenSnapshotAndIcon;	// 112 = 0x70
    double _spacingBetweenSnapshotAndDescriptionLabelBaseline;	// 120 = 0x78
    double _spacingBetweenTitleAndSubtitleBaseline;	// 128 = 0x80
    double _spacingBetweenIconAndLabel;	// 136 = 0x88
    double _spacingBetweenLabelAndMultipleWindowsIndicator;	// 144 = 0x90
    double _multipleWindowsIndicatorSideLength;	// 152 = 0x98
    double _spacingBetweenLabelAndSecondIcon;	// 160 = 0xa0
    double _spacingBetweenBoundsCenterAndSecondIcon;	// 168 = 0xa8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 176 = 0xb0
    id <SBFluidSwitcherItemContainerHeaderViewDelegate> _delegate;	// 184 = 0xb8
    double _textAlpha;	// 192 = 0xc0
    NSArray *_titleItems;	// 200 = 0xc8
}

+ (double)distanceFromBoundingLeadingEdgeToIconTrailingEdge;	// IMP=0x00000000006a4cac
- (void).cxx_destruct;	// IMP=0x00000000006a7640
@property(copy, nonatomic) NSArray *titleItems; // @synthesize titleItems=_titleItems;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(readonly, nonatomic) __weak id <SBFluidSwitcherItemContainerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_makeMultipleWindowsIndicatorView;	// IMP=0x00000000006a75d1
- (void)_updateTitleAlpha;	// IMP=0x0000000000060ebb
- (id)_titleLabelFont;	// IMP=0x00000000006a7397
- (id)_subtitleLabelFont;	// IMP=0x00000000006a736a
- (void)_applyPrototypeSettings;	// IMP=0x00000000006a7209
- (void)_updateVisualStylingWithTitleItems:(id)arg1;	// IMP=0x00000000006a7102
- (void)_handleTapGestureRecognizer:(id)arg1;	// IMP=0x00000000006a6854
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000000006a656b
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000006a6559
- (void)layoutSubviews;	// IMP=0x0000000000024d3c
- (void)setTitleItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006a4d54
@property(readonly, nonatomic) double preferredHeaderHeight;
- (void)dealloc;	// IMP=0x00000000006a4c2a
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;	// IMP=0x000000000005ecfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

