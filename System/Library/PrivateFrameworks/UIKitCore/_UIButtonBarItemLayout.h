//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIBarButtonItem, UILayoutGuide, UIView, _UITAMICAdaptorView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemLayout
{
    UIBarButtonItem *_item;	// 24 = 0x18
    UIView *_itemView;	// 32 = 0x20
    _UITAMICAdaptorView *_itemViewWrapper;	// 40 = 0x28
    NSLayoutConstraint *_requestedSize;	// 48 = 0x30
    NSLayoutConstraint *_maximumAlignmentSize;	// 56 = 0x38
    NSLayoutConstraint *_groupSameSize;	// 64 = 0x40
    NSLayoutConstraint *_popoverGuideLeading;	// 72 = 0x48
    NSLayoutConstraint *_popoverGuideTrailing;	// 80 = 0x50
    NSLayoutConstraint *_popoverGuideTop;	// 88 = 0x58
    NSLayoutConstraint *_popoverGuideHeight;	// 96 = 0x60
    _Bool _useGroupSizing;	// 104 = 0x68
    _Bool _suppressSpacing;	// 105 = 0x69
    UILayoutGuide *_popoverLayoutGuide;	// 112 = 0x70
    CDUnknownBlockType _itemViewGenerator;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000129a69
@property(copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property(nonatomic) _Bool suppressSpacing; // @synthesize suppressSpacing=_suppressSpacing;
@property(nonatomic) _Bool useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;
@property(readonly, nonatomic) UILayoutGuide *popoverLayoutGuide; // @synthesize popoverLayoutGuide=_popoverLayoutGuide;
- (id)description;	// IMP=0x0000000000129897
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x00000000001296c9
- (void)_addLayoutGuides:(id)arg1;	// IMP=0x0000000000129676
- (void)_addLayoutViews:(id)arg1;	// IMP=0x0000000000129643
- (void)_configure;	// IMP=0x0000000000129198
- (void)_updateItemViewSizing;	// IMP=0x0000000000128f80
- (void)_updateCustomView;	// IMP=0x0000000000128e41
- (_Bool)_shouldBeDirty;	// IMP=0x0000000000128dd0
- (id)barButtonItem;	// IMP=0x0000000000128dbb
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;	// IMP=0x0000000000128d1c
- (_Bool)shouldHoriziontallyCenterView:(id)arg1;	// IMP=0x0000000000128cdb
- (void)_updateItemView;	// IMP=0x0000000000128bb1
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;	// IMP=0x0000000000128b47
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;	// IMP=0x00000000001289ac
- (id)initWithLayoutMetrics:(id)arg1;	// IMP=0x0000000000128981

@end
