//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKKeylineImageFactory : NSObject
{
}

+ (id)_smileKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 angle:(double)arg4 strokeWidth:(double)arg5 filled:(_Bool)arg6;	// IMP=0x0000000000240ef0
+ (id)smileKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 angle:(double)arg4 strokeWidth:(double)arg5 filled:(_Bool)arg6;	// IMP=0x0000000000240d3f
+ (id)heartKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 sideComplicationDistance:(double)arg4 topComplicationDistance:(double)arg5 strokeWidth:(double)arg6 filled:(_Bool)arg7;	// IMP=0x0000000000240d0a
+ (id)_heartKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 sideCircleRadius:(double)arg4 topCircleRadius:(double)arg5 strokeWidth:(double)arg6 filled:(_Bool)arg7;	// IMP=0x000000000024097e
+ (id)heartKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 sideCircleRadius:(double)arg4 topCircleRadius:(double)arg5 strokeWidth:(double)arg6 filled:(_Bool)arg7;	// IMP=0x00000000002407be
+ (id)_cornerKeylineWithDevice:(id)arg1 size:(struct CGSize)arg2 innerCircleRadius:(double)arg3 strokeWidth:(double)arg4 filled:(_Bool)arg5;	// IMP=0x000000000023ff61
+ (id)cornerKeylineWithDevice:(id)arg1 corner:(unsigned long long)arg2 size:(struct CGSize)arg3 innerCircleRadius:(double)arg4 strokeWidth:(double)arg5 filled:(_Bool)arg6;	// IMP=0x000000000023fc44

@end

