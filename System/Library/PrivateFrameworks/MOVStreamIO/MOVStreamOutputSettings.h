//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MOVStreamEncoderConfig, NSDictionary;

@interface MOVStreamOutputSettings : NSObject
{
    _Bool _useCustomEncoderConfig;	// 8 = 0x8
    NSDictionary *_settings;	// 16 = 0x10
    MOVStreamEncoderConfig *_config;	// 24 = 0x18
    double _expectedFrameRate;	// 32 = 0x20
}

+ (int)matchDeprecatedType:(int)arg1;	// IMP=0x000000000003517b
+ (unsigned long long)applyBitrateModifiersTo:(unsigned long long)arg1;	// IMP=0x000000000003507e
+ (unsigned long long)getBitsPerSecondForColorStream:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000034f13
+ (id)slimSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000034c90
+ (id)h264Settings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x00000000000348f5
+ (id)hevc8bitWithAlphaSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000034543
+ (id)hevc8bitWithAlphaLosslessSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x00000000000341f9
+ (id)hevcColorSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000033e5e
+ (id)hevc8bitMonochromeSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000033a88
+ (id)hevc8bitMonochromeLosslessSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x00000000000336b9
+ (id)hevcColorLosslessSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x000000000003338e
+ (id)hevc10bitMonochromeSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x00000000000332ec
+ (id)hevc10bitMonochromeLosslessSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000032eac
+ (id)prores422Settings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000032c4c
+ (id)prores4444Settings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x00000000000329c3
+ (id)audioSettings:(struct StreamRecordingData *)arg1;	// IMP=0x0000000000032825
+ (id)customEncoderSettings:(struct StreamRecordingData *)arg1 frameRate:(double)arg2;	// IMP=0x0000000000032778
+ (id)outputSettingsForStream:(struct StreamRecordingData *)arg1 defaultFrameRate:(double)arg2;	// IMP=0x0000000000032392
- (void).cxx_destruct;	// IMP=0x00000000000351dc
@property(readonly) double expectedFrameRate; // @synthesize expectedFrameRate=_expectedFrameRate;
@property(readonly) _Bool useCustomEncoderConfig; // @synthesize useCustomEncoderConfig=_useCustomEncoderConfig;
@property(readonly) MOVStreamEncoderConfig *config; // @synthesize config=_config;
@property(readonly) NSDictionary *settings; // @synthesize settings=_settings;
- (id)initWithFrameRate:(double)arg1 useCustomEncoderConfig:(_Bool)arg2;	// IMP=0x000000000003235f
- (id)initWithFrameRate:(double)arg1;	// IMP=0x0000000000032330
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000000322be
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000032250
- (id)init;	// IMP=0x00000000000321e4

@end
