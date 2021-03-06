//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIMenuPopoverDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIListViewElement, SKUIMenuPopoverController, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalListView <SKUIMenuPopoverDelegate, SKUIViewElementView>
{
    NSMutableArray *_artworkRequestPassthroughViews;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    struct UIEdgeInsets _bigHitInsets;	// 48 = 0x30
    double _elementSpacing;	// 80 = 0x50
    UIControl *_focusedMenuButton;	// 88 = 0x58
    NSMapTable *_imageViewToImageResourceCacheKey;	// 96 = 0x60
    NSArray *_lines;	// 104 = 0x68
    SKUIListViewElement *_listElement;	// 112 = 0x70
    SKUIMenuPopoverController *_popoverController;	// 120 = 0x78
    _Bool _useBigHitTarget;	// 128 = 0x80
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001221ed
+ (id)_linesWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000121edd
+ (double)_lineSpacingForViewElement:(id)arg1;	// IMP=0x0000000000121e3e
+ (double)_lineSpacingForLineElements:(id)arg1;	// IMP=0x0000000000121cc5
+ (double)_elementSpacingForViewElement:(id)arg1;	// IMP=0x0000000000121c4b
+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;	// IMP=0x0000000000121b84
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000121a0b
+ (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4;	// IMP=0x00000000001218c8
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x00000000001217c2
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x000000000011e29e
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000011df4b
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x000000000011db85
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000011da46
- (void).cxx_destruct;	// IMP=0x0000000000122429
- (id)_viewElementForView:(id)arg1;	// IMP=0x000000000012234b
- (void)_destroyMenuPopover;	// IMP=0x00000000001222f2
- (void)_menuButtonAction:(id)arg1;	// IMP=0x00000000001215d3
- (void)_imageTapAction:(id)arg1;	// IMP=0x00000000001214ad
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001210c6
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000000121077
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;	// IMP=0x0000000000120ffe
- (void)menuPopoverDidCancel:(id)arg1;	// IMP=0x0000000000120fec
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001209d2
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000120956
- (void)layoutSubviews;	// IMP=0x000000000011febe
- (struct CGRect)hitRect;	// IMP=0x000000000011fe02
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000011fa65
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000011fa5d
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000011f644
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000011f5da
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000011e9ca
- (void)dealloc;	// IMP=0x000000000011d9fb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000011d988

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

