//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INVocabularyUpdater, _INVocabularyValidator;
@protocol OS_dispatch_queue;

@interface _INVocabulary : NSObject
{
    INVocabularyUpdater *_vocabularyUpdater;	// 8 = 0x8
    _INVocabularyValidator *_validator;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedVocabulary;	// IMP=0x00000000002e52a5
+ (void)enumerateVocabularyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e528c
+ (id)supportedVocabularyStringTypes;	// IMP=0x00000000002e525c
- (void).cxx_destruct;	// IMP=0x00000000002e4c7b
- (void)removeAllVocabularyStrings;	// IMP=0x00000000002e4c30
- (void)setVocabulary:(id)arg1 ofType:(long long)arg2;	// IMP=0x00000000002e4b99
- (void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2;	// IMP=0x00000000002e4b02
- (void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1;	// IMP=0x00000000002e4ab1
- (void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;	// IMP=0x00000000002e4a6d
- (void)validateVocabularyType:(long long)arg1;	// IMP=0x00000000002e4a29
- (void)setValidatedVocabulary:(id)arg1 ofType:(long long)arg2;	// IMP=0x00000000002e4937
- (id)_validator;	// IMP=0x00000000002e48fc
- (id)init;	// IMP=0x00000000002e4851

@end

