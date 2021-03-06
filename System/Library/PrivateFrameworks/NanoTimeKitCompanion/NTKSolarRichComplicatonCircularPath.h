//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKSolarRichComplicatonCircularPath : NSObject
{
}

+ (id)_cachedSolarPathKeyForDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7;	// IMP=0x000000000014b914
+ (id)_cachedSolarPathForDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7 cacheMissBlock:(CDUnknownBlockType)arg8;	// IMP=0x000000000014b834
+ (id)_solarPathCache;	// IMP=0x000000000014b7df
+ (id)pathWithDiameter:(double)arg1 horizonLineTop:(double)arg2 horizonLineHeight:(double)arg3 maxCurveHeight:(double)arg4 solarTimeModel:(id)arg5 sunriseWaypoint:(id)arg6 sunsetWayPoint:(id)arg7;	// IMP=0x000000000014b296

@end

