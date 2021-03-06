//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NTKSolarRichComplicationCircularViewColorPoint : NSObject
{
    UIColor *_color1;	// 8 = 0x8
    UIColor *_color2;	// 16 = 0x10
    UIColor *_color3;	// 24 = 0x18
    double _position1;	// 32 = 0x20
    double _position2;	// 40 = 0x28
    double _position3;	// 48 = 0x30
    double _progress;	// 56 = 0x38
}

+ (id)allPoints;	// IMP=0x000000000007c316
+ (id)pointWithColor1:(id)arg1 color2:(id)arg2 color3:(id)arg3 position1:(double)arg4 position2:(double)arg5 position3:(double)arg6 progress:(double)arg7;	// IMP=0x000000000007c228
- (void).cxx_destruct;	// IMP=0x000000000007ce5a
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) double position3; // @synthesize position3=_position3;
@property(readonly, nonatomic) double position2; // @synthesize position2=_position2;
@property(readonly, nonatomic) double position1; // @synthesize position1=_position1;
@property(readonly, nonatomic) UIColor *color3; // @synthesize color3=_color3;
@property(readonly, nonatomic) UIColor *color2; // @synthesize color2=_color2;
@property(readonly, nonatomic) UIColor *color1; // @synthesize color1=_color1;

@end

