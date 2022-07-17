//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

#import <TextInputUI/_UIBarButtonItemViewOwner-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider;
@protocol TUIButtonBarViewProvider;

@interface TUIAssistantButtonBarGroupView : UIView <_UIBarButtonItemViewOwner>
{
    NSMutableArray *_visibleButtons;	// 8 = 0x8
    _Bool _collapsed;	// 16 = 0x10
    UIBarButtonItemGroup *_barButtonItemGroup;	// 24 = 0x18
    double _itemSpacing;	// 32 = 0x20
    id <TUIButtonBarViewProvider> _buttonProvider;	// 40 = 0x28
    _UIButtonBarButtonVisualProvider *_visualProvider;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000024c98
@property(retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
@property(nonatomic) __weak id <TUIButtonBarViewProvider> buttonProvider; // @synthesize buttonProvider=_buttonProvider;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(retain, nonatomic) UIBarButtonItemGroup *barButtonItemGroup; // @synthesize barButtonItemGroup=_barButtonItemGroup;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000024a50
- (void)_itemDidChangeHiddenState:(id)arg1;	// IMP=0x00000000000249da
- (void)_itemDidChangeWidth:(id)arg1;	// IMP=0x0000000000024964
- (void)_itemStandardViewNeedsUpdate:(id)arg1;	// IMP=0x00000000000248de
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;	// IMP=0x0000000000024818
- (void)_itemDidChangeEnabledState:(id)arg1;	// IMP=0x0000000000024806
- (void)_itemDidChangeSelectionState:(id)arg1;	// IMP=0x00000000000247f4
- (void)_updateViewForBarButtonItem:(id)arg1;	// IMP=0x0000000000024732
- (void)layoutSubviews;	// IMP=0x00000000000242cb
- (id)_buttonBarItemViewForBarButtonItem:(id)arg1;	// IMP=0x0000000000024131
@property(readonly, nonatomic) NSArray *visibleButtons;
- (void)_ensureVisibleButtonsForVisibleItems;	// IMP=0x0000000000023f0f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000023ea1
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000023df7
- (struct CGSize)_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2;	// IMP=0x0000000000023b15
@property(readonly, nonatomic) _Bool containsFlexibleItems;
- (id)_visibleItems;	// IMP=0x0000000000023951
- (id)_visibleItemsAllowingCollapse:(_Bool)arg1;	// IMP=0x0000000000023677
@property(nonatomic, getter=isCollapsed) _Bool collapsed;
- (_Bool)_canBeCollapsed;	// IMP=0x00000000000234a9
- (id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3;	// IMP=0x00000000000233ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
