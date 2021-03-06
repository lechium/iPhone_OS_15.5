//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class UIView;

@interface NUIContentScrollView : UIScrollView
{
    _Bool _canScrollDocumentViewHorizontally;	// 8 = 0x8
    _Bool _canScrollDocumentViewVertically;	// 9 = 0x9
    UIView *_documentView;	// 16 = 0x10
    long long _horizontalAlignment;	// 24 = 0x18
    long long _verticalAlignment;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000000020350
- (void).cxx_destruct;	// IMP=0x000000000002146b
@property(nonatomic) _Bool canScrollDocumentViewVertically; // @synthesize canScrollDocumentViewVertically=_canScrollDocumentViewVertically;
@property(nonatomic) _Bool canScrollDocumentViewHorizontally; // @synthesize canScrollDocumentViewHorizontally=_canScrollDocumentViewHorizontally;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(retain, nonatomic) UIView *documentView; // @synthesize documentView=_documentView;
- (void)layoutSubviews;	// IMP=0x0000000000020b1c
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000020a8e
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000020a00
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000209ee
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x00000000000208a3
- (struct CGSize)_finalSizeForTargetSize:(struct CGSize)arg1 resultSize:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000020879
- (struct CGSize)_measureSizeForTargetSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000000207a7
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x000000000002070e
- (CDStruct_6c92d79e)_baselineOffsetsAtSize:(struct CGSize)arg1;	// IMP=0x000000000002065a
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;	// IMP=0x000000000002064f
- (_Bool)_layoutHeightDependsOnWidth;	// IMP=0x000000000002063d
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;	// IMP=0x00000000000205f9
- (id)initWithDocumentView:(id)arg1;	// IMP=0x0000000000020422
@property(retain, nonatomic) UIView *contentView;
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000000203ec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002039e

@end

