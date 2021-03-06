//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PTRenderEffectNetwork : NSObject
{
    long long _frameIndex;	// 8 = 0x8
}

@property long long frameIndex; // @synthesize frameIndex=_frameIndex;
- (void)bindColorInputResource:(struct __CVBuffer *)arg1;	// IMP=0x000000000002ec18
- (_Bool)rotated;	// IMP=0x000000000002ec10
- (void)reset;	// IMP=0x000000000002ebcf
- (unsigned int)executeNetwork;	// IMP=0x000000000002eb89
- (id)outDisparity;	// IMP=0x000000000002eb46
- (id)inRGBA;	// IMP=0x000000000002eb03
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 colorSize:(CDStruct_da2e99ad)arg3 effectUtil:(id)arg4 util:(id)arg5;	// IMP=0x000000000002eabd

@end

