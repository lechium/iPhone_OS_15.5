//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerMeteredGaugeTextView
{
    NTKRichComplicationImageView *_outerImageView;	// 16 = 0x10
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x00000000001e6ce1
+ (long long)progressFillStyle;	// IMP=0x00000000001e6cd6
- (void).cxx_destruct;	// IMP=0x00000000001e6eae
@property(readonly, nonatomic) NTKRichComplicationImageView *outerImageView; // @synthesize outerImageView=_outerImageView;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000001e6d2c
- (long long)tritiumUpdateMode;	// IMP=0x00000000001e6c37
- (void)layoutSubviews;	// IMP=0x00000000001e6afa
- (id)init;	// IMP=0x00000000001e695d

@end

