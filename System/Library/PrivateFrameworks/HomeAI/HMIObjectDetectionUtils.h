//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HMIObjectDetectionUtils : NSObject
{
}

+ (id)convertObjectDetections:(id)arg1 cropRect:(struct CGRect)arg2 originalImageSize:(struct CGSize)arg3;	// IMP=0x0000000000033896
+ (void)nmsMultiClass:(id)arg1 output:(id)arg2 nmsConfiguration:(id)arg3;	// IMP=0x0000000000033318
+ (void)nonMaximumSuppression:(id)arg1 output:(id)arg2 withThreshold:(double)arg3 withMetric:(long long)arg4;	// IMP=0x0000000000032d58
+ (float)intersectionOverMinArea:(struct CGRect)arg1 b:(struct CGRect)arg2;	// IMP=0x0000000000032d4e
+ (float)intersectionOverUnion:(struct CGRect)arg1 b:(struct CGRect)arg2;	// IMP=0x0000000000032d44

@end
