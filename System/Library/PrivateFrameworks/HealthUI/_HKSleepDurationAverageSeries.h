//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _HKSleepDurationAverageSeries
{
    double _averageValue;	// 8 = 0x8
    NSString *_averageDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024d6f7
@property(copy, nonatomic) NSString *averageDescription; // @synthesize averageDescription=_averageDescription;
@property(nonatomic) double averageValue; // @synthesize averageValue=_averageValue;
- (void)drawOverlayInContext:(struct CGContext *)arg1 seriesOverlayData:(id)arg2;	// IMP=0x000000000024d38d
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;	// IMP=0x000000000024d0d8
- (long long)overlayType;	// IMP=0x000000000024d0cd
- (void)setAverageValue:(double)arg1 averageDescription:(id)arg2;	// IMP=0x000000000024d069
- (id)init;	// IMP=0x000000000024cffc

@end

