//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@interface UIColor (MKAdditions)
+ (id)_mapkit_colorNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000003847a
+ (id)_mapkit_colorNamed:(id)arg1;	// IMP=0x0000000000038466
+ (id)_mapkit_userLocationAccuracyRingFillColor;	// IMP=0x000000000003816d
+ (id)_mapkit_userLocationAccuracyRingStrokeColorSatellite;	// IMP=0x00000000000380d2
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;	// IMP=0x000000000003806a
+ (id)_mapkit_colorForTransitLine:(id)arg1;	// IMP=0x00000000000e8b43
+ (_Bool)_maps_getRed:(out double *)arg1 green:(out double *)arg2 blue:(out double *)arg3 fromHue:(double)arg4 saturation:(double)arg5 value:(double)arg6;	// IMP=0x000000000026ccda
+ (_Bool)_getColorComponent:(double *)arg1 fromSubString:(id)arg2;	// IMP=0x000000000026cc48
+ (id)_maps_colorFromHexString:(id)arg1;	// IMP=0x000000000026c9ac
- (id)_mapkit_blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;	// IMP=0x0000000000038304
- (_Bool)_mapkit_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x0000000000038273
- (_Bool)_mapkit_isWhite;	// IMP=0x00000000000381da
- (id)_maps_hexString;	// IMP=0x000000000026ce3c
@end

