//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface _HKDateContentLayout : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIView *_dateView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ee659
@property(retain, nonatomic) UIView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (long long)_viewCount;	// IMP=0x00000000000ee546
- (double)_totalViewHeight;	// IMP=0x00000000000ee371
- (double)_maximumViewWidth;	// IMP=0x00000000000ee219
- (void)_invalidateLayout;	// IMP=0x00000000000ee1eb
- (void)layoutSubviews;	// IMP=0x00000000000edebb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000edea9
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000ede67
- (id)init;	// IMP=0x00000000000edc60

@end
