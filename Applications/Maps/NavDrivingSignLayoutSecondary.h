//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NavDrivingSignLayoutSecondary
{
}

+ (id)sharedDrivingSecondarySignLayout;	// IMP=0x0040000000a0efaf
- (long long)maneuverViewPositionForSign:(id)arg1;	// IMP=0x0040000000a0f15a
- (CDStruct_092aca68)maneuverViewArrowMetricsForSign:(id)arg1;	// IMP=0x0010000000a0f0c7
- (_Bool)forceHideShieldViewForSign:(id)arg1;	// IMP=0x0010000000a0f0bf
- (struct CGSize)maneuverViewSizeForSign:(id)arg1;	// IMP=0x0010000000a0f0a9
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;	// IMP=0x0010000000a0f09b
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000a0f08d
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000a0f07f
- (long long)navSignView:(id)arg1 inlineShieldSizeForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0f074
- (long long)navSignView:(id)arg1 maxNumberOfTotalLinesForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0f069
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithLongestAlternativeForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0f05e
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithPreferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0f053
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0f01a
- (_Bool)navSignView:(id)arg1 shouldAlignToLeadingForMajorText:(_Bool)arg2;	// IMP=0x0010000000a0f012
- (double)minimumHeightForSign:(id)arg1;	// IMP=0x0010000000a0f004

@end
