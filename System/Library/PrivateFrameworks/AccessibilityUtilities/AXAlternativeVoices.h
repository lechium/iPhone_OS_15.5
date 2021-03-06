//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXAlternativeVoices : NSObject
{
    NSMutableDictionary *_voiceClassesMap;	// 8 = 0x8
    NSMutableDictionary *_voiceNameMap;	// 16 = 0x10
}

+ (_Bool)supportsAlex;	// IMP=0x00000000000a4887
+ (_Bool)supportsSiri;	// IMP=0x00000000000a4876
+ (id)sharedInstance;	// IMP=0x00000000000a4238
+ (_Bool)inUnitTestMode;	// IMP=0x00000000000a422c
+ (void)setInUnitTestMode:(_Bool)arg1;	// IMP=0x00000000000a4220
- (void).cxx_destruct;	// IMP=0x00000000000a543f
@property(retain, nonatomic) NSMutableDictionary *voiceNameMap; // @synthesize voiceNameMap=_voiceNameMap;
@property(retain, nonatomic) NSMutableDictionary *voiceClassesMap; // @synthesize voiceClassesMap=_voiceClassesMap;
- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;	// IMP=0x00000000000a5349
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3;	// IMP=0x00000000000a52d3
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;	// IMP=0x00000000000a50f3
- (id)nameForVoiceIdentifier:(id)arg1;	// IMP=0x00000000000a4c94
- (_Bool)isAlexAvailableForLanguage:(id)arg1;	// IMP=0x00000000000a4c3b
- (_Bool)isNeuralSiriVoiceIdentifier:(id)arg1;	// IMP=0x00000000000a4c1c
- (_Bool)isSiriVoiceIdentifier:(id)arg1;	// IMP=0x00000000000a4bfd
- (_Bool)isCombinedVocalizerVoiceIdentifier:(id)arg1;	// IMP=0x00000000000a4b68
- (_Bool)isCompactVocalizerVoiceIdentifier:(id)arg1;	// IMP=0x00000000000a494a
- (_Bool)isVocalizerVoiceIdentifier:(id)arg1;	// IMP=0x00000000000a48ca
- (_Bool)isOldSiriVoiceIdentifier:(id)arg1;	// IMP=0x00000000000a48ab
- (_Bool)isAlternativeVoice:(id)arg1;	// IMP=0x00000000000a488f

@end

