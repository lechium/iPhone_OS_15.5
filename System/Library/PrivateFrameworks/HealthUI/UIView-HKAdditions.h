//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (HKAdditions)
+ (struct NSDirectionalEdgeInsets)wd_defaultDirectionalLayoutMargins;	// IMP=0x000000000001c271
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000001dd3e
- (double)hk_layoutHeightFittingWidth:(double)arg1;	// IMP=0x000000000001dd15
- (void)hk_maskAllCornersWithRadius:(double)arg1;	// IMP=0x000000000001dcfc
- (void)hk_maskCorners:(unsigned long long)arg1 radius:(double)arg2;	// IMP=0x000000000001dc38
- (void)hk_constraintAspectRatioFromSize:(struct CGSize)arg1;	// IMP=0x000000000001dbbf
- (void)hk_alignVerticalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x000000000001dafd
- (void)hk_alignHorizontalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x000000000001da3b
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x000000000001d979
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x000000000001d8b7
- (void)hk_alignConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x000000000001d799
- (void)hk_alignConstraintsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x000000000001d67b
- (void)hk_alignConstraintsWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;	// IMP=0x000000000001d55d
- (void)hk_alignConstraintsWithViewController:(id)arg1;	// IMP=0x000000000001d20b
- (void)hk_alignCenterConstraintsWithView:(id)arg1;	// IMP=0x000000000001d0b2
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 margin:(double)arg2;	// IMP=0x000000000001cf43
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 margin:(double)arg2;	// IMP=0x000000000001cdd4
- (void)hk_alignConstraintsWithGuide:(id)arg1;	// IMP=0x000000000001cb58
- (void)hk_alignConstraintsWithView:(id)arg1;	// IMP=0x000000000001c8dc
- (void)hk_constrainToSuperviewAlongEdges:(id)arg1 constant:(double)arg2;	// IMP=0x000000000001c5e4
- (void)hk_constrainToView:(id)arg1 fromEdge:(long long)arg2 toEdge:(long long)arg3 constant:(double)arg4;	// IMP=0x000000000001c502
- (long long)hk_trailingTextAlignmentAtOrBelowSizeCategory:(id)arg1;	// IMP=0x000000000001c4c9
- (_Bool)hk_isLeftToRight;	// IMP=0x000000000001c493
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 views:(id)arg3;	// IMP=0x000000000001c47b
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x000000000001c429
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;	// IMP=0x000000000001c3b8
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 constant:(double)arg4;	// IMP=0x000000000001c347
@end

