//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/AVReencodedVideoSettingsForFig-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAVVideoSettingsVideoOutputSettings <AVReencodedVideoSettingsForFig>
{
    NSDictionary *_adaptedVideoCompressionProperties;	// 16 = 0x10
    NSDictionary *_VTPixelAspectRatioDictionary;	// 24 = 0x18
    NSDictionary *_VTCleanApertureDictionary;	// 32 = 0x20
}

+ (_Bool)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id *)arg4;	// IMP=0x000000000010a982
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000010a946
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x000000000010a890
@property(readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property(readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property(readonly, nonatomic) unsigned int videoCodecType;
- (id)cleanApertureDictionary;	// IMP=0x000000000010c441
- (id)pixelAspectRatioDictionary;	// IMP=0x000000000010c430
- (int)height;	// IMP=0x000000000010c3e4
- (int)width;	// IMP=0x000000000010c398
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x000000000010c1f1
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x000000000010c01b
- (_Bool)willYieldCompressedSamples;	// IMP=0x000000000010c013
- (void)dealloc;	// IMP=0x000000000010bfad
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;	// IMP=0x000000000010be8c
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000010aec8

@end

