//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REAppUsagePredictorProperties-Protocol.h>

@class RETimeline;

@interface REAppUsagePredictor <REAppUsagePredictorProperties>
{
    RETimeline *_timeline;	// 8 = 0x8
}

+ (double)updateInterval;	// IMP=0x0000000000017c70
+ (id)supportedFeatures;	// IMP=0x0000000000017baa
- (void).cxx_destruct;	// IMP=0x0000000000018041
@property(readonly, nonatomic) RETimeline *timeline;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;	// IMP=0x0000000000017ea1
- (void)update;	// IMP=0x0000000000017c7e

@end

