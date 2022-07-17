//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface AFLanguageDetectionUserContext : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_lidUserContext;	// 8 = 0x8
    unsigned int _userContextChangeBit;	// 16 = 0x10
    _Bool _simulateLanguageDetectorAssetsAvailability;	// 20 = 0x14
    NSArray *_simulatingLanguageCodes;	// 24 = 0x18
    NSArray *_finalDictationLanguages;	// 32 = 0x20
    NSMutableDictionary *_dictationLanguageMappingCache;	// 40 = 0x28
    _Bool _languageToggled;	// 48 = 0x30
    NSString *_currentKeyboard;	// 56 = 0x38
    NSString *_primaryLanguageCode;	// 64 = 0x40
    NSDictionary *_languageCodeOverrides;	// 72 = 0x48
    NSString *_prevMessageLanguage;	// 80 = 0x50
    NSString *_globalLastUsedKeyboard;	// 88 = 0x58
    NSArray *_multiLingualKeyboardLanguages;	// 96 = 0x60
    NSArray *_keyboardConvoRecentMessages;	// 104 = 0x68
    NSArray *_dictationLanguages;	// 112 = 0x70
    NSDictionary *_keyboardConversationLanguagePriors;	// 120 = 0x78
    NSDictionary *_keyboardGlobalLanguagePriors;	// 128 = 0x80
    NSNumber *_dictationInputOrigin;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003c3dc
+ (id)defaultContextWithPrimaryLanguage:(id)arg1;	// IMP=0x000000000003c155
- (void).cxx_destruct;	// IMP=0x000000000003e27a
@property(copy, nonatomic) NSNumber *dictationInputOrigin; // @synthesize dictationInputOrigin=_dictationInputOrigin;
@property(copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // @synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors;
@property(copy, nonatomic) NSDictionary *keyboardConversationLanguagePriors; // @synthesize keyboardConversationLanguagePriors=_keyboardConversationLanguagePriors;
@property(copy, nonatomic) NSArray *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property(copy, nonatomic) NSArray *keyboardConvoRecentMessages; // @synthesize keyboardConvoRecentMessages=_keyboardConvoRecentMessages;
@property(copy, nonatomic) NSArray *multiLingualKeyboardLanguages; // @synthesize multiLingualKeyboardLanguages=_multiLingualKeyboardLanguages;
@property(copy, nonatomic) NSString *globalLastUsedKeyboard; // @synthesize globalLastUsedKeyboard=_globalLastUsedKeyboard;
@property(copy, nonatomic) NSString *prevMessageLanguage; // @synthesize prevMessageLanguage=_prevMessageLanguage;
@property(nonatomic, getter=wasLanguageToggled, setter=setWasLanguageToggled:) _Bool languageToggled; // @synthesize languageToggled=_languageToggled;
@property(copy, nonatomic) NSDictionary *languageCodeOverrides; // @synthesize languageCodeOverrides=_languageCodeOverrides;
@property(copy, nonatomic) NSString *primaryLanguageCode; // @synthesize primaryLanguageCode=_primaryLanguageCode;
@property(copy, nonatomic) NSString *currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
- (id)simulatingLanguageCodes;	// IMP=0x000000000003e1b1
- (void)setSimulatingLanguageCodes:(id)arg1;	// IMP=0x000000000003e14d
- (_Bool)shouldSimulateLanguageDetectorAssetsAvailability;	// IMP=0x000000000003e129
- (void)setShouldSimulateLanguageDetectorAssetsAvailability:(_Bool)arg1;	// IMP=0x000000000003e10a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003dfb2
- (id)finalFilteredDictationLanguages;	// IMP=0x000000000003dfa4
- (id)userContextLanguageCodeForKeyboardLangauge:(id)arg1 overrideLanguageCode:(id)arg2;	// IMP=0x000000000003de19
- (id)getDictationLanguagesForSupportedLocales:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003d945
- (id)getContextForAnalytics;	// IMP=0x000000000003d8a0
- (id)languageDetectorUserContext;	// IMP=0x000000000003d3b2
- (id)context;	// IMP=0x000000000003d25e
- (void)_setDictationLanguageCodeMappingCache:(id)arg1;	// IMP=0x000000000003d231
- (void)_setFinalFilteredDictationLanguages:(id)arg1;	// IMP=0x000000000003d204
- (void)_setLanguageDetectorContext:(id)arg1;	// IMP=0x000000000003d1d7
- (void)_setUserContextChangeBit:(unsigned int)arg1;	// IMP=0x000000000003d1ce
- (unsigned int)languageDetectorContextChangeBits;	// IMP=0x000000000003d1c5
- (_Bool)isUpdateAvailableForLanguageDetectorContext;	// IMP=0x000000000003d1b8
- (id)priorsByReplacingKeyboardLanguage:(id)arg1;	// IMP=0x000000000003cf7c
- (id)getSiriDictationLanguagesFromLanguages:(id)arg1;	// IMP=0x000000000003ce0d
- (id)siriDictationLanguageForLanguage:(id)arg1;	// IMP=0x000000000003cdf9
- (void)_setContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;	// IMP=0x000000000003cbf9
- (void)_updateContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;	// IMP=0x000000000003cb64
- (void)_removeContextValueForKey:(id)arg1 context:(id)arg2;	// IMP=0x000000000003cb48
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003c58d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003c3e4
- (id)description;	// IMP=0x000000000003c2be
- (id)init;	// IMP=0x000000000003c242

@end
