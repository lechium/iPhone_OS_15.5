//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding>
{
    _Bool _shouldUseTextReplacements;	// 8 = 0x8
    _Bool _enableCachingIfAvailable;	// 9 = 0x9
    _Bool _enableGen2ModelIfAvailable;	// 10 = 0xa
    _Bool _enableGen2CharacterLMIfAvailable;	// 11 = 0xb
    _Bool _hasBeenSubmitted;	// 12 = 0xc
    int _recognitionMode;	// 16 = 0x10
    int _contentType;	// 20 = 0x14
    int _autoCapitalizationMode;	// 24 = 0x18
    int _autoCorrectionMode;	// 28 = 0x1c
    NSArray *_locales;	// 32 = 0x20
    NSDictionary *_activeCharacterSetPerLocale;	// 40 = 0x28
    unsigned long long _maxRecognitionResultCount;	// 48 = 0x30
    NSDictionary *_options;	// 56 = 0x38
    CHDrawing *_drawing;	// 64 = 0x40
    long long _priority;	// 72 = 0x48
    struct CGSize _minimumDrawingSize;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000091470
- (void).cxx_destruct;	// IMP=0x0000000000092fa0
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool hasBeenSubmitted; // @synthesize hasBeenSubmitted=_hasBeenSubmitted;
@property(nonatomic) _Bool enableGen2CharacterLMIfAvailable; // @synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable;
@property(nonatomic) _Bool enableGen2ModelIfAvailable; // @synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable;
@property(nonatomic) _Bool enableCachingIfAvailable; // @synthesize enableCachingIfAvailable=_enableCachingIfAvailable;
@property(nonatomic) _Bool shouldUseTextReplacements; // @synthesize shouldUseTextReplacements=_shouldUseTextReplacements;
@property(copy, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property(nonatomic) int autoCorrectionMode; // @synthesize autoCorrectionMode=_autoCorrectionMode;
@property(nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
@property(nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property(copy, nonatomic) NSDictionary *activeCharacterSetPerLocale; // @synthesize activeCharacterSetPerLocale=_activeCharacterSetPerLocale;
@property(copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
- (id)description;	// IMP=0x0000000000092a70
- (unsigned long long)hash;	// IMP=0x00000000000927b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000092730
- (_Bool)isEqualToRemoteRecognitionRequest:(id)arg1;	// IMP=0x0000000000092140
- (id)recognizerConfigurationKeyWithLocale:(id)arg1;	// IMP=0x0000000000091480
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000091240
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000090b70
- (id)initWithLocales:(id)arg1 recognitionMode:(int)arg2 drawing:(id)arg3 options:(id)arg4 priority:(long long)arg5;	// IMP=0x00000000000908b0

@end

