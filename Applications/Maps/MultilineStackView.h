//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface MultilineStackView : UIView
{
    NSNumber *_computedWidth;	// 8 = 0x8
    NSMutableArray *_arrangedSubviews;	// 16 = 0x10
    unsigned long long _horizontalArrangement;	// 24 = 0x18
    unsigned long long _verticalArrangement;	// 32 = 0x20
    double _interItemHorizontalPadding;	// 40 = 0x28
    double _interItemVerticalPadding;	// 48 = 0x30
    CDUnknownBlockType _customizationBlock;	// 56 = 0x38
    double _calculatedHeight;	// 64 = 0x40
    struct UIEdgeInsets _edgeInsets;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000be594
@property(nonatomic) double calculatedHeight; // @synthesize calculatedHeight=_calculatedHeight;
@property(copy, nonatomic) CDUnknownBlockType customizationBlock; // @synthesize customizationBlock=_customizationBlock;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double interItemVerticalPadding; // @synthesize interItemVerticalPadding=_interItemVerticalPadding;
@property(nonatomic) double interItemHorizontalPadding; // @synthesize interItemHorizontalPadding=_interItemHorizontalPadding;
@property(readonly, nonatomic) unsigned long long verticalArrangement; // @synthesize verticalArrangement=_verticalArrangement;
@property(readonly, nonatomic) unsigned long long horizontalArrangement; // @synthesize horizontalArrangement=_horizontalArrangement;
- (void)invalidateLayout;	// IMP=0x00100000000be4e8
- (id)_appendRowViewWithViews:(id)arg1 topAnchor:(id)arg2 topInset:(double)arg3 rowContentWidth:(double)arg4 availableRowWidth:(double)arg5 rowHeight:(double)arg6 constraints:(id)arg7;	// IMP=0x00100000000bd997
- (void)_computeLayout;	// IMP=0x00100000000bceca
- (void)_computeLayoutIfNeeded;	// IMP=0x00100000000bce47
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000000bcdf7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000bcdb6
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00100000000bcd64
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00100000000bcd12
- (void)removeArrangedSubview:(id)arg1;	// IMP=0x00100000000bccd9
- (void)addArrangedSubview:(id)arg1;	// IMP=0x00100000000bcca0
// Error: Property attributes should begin with the type ('T') attribute, property name: arrangedSubviews
// Property attributes: (null)

- (id)initWithHorizontalArrangement:(unsigned long long)arg1 verticalArrangement:(unsigned long long)arg2;	// IMP=0x00100000000bca86

@end

