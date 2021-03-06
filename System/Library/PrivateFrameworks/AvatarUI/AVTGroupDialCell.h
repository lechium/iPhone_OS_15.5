//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, NSTimer, UILabel;

@interface AVTGroupDialCell : UICollectionViewCell
{
    NSString *_string;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    NSTimer *_shimmerTimer;	// 24 = 0x18
}

+ (id)boldLabelFont;	// IMP=0x0000000000051ca6
+ (id)labelFont;	// IMP=0x0000000000051c8d
+ (id)cellIdentifier;	// IMP=0x0000000000051c80
- (void).cxx_destruct;	// IMP=0x00000000000529b7
@property(retain, nonatomic) NSTimer *shimmerTimer; // @synthesize shimmerTimer=_shimmerTimer;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void)shimmerOnceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000526d2
- (void)cancelShimmerTimer;	// IMP=0x0000000000052678
- (void)startShimmering;	// IMP=0x00000000000523f3
- (void)stopShimmeringAnimated:(_Bool)arg1;	// IMP=0x0000000000052232
- (void)setActiveItem:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000052023
- (void)prepareForReuse;	// IMP=0x0000000000051e44
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000051cbf

@end

