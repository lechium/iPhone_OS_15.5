//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKRichComplicationRingView;

@interface NTKRichComplicationRingProgressView
{
    double _curveWidth;	// 8 = 0x8
    NTKRichComplicationRingView *_backgroundView;	// 16 = 0x10
    NTKRichComplicationRingView *_foregroundView;	// 24 = 0x18
    _Bool _clockwise;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001afe7f
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
- (id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 forDevice:(id)arg4;	// IMP=0x00000000001afcf7

@end

