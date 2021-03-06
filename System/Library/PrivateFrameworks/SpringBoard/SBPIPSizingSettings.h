//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBPIPSizingSettings : PTSettings
{
    double _landcapeAspectRatioClosedIntervalLowerBound;	// 8 = 0x8
    double _landcapeAspectRatioClosedIntervalUpperBound;	// 16 = 0x10
    double _portraitAspectRatioClosedIntervalLowerBound;	// 24 = 0x18
    double _portraitAspectRatioClosedIntervalUpperBound;	// 32 = 0x20
    double _squareAspectRatioClosedIntervalLowerBound;	// 40 = 0x28
    double _squareAspectRatioClosedIntervalUpperBound;	// 48 = 0x30
}

+ (id)settingsControllerModule;	// IMP=0x000000000067f377
@property(nonatomic) double squareAspectRatioClosedIntervalUpperBound; // @synthesize squareAspectRatioClosedIntervalUpperBound=_squareAspectRatioClosedIntervalUpperBound;
@property(nonatomic) double squareAspectRatioClosedIntervalLowerBound; // @synthesize squareAspectRatioClosedIntervalLowerBound=_squareAspectRatioClosedIntervalLowerBound;
@property(nonatomic) double portraitAspectRatioClosedIntervalUpperBound; // @synthesize portraitAspectRatioClosedIntervalUpperBound=_portraitAspectRatioClosedIntervalUpperBound;
@property(nonatomic) double portraitAspectRatioClosedIntervalLowerBound; // @synthesize portraitAspectRatioClosedIntervalLowerBound=_portraitAspectRatioClosedIntervalLowerBound;
@property(nonatomic) double landcapeAspectRatioClosedIntervalUpperBound; // @synthesize landcapeAspectRatioClosedIntervalUpperBound=_landcapeAspectRatioClosedIntervalUpperBound;
@property(nonatomic) double landcapeAspectRatioClosedIntervalLowerBound; // @synthesize landcapeAspectRatioClosedIntervalLowerBound=_landcapeAspectRatioClosedIntervalLowerBound;
- (void)setDefaultValues;	// IMP=0x000000000067f2ce

@end

