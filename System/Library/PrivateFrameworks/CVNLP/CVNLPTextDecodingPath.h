//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CVNLPTextDecodingPath : NSObject
{
    double _modelLogProbability;	// 8 = 0x8
    double _characterLanguageModelLogProbability;	// 16 = 0x10
    double _wordLanguageModelLogProbability;	// 24 = 0x18
    double _lexiconScore;	// 32 = 0x20
    long long _characterCount;	// 40 = 0x28
    long long _pseudoSpaceCount;	// 48 = 0x30
    long long _tokenCount;	// 56 = 0x38
    NSString *_string;	// 64 = 0x40
}

+ (CDUnknownBlockType)defaultPathScoringFunction;	// IMP=0x0000000000038c60
+ (CDUnknownBlockType)defaultPathScoringFunctionForLanguageResourceBundle:(id)arg1;	// IMP=0x00000000000389a0
- (void).cxx_destruct;	// IMP=0x0000000000038d60
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, nonatomic) long long tokenCount; // @synthesize tokenCount=_tokenCount;
@property(readonly, nonatomic) long long pseudoSpaceCount; // @synthesize pseudoSpaceCount=_pseudoSpaceCount;
@property(readonly, nonatomic) long long characterCount; // @synthesize characterCount=_characterCount;
@property(readonly, nonatomic) double lexiconScore; // @synthesize lexiconScore=_lexiconScore;
@property(readonly, nonatomic) double wordLanguageModelLogProbability; // @synthesize wordLanguageModelLogProbability=_wordLanguageModelLogProbability;
@property(readonly, nonatomic) double characterLanguageModelLogProbability; // @synthesize characterLanguageModelLogProbability=_characterLanguageModelLogProbability;
@property(readonly, nonatomic) double modelLogProbability; // @synthesize modelLogProbability=_modelLogProbability;
- (id)initWithCharacterLanguageModelLogProbability:(double)arg1 wordLanguageModelLogProbability:(double)arg2 lexiconScore:(double)arg3 string:(id)arg4;	// IMP=0x0000000000038900
- (id)init;	// IMP=0x0000000000038890

@end

