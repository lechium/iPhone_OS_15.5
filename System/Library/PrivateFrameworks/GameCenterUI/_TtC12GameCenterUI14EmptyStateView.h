//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI14EmptyStateView : UIScrollView
{
    MISSING_TYPE *imageView;	// 8 = 0x8
    MISSING_TYPE *wordmarkView;	// 16 = 0x10
    MISSING_TYPE *primaryLabel;	// 24 = 0x18
    MISSING_TYPE *secondaryLabel;	// 32 = 0x20
    MISSING_TYPE *button;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_focusGuide;	// 48 = 0x30
    MISSING_TYPE *disabled;	// 56 = 0x38
    MISSING_TYPE *imageType;	// 64 = 0x40
    MISSING_TYPE *buttonActionBlock;	// 72 = 0x48
}

+ (id)addAdditionalFriendsEmptyStateView;	// IMP=0x0000000000371960
+ (id)addFriendsEmptyStateViewTVOS;	// IMP=0x0000000000371920
+ (id)addFriendsEmptyStateView;	// IMP=0x0000000000371900
- (void).cxx_destruct;	// IMP=0x0000000000373b40
- (void)didTapButton:(id)arg1;	// IMP=0x0000000000373920
- (void)layoutSubviews;	// IMP=0x00000000003738f0
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000000373080
@property(nonatomic, copy) CDUnknownBlockType buttonActionBlock;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000372a90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000372a60

@end
