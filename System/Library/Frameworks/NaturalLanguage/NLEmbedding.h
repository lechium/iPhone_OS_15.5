//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLModel, NSString;

@interface NLEmbedding : NSObject
{
    void *_embedding;	// 8 = 0x8
    NLModel *_nlModel;	// 16 = 0x10
    _Bool _usesUntokenizedSentences;	// 24 = 0x18
}

+ (id)_embeddingWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004740b
+ (id)_embeddingWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000473af
+ (id)embeddingWithMLModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000047353
+ (id)embeddingWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000472f7
+ (id)embeddingWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004729b
+ (_Bool)writeEmbeddingMLModelForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000046eb7
+ (id)modelDescriptionForEmbedding:(id)arg1;	// IMP=0x0000000000046e1e
+ (id)embeddingDataForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000046d52
+ (_Bool)writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000046d36
+ (_Bool)_writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 orData:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000465d2
+ (unsigned long long)currentSentenceEmbeddingRevisionForLanguage:(id)arg1;	// IMP=0x000000000004656e
+ (unsigned long long)currentContextualWordEmbeddingRevisionForLanguage:(id)arg1;	// IMP=0x000000000004650a
+ (unsigned long long)currentRevisionForLanguage:(id)arg1;	// IMP=0x00000000000464a6
+ (unsigned long long)currentRevisionForType:(id)arg1 locale:(id)arg2;	// IMP=0x0000000000046465
+ (id)supportedSentenceEmbeddingRevisionsForLanguage:(id)arg1;	// IMP=0x00000000000463f1
+ (id)supportedContextualWordEmbeddingRevisionsForLanguage:(id)arg1;	// IMP=0x000000000004637d
+ (id)supportedRevisionsForLanguage:(id)arg1;	// IMP=0x0000000000046309
+ (id)supportedRevisionsForType:(id)arg1 locale:(id)arg2;	// IMP=0x0000000000046164
+ (id)sentenceEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;	// IMP=0x00000000000451e6
+ (id)transformerContextualTokenEmbeddingForLanguage:(id)arg1;	// IMP=0x0000000000045109
+ (id)contextualWordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;	// IMP=0x0000000000045047
+ (id)wordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;	// IMP=0x0000000000044f85
+ (id)sentenceEmbeddingForLanguage:(id)arg1;	// IMP=0x0000000000044f0d
+ (id)contextualWordEmbeddingForLanguage:(id)arg1;	// IMP=0x0000000000044e95
+ (id)wordEmbeddingForLanguage:(id)arg1;	// IMP=0x0000000000044e1d
- (void).cxx_destruct;	// IMP=0x0000000000047467
@property(readonly) unsigned long long revision;
@property(readonly, copy) NSString *language;
- (id)vectorsForSentences:(id)arg1 maxTokens:(unsigned long long)arg2;	// IMP=0x00000000000460bf
- (id)vectorsForTokenizedSentences:(id)arg1 untokenizedSentences:(id)arg2 maxTokens:(unsigned long long)arg3;	// IMP=0x0000000000046020
- (id)vectorsForUntokenizedSentences:(id)arg1 maxTokens:(unsigned long long)arg2;	// IMP=0x0000000000045efa
- (id)vectorsForTokenizedSentences:(id)arg1 maxTokens:(unsigned long long)arg2;	// IMP=0x0000000000045dd0
- (_Bool)getVector:(float *)arg1 forString:(id)arg2;	// IMP=0x0000000000045c59
- (id)vectorForString:(id)arg1;	// IMP=0x0000000000045c32
@property(readonly) unsigned long long vocabularySize;
@property(readonly) unsigned long long dimension;
- (id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4;	// IMP=0x0000000000045b25
- (id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3;	// IMP=0x0000000000045b0b
- (void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000457bc
- (void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004579f
- (id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4;	// IMP=0x000000000004566f
- (id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3;	// IMP=0x0000000000045655
- (void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000045306
- (void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000452e9
- (double)distanceBetweenString:(id)arg1 andString:(id)arg2 distanceType:(long long)arg3;	// IMP=0x00000000000452d0
- (_Bool)containsString:(id)arg1;	// IMP=0x00000000000452a8
- (void)dealloc;	// IMP=0x0000000000044dde
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044d61
- (id)initWithNLModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044bc8
- (void *)_embeddingRef;	// IMP=0x0000000000044bbe
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000449f7
- (id)_initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000448ab
- (void *)_createEmbeddingRefWithData:(id)arg1;	// IMP=0x00000000000447d6
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000443be
- (id)_initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044272
- (void *)_createEmbeddingRefWithContentsOfURL:(id)arg1;	// IMP=0x0000000000044156
- (id)initSentenceEmbeddingWithLocale:(struct __CFLocale *)arg1;	// IMP=0x0000000000044134
- (id)initContextualEmbeddingWithLocale:(struct __CFLocale *)arg1;	// IMP=0x0000000000044112
- (id)initWithLocale:(struct __CFLocale *)arg1;	// IMP=0x00000000000440f0
- (void)setUsesUntokenizedSentences:(_Bool)arg1;	// IMP=0x00000000000440e7
- (_Bool)usesUntokenizedSentences;	// IMP=0x00000000000440de
- (id)initWithType:(id)arg1 locale:(id)arg2 version:(id)arg3;	// IMP=0x0000000000043f24

@end
