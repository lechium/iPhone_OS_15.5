//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthPlatformCore/RERelevanceEngineMetricsRecorder-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC18HealthPlatformCore35RelevanceEngineMetricsBlockRecorder : NSObject <RERelevanceEngineMetricsRecorder>
{
    MISSING_TYPE *callback;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005c3f0
- (id)init;	// IMP=0x000000000005c370
- (_Bool)ignoreValidMetricCheck;	// IMP=0x000000000005c360
- (void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;	// IMP=0x000000000005c2a0

@end

