//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SGNameMappingTransformer, SGTokenizerMappingTransformer;

@interface SGNameDetector : NSObject
{
    SGTokenizerMappingTransformer *_noCoreNLPTokenizer;	// 8 = 0x8
    SGTokenizerMappingTransformer *_coreNLPTokenizer;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    SGNameMappingTransformer *_transformer;	// 32 = 0x20
}

+ (id)_fetchContactNamesToLimit:(unsigned long long)arg1 withPPContactStore:(id)arg2;	// IMP=0x000000000027a5e1
+ (id)_fetchContactNamesToLimit:(unsigned long long)arg1;	// IMP=0x000000000027a572
+ (id)_contactNames;	// IMP=0x000000000027a52f
- (void).cxx_destruct;	// IMP=0x000000000027a4f1
- (id)_detectNLPNames:(id)arg1;	// IMP=0x000000000027a159
- (id)_detectContactNames:(id)arg1;	// IMP=0x000000000027a0cc
- (id)detectNames:(id)arg1 withNameSet:(id)arg2;	// IMP=0x000000000027a002
- (id)_detectNames:(id)arg1 withNameSet:(id)arg2;	// IMP=0x0000000000279c47
- (id)detectNames:(id)arg1 algorithm:(unsigned long long)arg2;	// IMP=0x0000000000279acb
- (id)tokenizerWithCoreNLPEnabled:(_Bool)arg1;	// IMP=0x0000000000279a0d
- (id)initWithLanguage:(id)arg1;	// IMP=0x0000000000279978

@end
