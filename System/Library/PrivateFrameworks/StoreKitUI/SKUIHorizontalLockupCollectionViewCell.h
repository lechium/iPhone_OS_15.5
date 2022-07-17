//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIPerspectiveView-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UIScrollViewAccessibilityDelegate-Protocol.h>

@class NSString, SKUIButtonViewElement, SKUICellScrollView, SKUICheckboxInputViewElement, SKUIHorizontalLockupView, UIButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupCollectionViewCell <UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView>
{
    UIButton *_actionButton;	// 8 = 0x8
    SKUIButtonViewElement *_actionButtonViewElement;	// 16 = 0x10
    SKUICellScrollView *_actionsScrollView;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
    SKUICheckboxInputViewElement *_editModeCheckboxElement;	// 64 = 0x40
    UIImageView *_editModeControl;	// 72 = 0x48
    UIView *_highlightBackgroundView;	// 80 = 0x50
    SKUIHorizontalLockupView *_lockupView;	// 88 = 0x58
    UIColor *_lockupViewBackgroundColor;	// 96 = 0x60
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00000000001fe4b7
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001fe49e
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000001fe410
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00000000001fe3f7
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00000000001fe365
- (void).cxx_destruct;	// IMP=0x00000000002003b0
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_removeEditControlAnimated:(_Bool)arg1;	// IMP=0x00000000002000fd
- (void)_reloadLockupViewBackgroundColor;	// IMP=0x00000000001fff60
- (void)_reloadHighlightBackgroundView;	// IMP=0x00000000001ffcd7
- (void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000001ff853
- (_Bool)_isActionsScrollViewEnabled;	// IMP=0x00000000001ff82c
- (id)_highlightBackgroundColor;	// IMP=0x00000000001ff76d
- (id)_editControlImage;	// IMP=0x00000000001ff5d0
- (id)_attributedStringForActionButton:(id)arg1 context:(id)arg2;	// IMP=0x00000000001ff44e
- (void)_addEditControlAnimated:(_Bool)arg1;	// IMP=0x00000000001ff0ee
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000001ff027
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001fed99
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000001fecb3
- (void)_actionButtonAction:(id)arg1;	// IMP=0x00000000001fec72
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001fec31
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000001febab
- (void)layoutSubviews;	// IMP=0x00000000001fe7f5
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001fe7a6
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001fe757
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001fe73a
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001fe71d
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001fe700
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001fe4d0
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x00000000001fe3da
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x00000000001fe3bd
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x00000000001fe37e
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001fe2c6
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001fe223
@property(readonly, nonatomic, getter=isScrollingCellToHideActionButton) _Bool scrollingCellToHideActionButton;
- (_Bool)isDeleteButtonHidden;	// IMP=0x00000000001fe0e2
- (void)hideDeleteButton;	// IMP=0x00000000001fe0b0
- (void)dealloc;	// IMP=0x00000000001fe03d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001fdf48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
