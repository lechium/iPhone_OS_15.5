//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/AVDecodedAudioSettingsForFig-Protocol.h>
#import <AVFCore/AVReencodedAudioSettingsForFig-Protocol.h>

__attribute__((visibility("hidden")))
@interface AVAVAudioSettingsAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
{
}

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000010696e
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x0000000000106899
- (id)audioOptions;	// IMP=0x0000000000108ae0
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;	// IMP=0x0000000000108928
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x0000000000107fe8
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x0000000000107d37
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x0000000000107c3c
- (_Bool)willYieldCompressedSamples;	// IMP=0x0000000000107bf5
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;	// IMP=0x0000000000107be1
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x00000000001069aa

@end
