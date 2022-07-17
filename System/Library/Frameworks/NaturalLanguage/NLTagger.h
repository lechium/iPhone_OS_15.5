//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface NLTagger : NSObject
{
    NSArray *_schemes;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
    void *_tagger;	// 24 = 0x18
    NSMutableDictionary *_customModels;	// 32 = 0x20
    NSMutableDictionary *_customModelDictionaries;	// 40 = 0x28
    NSMutableDictionary *_classifierCaches;	// 48 = 0x30
    NSMutableDictionary *_sequenceCaches;	// 56 = 0x38
    NSMutableDictionary *_customGazetteers;	// 64 = 0x40
    NSMutableDictionary *_customGazetteerDictionaries;	// 72 = 0x48
}

+ (void)requestAssetsForLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000182ec
+ (void)registerForAssetNotifications;	// IMP=0x00000000000145a2
+ (id)availableTagSchemesForLanguage:(id)arg1;	// IMP=0x0000000000014422
+ (id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2;	// IMP=0x00000000000143cc
- (void).cxx_destruct;	// IMP=0x000000000001867c
- (id)gazetteersForTagScheme:(id)arg1;	// IMP=0x00000000000180b8
- (void)setGazetteers:(id)arg1 forTagScheme:(id)arg2;	// IMP=0x0000000000017dc5
- (id)modelsForTagScheme:(id)arg1;	// IMP=0x0000000000017d7e
- (void)setModels:(id)arg1 forTagScheme:(id)arg2;	// IMP=0x0000000000017a38
- (void)stringEditedInRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;	// IMP=0x00000000000179ec
- (void)setOrthography:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000017548
- (void)setLanguage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000174d8
@property(readonly, copy, nonatomic) NSString *dominantLanguage;
- (struct _NSRange)tokenRangeForRange:(struct _NSRange)arg1 unit:(long long)arg2;	// IMP=0x000000000001738f
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2;	// IMP=0x0000000000017316
- (id)tagHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 tokenRange:(struct _NSRange *)arg5;	// IMP=0x0000000000016e1c
- (id)tagsInRange:(struct _NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id *)arg5;	// IMP=0x0000000000016bfc
- (id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(struct _NSRange *)arg4;	// IMP=0x0000000000016a0b
- (void)enumerateTagsInRange:(struct _NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000016528
- (id)_customHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 options:(unsigned long long)arg5 modelDictionary:(id)arg6 gazetteerDictionary:(id)arg7;	// IMP=0x00000000000162b5
- (id)_customHypothesesAtIndex:(unsigned long long)arg1 fromHypothesisDictionary:(id)arg2;	// IMP=0x000000000001615d
- (id)_customHypothesisDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4 maximumCount:(unsigned long long)arg5;	// IMP=0x00000000000159e8
- (id)_customTagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 modelDictionary:(id)arg5 gazetteerDictionary:(id)arg6;	// IMP=0x0000000000015564
- (id)_customTagAtIndex:(unsigned long long)arg1 fromTagDictionary:(id)arg2;	// IMP=0x000000000001541b
- (id)_customTagDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4;	// IMP=0x0000000000014d8b
- (id)_customGazetteerAtIndex:(unsigned long long)arg1 unit:(long long)arg2 gazetteerDictionary:(id)arg3;	// IMP=0x0000000000014cb9
- (id)_customModelAtIndex:(unsigned long long)arg1 unit:(long long)arg2 modelDictionary:(id)arg3;	// IMP=0x0000000000014bf5
- (struct _NSRange)sentenceRangeForRange:(struct _NSRange)arg1;	// IMP=0x0000000000014aee
@property(retain, nonatomic) NSString *string;
- (id)_tagSchemeForScheme:(id)arg1;	// IMP=0x0000000000014907
@property(readonly, copy, nonatomic) NSArray *tagSchemes;
- (id)description;	// IMP=0x0000000000014825
- (void)dealloc;	// IMP=0x00000000000147e6
- (id)initWithTagSchemes:(id)arg1;	// IMP=0x000000000001467f

@end
