//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorSettings : PTSettings
{
    _Bool _customColor;	// 8 = 0x8
    double _fullLoopDuration;	// 16 = 0x10
    double _redValue;	// 24 = 0x18
    double _greenValue;	// 32 = 0x20
    double _blueValue;	// 40 = 0x28
    double _alphaValue;	// 48 = 0x30
}

+ (id)settingsControllerModule;	// IMP=0x0000000000920534
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
@property(nonatomic) double blueValue; // @synthesize blueValue=_blueValue;
@property(nonatomic) double greenValue; // @synthesize greenValue=_greenValue;
@property(nonatomic) double redValue; // @synthesize redValue=_redValue;
@property(nonatomic) _Bool customColor; // @synthesize customColor=_customColor;
@property(nonatomic) double fullLoopDuration; // @synthesize fullLoopDuration=_fullLoopDuration;
- (void)setDefaultValues;	// IMP=0x0000000000920480

@end
