//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString, _PASLazyPurgeableResult;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol>
{
    _PASLazyPurgeableResult *_tagger;	// 8 = 0x8
    _Bool _nameTagging;	// 16 = 0x10
    _Bool _trustCoreNLP;	// 17 = 0x11
    NSString *_punctuationMapping;	// 24 = 0x18
    NSString *_personalNameMapping;	// 32 = 0x20
    NSString *_locale;	// 40 = 0x28
}

+ (id)_purgeableNSLinguisticTaggerWithTagSchemes:(id)arg1;	// IMP=0x000000000023190c
+ (id)_purgeableNLTaggerWithNameTagging:(_Bool)arg1;	// IMP=0x00000000002317ff
+ (id)forLocale:(id)arg1 tagNames:(_Bool)arg2 trustCoreNLP:(_Bool)arg3 personalNameMapping:(id)arg4 punctuationMapping:(id)arg5;	// IMP=0x000000000023175a
+ (id)forLocale:(id)arg1 tagNames:(_Bool)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;	// IMP=0x00000000002316bb
+ (id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2;	// IMP=0x000000000023162e
+ (id)forLocale:(id)arg1;	// IMP=0x00000000002315c8
- (void).cxx_destruct;	// IMP=0x0000000000230b91
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000230aa4
- (_Bool)isEqualToTokenizerMappingTransformer:(id)arg1;	// IMP=0x0000000000230a03
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x00000000002308c4
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x0000000000230765
- (id)transform:(id)arg1;	// IMP=0x000000000023047c
- (void)transformWithNLLinguisticTagger:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002303aa
- (void)transformWithCoreNLP:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002302d8
- (void *)_createOrReuseNLPTagger;	// IMP=0x000000000023024b
- (id)initForLocale:(id)arg1 tagNames:(_Bool)arg2 trustCoreNLP:(_Bool)arg3 personalNameMapping:(id)arg4 punctuationMapping:(id)arg5;	// IMP=0x000000000023004c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

