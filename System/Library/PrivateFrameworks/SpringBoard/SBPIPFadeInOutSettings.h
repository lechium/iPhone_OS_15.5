//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBPIPFadeInOutSettings : PTSettings
{
    SBFAnimationSettings *_fadeInOutAnimationSettings;	// 8 = 0x8
    double _fadeInInitialScale;	// 16 = 0x10
    double _fadeInInitialOpacity;	// 24 = 0x18
    double _fadeInInitialBlurRadius;	// 32 = 0x20
    double _fadeOutFinalScale;	// 40 = 0x28
    double _fadeOutFinalOpacity;	// 48 = 0x30
    double _fadeOutFinalBlurRadius;	// 56 = 0x38
}

+ (id)settingsControllerModule;	// IMP=0x000000000067c1d8
+ (_Bool)ignoresKey:(id)arg1;	// IMP=0x000000000067c177
- (void).cxx_destruct;	// IMP=0x000000000067c755
@property(nonatomic) double fadeOutFinalBlurRadius; // @synthesize fadeOutFinalBlurRadius=_fadeOutFinalBlurRadius;
@property(nonatomic) double fadeOutFinalOpacity; // @synthesize fadeOutFinalOpacity=_fadeOutFinalOpacity;
@property(nonatomic) double fadeOutFinalScale; // @synthesize fadeOutFinalScale=_fadeOutFinalScale;
@property(nonatomic) double fadeInInitialBlurRadius; // @synthesize fadeInInitialBlurRadius=_fadeInInitialBlurRadius;
@property(nonatomic) double fadeInInitialOpacity; // @synthesize fadeInInitialOpacity=_fadeInInitialOpacity;
@property(nonatomic) double fadeInInitialScale; // @synthesize fadeInInitialScale=_fadeInInitialScale;
@property(retain, nonatomic) SBFAnimationSettings *fadeInOutAnimationSettings; // @synthesize fadeInOutAnimationSettings=_fadeInOutAnimationSettings;
@property(readonly, nonatomic) CDStruct_39925896 fadeOutFinalValues;
@property(readonly, nonatomic) CDStruct_39925896 fadeInInitialValues;
- (void)setDefaultValues;	// IMP=0x000000000067bffc

@end

