//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;

@interface TVRatingBadgeLayout
{
    UIColor *_fillColor;	// 8 = 0x8
    NSString *_ratingStyle;	// 16 = 0x10
    NSString *_ratingStyleAXSmall;	// 24 = 0x18
    NSString *_ratingStyleAXLarge;	// 32 = 0x20
    double _interitemSpacing;	// 40 = 0x28
    double _interitemSpacingAXSmall;	// 48 = 0x30
    double _interitemSpacingAXLarge;	// 56 = 0x38
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;	// IMP=0x000000000008bd65
- (void).cxx_destruct;	// IMP=0x000000000008c128
@property(nonatomic) double interitemSpacingAXLarge; // @synthesize interitemSpacingAXLarge=_interitemSpacingAXLarge;
@property(nonatomic) double interitemSpacingAXSmall; // @synthesize interitemSpacingAXSmall=_interitemSpacingAXSmall;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(retain, nonatomic) NSString *ratingStyleAXLarge; // @synthesize ratingStyleAXLarge=_ratingStyleAXLarge;
@property(retain, nonatomic) NSString *ratingStyleAXSmall; // @synthesize ratingStyleAXSmall=_ratingStyleAXSmall;
@property(retain, nonatomic) NSString *ratingStyle; // @synthesize ratingStyle=_ratingStyle;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;

@end

