//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/TextProcessor-Protocol.h>

@class NSMutableArray, NSString, _EARLMTKaldiVocab;

__attribute__((visibility("hidden")))
@interface TextProcessorTrain : NSObject <TextProcessor>
{
    NSMutableArray *_text;	// 8 = 0x8
    _EARLMTKaldiVocab *_vocab;	// 16 = 0x10
    long long *_numValidTokens;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000196fc5
- (long long)numberTokens;	// IMP=0x0000000000196fb8
- (unsigned long long)numberSamples;	// IMP=0x0000000000196fa2
- (id)textSequence;	// IMP=0x0000000000196f94
- (void)shuffleSamples;	// IMP=0x0000000000196ef5
- (void)addTokenizedText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000196b68
- (void)addText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000196813
- (void)addText:(id)arg1;	// IMP=0x00000000001965b1
- (id)initWithVocab:(id)arg1;	// IMP=0x0000000000196524
- (id)init;	// IMP=0x0000000000196516

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

