//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGModelHyperparameters : NSObject
{
    NSString *_featuresModelId;	// 8 = 0x8
    NSString *_featuresVersion;	// 16 = 0x10
    unsigned long long _vectorLength;	// 24 = 0x18
    unsigned long long _idVectorLength;	// 32 = 0x20
    unsigned long long _extraIdOptions;	// 40 = 0x28
    unsigned long long _vectorizerStrategy;	// 48 = 0x30
    long long _vectorNormalization;	// 56 = 0x38
    struct _NSRange _characterNGramRange;	// 64 = 0x40
    struct _NSRange _tokenNGramRange;	// 80 = 0x50
}

+ (unsigned long long)strategyForString:(id)arg1 modelTypeName:(id)arg2;	// IMP=0x0000000000001c34
- (void).cxx_destruct;	// IMP=0x0000000000001c0c
@property(readonly, nonatomic) long long vectorNormalization; // @synthesize vectorNormalization=_vectorNormalization;
@property(readonly, nonatomic) unsigned long long vectorizerStrategy; // @synthesize vectorizerStrategy=_vectorizerStrategy;
@property(readonly, nonatomic) unsigned long long extraIdOptions; // @synthesize extraIdOptions=_extraIdOptions;
@property(readonly, nonatomic) unsigned long long idVectorLength; // @synthesize idVectorLength=_idVectorLength;
@property(readonly, nonatomic) unsigned long long vectorLength; // @synthesize vectorLength=_vectorLength;
@property(readonly, nonatomic) struct _NSRange tokenNGramRange; // @synthesize tokenNGramRange=_tokenNGramRange;
@property(readonly, nonatomic) struct _NSRange characterNGramRange; // @synthesize characterNGramRange=_characterNGramRange;
@property(readonly, copy, nonatomic) NSString *featuresVersion; // @synthesize featuresVersion=_featuresVersion;
@property(readonly, copy, nonatomic) NSString *featuresModelId; // @synthesize featuresModelId=_featuresModelId;
- (id)sessionDescriptorForLanguage:(id)arg1;	// IMP=0x0000000000001ae3
- (id)initWithDictionary:(id)arg1 modelTypeName:(id)arg2;	// IMP=0x0000000000001330

@end

