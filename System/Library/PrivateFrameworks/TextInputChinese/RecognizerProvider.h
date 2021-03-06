//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHRecognizer, NSLocale;

@interface RecognizerProvider : NSObject
{
    CHRecognizer *_recognizer;	// 8 = 0x8
    NSLocale *_recognitionLanguage;	// 16 = 0x10
    CDUnknownBlockType _recognizerDidLoadBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001bd55
@property(copy) CDUnknownBlockType recognizerDidLoadBlock; // @synthesize recognizerDidLoadBlock=_recognizerDidLoadBlock;
@property(readonly) NSLocale *recognitionLanguage; // @synthesize recognitionLanguage=_recognitionLanguage;
- (void)unloadRecognizer;	// IMP=0x000000000001bcdc
- (void)provideRecognizerToBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bc7a
@property(readonly) CHRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void)dealloc;	// IMP=0x000000000001bac9
- (id)initWithRecognitionLanguage:(id)arg1;	// IMP=0x000000000001ba5e

@end

