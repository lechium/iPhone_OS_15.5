//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSDCurveFitter : NSObject
{
    double mErrorDistance;	// 8 = 0x8
    long long mErrorIterations;	// 16 = 0x10
}

+ (id)curveFitter;	// IMP=0x0000000000136738
@property(nonatomic) long long errorIterations; // @synthesize errorIterations=mErrorIterations;
@property(nonatomic) double errorDistance; // @synthesize errorDistance=mErrorDistance;
- (void)fitCurveToPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2 bezierCallback:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;	// IMP=0x0000000000136a0b
- (void)fitCurveToPoints:(id)arg1 bezierCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x0000000000136910
- (id)bezierPathFittingPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;	// IMP=0x00000000001368af
- (id)bezierPathFittingPoints:(id)arg1;	// IMP=0x000000000013679c
- (id)init;	// IMP=0x0000000000136752

@end

