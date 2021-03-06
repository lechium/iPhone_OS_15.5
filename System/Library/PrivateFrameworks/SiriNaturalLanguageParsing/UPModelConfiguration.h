//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UPModelConfiguration : NSObject
{
    NSString *_bioLabelsVocabPath;	// 8 = 0x8
    NSString *_configPath;	// 16 = 0x10
    NSString *_grammarPath;	// 24 = 0x18
    NSString *_intentVocabPath;	// 32 = 0x20
    NSString *_spanVocabPath;	// 40 = 0x28
    NSString *_parserEspressoModelPath;	// 48 = 0x30
    NSString *_calibrationEspressoModelPath;	// 56 = 0x38
    NSString *_espressoModelPath;	// 64 = 0x40
}

+ (id)configurationFromDirectoryUrl:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008ef11
+ (id)_configurationWithBioLabelsVocabPath:(id)arg1 configPath:(id)arg2 grammarPath:(id)arg3 intentVocabPath:(id)arg4 spanVocabPath:(id)arg5 parserEspressoModelPath:(id)arg6 calibrationEspressoModelPath:(id)arg7 error:(id *)arg8;	// IMP=0x000000000008eca8
- (void).cxx_destruct;	// IMP=0x000000000008f377
@property(readonly, copy) NSString *espressoModelPath; // @synthesize espressoModelPath=_espressoModelPath;
@property(readonly, copy) NSString *calibrationEspressoModelPath; // @synthesize calibrationEspressoModelPath=_calibrationEspressoModelPath;
@property(readonly, copy) NSString *parserEspressoModelPath; // @synthesize parserEspressoModelPath=_parserEspressoModelPath;
@property(readonly, copy) NSString *spanVocabPath; // @synthesize spanVocabPath=_spanVocabPath;
@property(readonly, copy) NSString *intentVocabPath; // @synthesize intentVocabPath=_intentVocabPath;
@property(readonly, copy) NSString *grammarPath; // @synthesize grammarPath=_grammarPath;
@property(readonly, copy) NSString *configPath; // @synthesize configPath=_configPath;
@property(readonly, copy) NSString *bioLabelsVocabPath; // @synthesize bioLabelsVocabPath=_bioLabelsVocabPath;
- (id)_initWithBioLabelsVocabPath:(id)arg1 configPath:(id)arg2 grammarPath:(id)arg3 intentVocabPath:(id)arg4 spanVocabPath:(id)arg5 parserEspressoModelPath:(id)arg6 calibrationEspressoModelPath:(id)arg7;	// IMP=0x000000000008eb20

@end

