//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Speech/AFDictationDelegate-Protocol.h>
#import <Speech/CXCallObserverDelegate-Protocol.h>

@class AFDictationConnection, CXCallObserver, NSLocale, NSOperationQueue, NSString;
@protocol NSObject, SFSpeechRecognizerDelegate;

@interface SFSpeechRecognizer : NSObject <CXCallObserverDelegate, AFDictationDelegate>
{
    AFDictationConnection *_dictationConnection;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    CXCallObserver *_callObserver;	// 24 = 0x18
    id <NSObject> _facetimeObserver;	// 32 = 0x20
    id <NSObject> _foregroundObserver;	// 40 = 0x28
    id <NSObject> _preferencesObserver;	// 48 = 0x30
    _Bool _supportsOnDeviceRecognition;	// 56 = 0x38
    NSLocale *_locale;	// 64 = 0x40
    id <SFSpeechRecognizerDelegate> _delegate;	// 72 = 0x48
    long long _defaultTaskHint;	// 80 = 0x50
    NSOperationQueue *_queue;	// 88 = 0x58
}

+ (void)_fetchSupportedForcedOfflineLocalesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b2e5
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aa18
+ (long long)authorizationStatus;	// IMP=0x000000000000a9d3
+ (id)supportedLocales;	// IMP=0x000000000000a9c2
+ (void)initialize;	// IMP=0x000000000000a90c
- (void).cxx_destruct;	// IMP=0x000000000000bb7b
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) long long defaultTaskHint; // @synthesize defaultTaskHint=_defaultTaskHint;
@property(nonatomic) __weak id <SFSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsOnDeviceRecognition; // @synthesize supportsOnDeviceRecognition=_supportsOnDeviceRecognition;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)_informDelegateOfPreferencesChange;	// IMP=0x000000000000ba3e
- (void)_informDelegateOfAvailabilityChange;	// IMP=0x000000000000b95d
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x000000000000b94b
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;	// IMP=0x000000000000b939
- (id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000000b841
- (id)recognitionTaskWithRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b78e
- (_Bool)_isInternalTaskHint:(long long)arg1;	// IMP=0x000000000000b77a
- (void)_requestOfflineDictationSupportWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b1b0
@property(readonly, nonatomic, getter=_isAvailableForForcedOfflineRecognition) _Bool _availableForForcedOfflineRecognition;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (void)dealloc;	// IMP=0x000000000000af4e
- (id)initWithLocale:(id)arg1;	// IMP=0x000000000000ab42
- (id)init;	// IMP=0x000000000000aae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

