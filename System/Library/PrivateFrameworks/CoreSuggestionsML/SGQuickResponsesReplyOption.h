//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SGQuickResponsesReplyOption : NSObject
{
    NSNumber *_position;	// 8 = 0x8
    NSNumber *_ucb;	// 16 = 0x10
}

+ (id)imputedDisplayedForRecords:(id)arg1 config:(id)arg2;	// IMP=0x000000000000a4d0
+ (double)totalDisplayedCountForRecords:(id)arg1;	// IMP=0x000000000000a361
+ (id)sortedReplyOptionsForRecords:(id)arg1 config:(id)arg2;	// IMP=0x000000000000a16f
+ (double)ucbCombinedForSelected:(double)arg1 displayed:(double)arg2 actualOptionsDisplayed:(double)arg3 matched:(double)arg4 imputedDisplayed:(double)arg5 imputedOptionsDisplayed:(double)arg6 explorationFactor:(double)arg7;	// IMP=0x000000000000a0bd
+ (double)ucbCombinedWithMeanA:(double)arg1 meanB:(double)arg2 varianceA:(double)arg3 varianceB:(double)arg4 explorationFactor:(double)arg5;	// IMP=0x000000000000a03d
+ (double)ucbWithMean:(double)arg1 varianceOfMean:(double)arg2 explorationFactor:(double)arg3;	// IMP=0x000000000000a01f
+ (double)ucbTunedVarianceForMean:(double)arg1 displayed:(double)arg2 totalDisplayed:(double)arg3;	// IMP=0x0000000000009fc8
- (void).cxx_destruct;	// IMP=0x0000000000009fa0
@property(readonly, nonatomic) NSNumber *ucb; // @synthesize ucb=_ucb;
@property(readonly, nonatomic) NSNumber *position; // @synthesize position=_position;
- (long long)compare:(id)arg1;	// IMP=0x0000000000009e6a
- (id)initWithPosition:(unsigned long long)arg1 records:(id)arg2 actualOptionsDisplayedCount:(double)arg3 imputedOptionsDisplayedCount:(double)arg4 imputedOptionsDisplayed:(id)arg5 config:(id)arg6;	// IMP=0x0000000000009c2f

@end
