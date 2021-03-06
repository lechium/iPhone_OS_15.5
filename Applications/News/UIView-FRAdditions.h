//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (FRAdditions)
+ (id)fr_adjacentSiblingViewsFromViews:(id)arg1;	// IMP=0x00200000000fa9ec
+ (void)fr_animateWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000f9f67
@property(readonly, nonatomic) _Bool visible;
- (void)fr_recolorLabelSubviewsWithColor:(id)arg1;	// IMP=0x00100000000faf79
- (void)fr_setBlurred:(_Bool)arg1 radius:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4;	// IMP=0x00100000000fa04e
- (struct CGRect)fr_adjustedWidthAndXOriginFromFrame:(struct CGRect)arg1;	// IMP=0x00100000000f9f2b
- (id)fr_subviewsOfType:(Class)arg1;	// IMP=0x00100000000f9d7a
- (id)fr_selfOrFirstAncestorOfType:(Class)arg1;	// IMP=0x00100000000f9cea
- (id)fr_firstAncestorOfType:(Class)arg1;	// IMP=0x00100000000f9c4f
- (_Bool)fr_hasAncestorOfType:(Class)arg1;	// IMP=0x00100000000f9c1c
- (void)fr_accessibilityWorkaroundFor20458918ByClearingParentTableCellsChildCache;	// IMP=0x00100000000f9baf
- (void)fr_setHeight:(double)arg1;	// IMP=0x00100000000f9b49
@property(nonatomic) double fr_height;
@property(nonatomic) double fr_width;
- (void)fr_setMaxY:(double)arg1;	// IMP=0x00100000000f99f0
- (void)fr_setMinY:(double)arg1;	// IMP=0x00100000000f998a
- (void)fr_setMaxX:(double)arg1;	// IMP=0x00100000000f9920
- (void)fr_setMinX:(double)arg1;	// IMP=0x00100000000f98bb
- (void)roundOrigin;	// IMP=0x00100000000f983e
@end

