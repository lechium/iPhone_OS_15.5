//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKLineSeries;

@interface _HKAudioVisibleRangeQuantityContextDelegate
{
    HKLineSeries *_audioOverlayLineSeries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e40bd
@property(readonly, nonatomic) HKLineSeries *audioOverlayLineSeries; // @synthesize audioOverlayLineSeries=_audioOverlayLineSeries;
- (id)formatterForTimescope:(long long)arg1;	// IMP=0x00000000000e40a4
- (void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e3ed8
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;	// IMP=0x00000000000e3d69
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;	// IMP=0x00000000000e39f5
- (id)alternateLineSeries;	// IMP=0x00000000000e39e3
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;	// IMP=0x00000000000e3986

@end
