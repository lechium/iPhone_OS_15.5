//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMZoomControlUtilities : NSObject
{
}

+ (double)linearMappingForX:(double)arg1 x1:(double)arg2 y1:(double)arg3 x2:(double)arg4 y2:(double)arg5 clamp:(_Bool)arg6;	// IMP=0x000000000008c925
+ (double)piecewiseLinearMappingForX:(double)arg1 fromXValues:(id)arg2 toYValues:(id)arg3;	// IMP=0x000000000008c5fb
+ (double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4;	// IMP=0x000000000004aec3
+ (_Bool)shouldApplyContinuousZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 zoomFactors:(id *)arg4 displayZoomFactors:(id *)arg5;	// IMP=0x000000000008b54c
+ (_Bool)shouldEmulateWideDualCameraZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3;	// IMP=0x000000000008b3fd
+ (_Bool)shouldEmulateTripleCameraZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3;	// IMP=0x000000000008b288
+ (double)zoomScaleFromDevice:(long long)arg1 toDevice:(long long)arg2;	// IMP=0x000000000008ae4f
+ (_Bool)_shouldEmulateZoomSwitchingDualDevicesForMode:(long long)arg1;	// IMP=0x000000000008ae3e
+ (long long)deviceForEmulatingZoomFactor:(double)arg1 fromDevice:(long long)arg2 mode:(long long)arg3;	// IMP=0x000000000008abc4
+ (double)_zoomControlRadiusForZoomControl:(id)arg1 layoutSide:(long long)arg2 layoutStyle:(long long)arg3 width:(double)arg4 centerOfZoomControlInContainerBounds:(struct CGPoint)arg5 marginForZoomDiaFromEdge:(double)arg6;	// IMP=0x000000000008aa3f
+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBarAlignmentRect:(struct CGRect)arg3 bottomBarTransparent:(_Bool)arg4 shutterButtonAlignmentRect:(struct CGRect)arg5 previewViewAlignmentRect:(struct CGRect)arg6;	// IMP=0x000000000008a80f
+ (void)layoutZoomControl:(id)arg1 layoutSide:(long long)arg2 forLayoutStyle:(long long)arg3 width:(double)arg4 marginForZoomButtonFromEdge:(double)arg5 marginForZoomDialFromEdge:(double)arg6 zoomDialContentMaskingHeight:(double)arg7 centerOfZoomControlInContainerView:(struct CGPoint)arg8;	// IMP=0x000000000008a3b9
+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBar:(id)arg3 previewView:(id)arg4;	// IMP=0x000000000003d948

@end

