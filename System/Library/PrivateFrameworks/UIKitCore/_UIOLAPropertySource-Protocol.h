//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UILAPropertySource-Protocol.h>

@class NSMapTable;

@protocol _UIOLAPropertySource <_UILAPropertySource>
@property(readonly, nonatomic) NSMapTable *customSpacings;
@property(nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged;
@property(nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged;
@property(nonatomic) long long distribution;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property(nonatomic) double spacing;
- (double)customSpacingAfterItem:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
@end

