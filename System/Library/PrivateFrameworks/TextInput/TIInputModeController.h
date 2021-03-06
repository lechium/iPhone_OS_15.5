//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TIInputModeController : NSObject
{
    NSArray *_supportedInputModeIdentifiers;	// 8 = 0x8
    NSArray *_supportedInputModeLanguageAndRegions;	// 16 = 0x10
    NSString *currentLocale;	// 24 = 0x18
    NSArray *preferredLanguages;	// 32 = 0x20
    NSArray *enabledInputModes;	// 40 = 0x28
    NSArray *defaultInputModes;	// 48 = 0x30
    NSArray *inputModesForTesting;	// 56 = 0x38
}

+ (id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020ade
+ (id)sharedInputModeController;	// IMP=0x0000000000020a7b
- (void).cxx_destruct;	// IMP=0x0000000000020995
@property(copy, nonatomic) NSArray *inputModesForTesting; // @synthesize inputModesForTesting;
@property(copy, nonatomic) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property(copy, nonatomic) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property(copy, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages;
@property(copy, nonatomic) NSString *currentLocale; // @synthesize currentLocale;
- (id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1;	// IMP=0x000000000002090b
- (id)suggestedDictationLanguagesForDeviceLanguage;	// IMP=0x0000000000020901
- (id)suggestedDictationLanguageForDeviceLanguage;	// IMP=0x00000000000208ba
- (_Bool)identifierIsValidSystemInputMode:(id)arg1;	// IMP=0x0000000000020790
@property(readonly) NSArray *enabledInputModeIdentifiers;
@property(readonly) NSArray *supportedInputModeLanguageAndRegions;
@property(readonly) NSArray *supportedInputModeIdentifiers;
- (id)defaultEnabledInputModesForCurrentLocale;	// IMP=0x000000000001f8c4
- (void)setInputModeIdentifiersForTesting:(id)arg1;	// IMP=0x0000000000021214

@end

