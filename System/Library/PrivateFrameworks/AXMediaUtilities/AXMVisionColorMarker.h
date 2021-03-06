//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AXMVisionColorMarker
{
    NSString *_localizedName;	// 16 = 0x10
}

+ (id)closestMarkerToColor:(id)arg1 withMaximumThreshold:(double)arg2;	// IMP=0x0000000000029081
+ (id)allColorMarkers;	// IMP=0x00000000000284c6
+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 localizedName:(id)arg4;	// IMP=0x000000000002842e
- (void).cxx_destruct;	// IMP=0x00000000000294f0
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (id)description;	// IMP=0x000000000002941c

@end

