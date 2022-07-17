//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKChartPointRangeBuilder : NSObject
{
    double _uMax;	// 8 = 0x8
    double _uMin;	// 16 = 0x10
    double _vMax;	// 24 = 0x18
    double _vMin;	// 32 = 0x20
    double _maximumMax;	// 40 = 0x28
    double _minimumMin;	// 48 = 0x30
    long long _numChartPoints;	// 56 = 0x38
}

@property(nonatomic) long long numChartPoints; // @synthesize numChartPoints=_numChartPoints;
@property(nonatomic) double minimumMin; // @synthesize minimumMin=_minimumMin;
@property(nonatomic) double maximumMax; // @synthesize maximumMax=_maximumMax;
@property(nonatomic) double vMin; // @synthesize vMin=_vMin;
@property(nonatomic) double vMax; // @synthesize vMax=_vMax;
@property(nonatomic) double uMin; // @synthesize uMin=_uMin;
@property(nonatomic) double uMax; // @synthesize uMax=_uMax;
- (void)visitChartPoint:(id)arg1;	// IMP=0x000000000025dd28
- (id)suggestedValueRangeWithRounding:(_Bool)arg1;	// IMP=0x000000000025dbe8
- (id)init;	// IMP=0x000000000025dba9

@end
