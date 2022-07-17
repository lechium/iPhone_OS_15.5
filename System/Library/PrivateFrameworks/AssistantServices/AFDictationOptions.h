//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFLanguageDetectionUserContext, NSArray, NSDictionary, NSString, NSURL, STSiriContext;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _forceOfflineRecognition;	// 8 = 0x8
    _Bool _preferOnlineRecognition;	// 9 = 0x9
    _Bool _detectUtterances;	// 10 = 0xa
    _Bool _continuousListening;	// 11 = 0xb
    _Bool _shouldHandleCapitalization;	// 12 = 0xc
    _Bool _preferOnDeviceRecognition;	// 13 = 0xd
    _Bool _secureOfflineOnly;	// 14 = 0xe
    _Bool _farField;	// 15 = 0xf
    _Bool _releaseAudioSessionOnRecordingCompletion;	// 16 = 0x10
    _Bool _incremental;	// 17 = 0x11
    NSString *_applicationName;	// 24 = 0x18
    NSString *_applicationDisplayName;	// 32 = 0x20
    NSString *_applicationVersion;	// 40 = 0x28
    STSiriContext *_context;	// 48 = 0x30
    NSString *_fieldLabel;	// 56 = 0x38
    NSString *_fieldIdentifier;	// 64 = 0x40
    NSString *_interactionIdentifier;	// 72 = 0x48
    NSString *_requestIdentifier;	// 80 = 0x50
    long long _keyboardType;	// 88 = 0x58
    NSString *_prefixText;	// 96 = 0x60
    NSString *_postfixText;	// 104 = 0x68
    NSString *_selectedText;	// 112 = 0x70
    long long _returnKeyType;	// 120 = 0x78
    long long _transcriptionMode;	// 128 = 0x80
    NSArray *_inlineItemList;	// 136 = 0x88
    NSString *_microphoneIdentifier;	// 144 = 0x90
    NSString *_orthography;	// 152 = 0x98
    NSString *_keyboardIdentifier;	// 160 = 0xa0
    NSString *_languageCodeOverride;	// 168 = 0xa8
    NSString *_offlineLanguage;	// 176 = 0xb0
    long long _voiceSearchTypeOptions;	// 184 = 0xb8
    NSDictionary *_voiceSearchHeaderFields;	// 192 = 0xc0
    NSDictionary *_voiceSearchQueryParameters;	// 200 = 0xc8
    NSDictionary *_voiceTriggerEventInfo;	// 208 = 0xd0
    double _maximumRecognitionDuration;	// 216 = 0xd8
    long long _taskHint;	// 224 = 0xe0
    NSURL *_originalAudioFileURL;	// 232 = 0xe8
    NSDictionary *_recognitionOverrides;	// 240 = 0xf0
    NSURL *_modelOverrideURL;	// 248 = 0xf8
    AFLanguageDetectionUserContext *_languageDetectionUserContext;	// 256 = 0x100
    long long _dictationInputOrigin;	// 264 = 0x108
    NSString *_samplingInfo;	// 272 = 0x110
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a4056
- (void).cxx_destruct;	// IMP=0x00000000000a58c1
@property(copy, nonatomic) NSString *samplingInfo; // @synthesize samplingInfo=_samplingInfo;
@property(nonatomic) long long dictationInputOrigin; // @synthesize dictationInputOrigin=_dictationInputOrigin;
@property(copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext; // @synthesize languageDetectionUserContext=_languageDetectionUserContext;
@property(copy, nonatomic) NSURL *modelOverrideURL; // @synthesize modelOverrideURL=_modelOverrideURL;
@property(copy, nonatomic) NSDictionary *recognitionOverrides; // @synthesize recognitionOverrides=_recognitionOverrides;
@property(copy, nonatomic) NSURL *originalAudioFileURL; // @synthesize originalAudioFileURL=_originalAudioFileURL;
@property(nonatomic) long long taskHint; // @synthesize taskHint=_taskHint;
@property(nonatomic) double maximumRecognitionDuration; // @synthesize maximumRecognitionDuration=_maximumRecognitionDuration;
@property(nonatomic) _Bool incremental; // @synthesize incremental=_incremental;
@property(nonatomic) _Bool releaseAudioSessionOnRecordingCompletion; // @synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion;
@property(nonatomic) _Bool farField; // @synthesize farField=_farField;
@property(nonatomic) _Bool secureOfflineOnly; // @synthesize secureOfflineOnly=_secureOfflineOnly;
@property(nonatomic) _Bool preferOnDeviceRecognition; // @synthesize preferOnDeviceRecognition=_preferOnDeviceRecognition;
@property(nonatomic) _Bool shouldHandleCapitalization; // @synthesize shouldHandleCapitalization=_shouldHandleCapitalization;
@property(nonatomic) _Bool continuousListening; // @synthesize continuousListening=_continuousListening;
@property(nonatomic) _Bool detectUtterances; // @synthesize detectUtterances=_detectUtterances;
@property(nonatomic) _Bool preferOnlineRecognition; // @synthesize preferOnlineRecognition=_preferOnlineRecognition;
@property(nonatomic) _Bool forceOfflineRecognition; // @synthesize forceOfflineRecognition=_forceOfflineRecognition;
@property(copy, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
@property(copy, nonatomic) NSDictionary *voiceSearchQueryParameters; // @synthesize voiceSearchQueryParameters=_voiceSearchQueryParameters;
@property(copy, nonatomic) NSDictionary *voiceSearchHeaderFields; // @synthesize voiceSearchHeaderFields=_voiceSearchHeaderFields;
@property(nonatomic) long long voiceSearchTypeOptions; // @synthesize voiceSearchTypeOptions=_voiceSearchTypeOptions;
@property(copy, nonatomic) NSString *offlineLanguage; // @synthesize offlineLanguage=_offlineLanguage;
@property(copy, nonatomic) NSString *languageCodeOverride; // @synthesize languageCodeOverride=_languageCodeOverride;
@property(copy, nonatomic) NSString *keyboardIdentifier; // @synthesize keyboardIdentifier=_keyboardIdentifier;
@property(copy, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
@property(copy, nonatomic) NSString *microphoneIdentifier; // @synthesize microphoneIdentifier=_microphoneIdentifier;
@property(copy, nonatomic) NSArray *inlineItemList; // @synthesize inlineItemList=_inlineItemList;
@property(nonatomic) long long transcriptionMode; // @synthesize transcriptionMode=_transcriptionMode;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *postfixText; // @synthesize postfixText=_postfixText;
@property(copy, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property(copy, nonatomic) NSString *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(copy, nonatomic) NSString *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property(retain, nonatomic) STSiriContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationDisplayName; // @synthesize applicationDisplayName=_applicationDisplayName;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (id)dictationOptionsWithoutTextContext;	// IMP=0x00000000000a4ea1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a4dd1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a444c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a405e
- (id)init;	// IMP=0x00000000000a4011

@end
