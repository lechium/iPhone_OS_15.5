//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKAxisLabelDimension-Protocol.h>

@interface _HKAudiogramFrequencyAxisDimension : NSObject <HKAxisLabelDimension>
{
}

- (id)stringForLocation:(id)arg1;	// IMP=0x00000000002816e8
- (void)setStepSizeForLabels:(double)arg1;	// IMP=0x00000000002816e2
- (double)ticksPerStepSize:(double)arg1;	// IMP=0x00000000002816d9
- (double)niceStepSizeLargerThan:(double)arg1;	// IMP=0x00000000002816cb

@end
