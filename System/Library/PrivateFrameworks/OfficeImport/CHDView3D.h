//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDView3D : NSObject
{
    int mRotationX;	// 8 = 0x8
    int mRotationY;	// 12 = 0xc
    int mDepthPercent;	// 16 = 0x10
    int mGapDepthPercent;	// 20 = 0x14
    int mHeightPercent;	// 24 = 0x18
    int mPerspective;	// 28 = 0x1c
    _Bool mRightAngleAxes;	// 32 = 0x20
    _Bool mCluster;	// 33 = 0x21
    _Bool mAutoscale;	// 34 = 0x22
}

- (id)description;	// IMP=0x00000000003974e1
- (void)setAutoscale:(_Bool)arg1;	// IMP=0x00000000001e4dbe
- (_Bool)isAutoscale;	// IMP=0x00000000003974d8
- (void)setCluster:(_Bool)arg1;	// IMP=0x00000000001e4dd6
- (_Bool)isCluster;	// IMP=0x00000000003974cf
- (void)setRightAngleAxes:(_Bool)arg1;	// IMP=0x00000000001e4d8c
- (_Bool)isRightAngleAxes;	// IMP=0x00000000003974c6
- (void)setPerspective:(int)arg1;	// IMP=0x00000000001e4d77
- (int)perspective;	// IMP=0x00000000003974bd
- (void)setHeightPercent:(int)arg1;	// IMP=0x00000000001e4da7
- (int)heightPercent;	// IMP=0x00000000003974b4
- (void)setGapDepthPercent:(int)arg1;	// IMP=0x00000000001e4d9e
- (int)gapDepthPercent;	// IMP=0x00000000003974ab
- (void)setDepthPercent:(int)arg1;	// IMP=0x00000000001e4d95
- (int)depthPercent;	// IMP=0x00000000003974a2
- (void)setRotationX:(int)arg1;	// IMP=0x00000000001e4d65
- (int)rotationX;	// IMP=0x0000000000397499
- (void)setRotationY:(int)arg1;	// IMP=0x00000000001e4d6e
- (int)rotationY;	// IMP=0x0000000000397490
- (id)init;	// IMP=0x00000000001e4d0e

@end
