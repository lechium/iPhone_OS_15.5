//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI22OverlappingPlayersView : UIView
{
    MISSING_TYPE *overlapPercentage;	// 8 = 0x8
    MISSING_TYPE *playerViews;	// 16 = 0x10
    MISSING_TYPE *playerSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021db40
- (void)prepareForReuse;	// IMP=0x000000000021dae0
- (void)applyWithPlayerAvatars:(id)arg1 playerSize:(struct CGSize)arg2;	// IMP=0x000000000021d950
- (void)layoutSubviews;	// IMP=0x000000000021d430
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000000021d080
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000021d050
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021cde0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000021ccf0
@property(nonatomic) double overlapPercentage; // @synthesize overlapPercentage;

@end

