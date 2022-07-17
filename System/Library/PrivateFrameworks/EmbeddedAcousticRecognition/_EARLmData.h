//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLmData : NSObject
{
    _Bool _roundingEnabled;	// 8 = 0x8
    long long _inputType;	// 16 = 0x10
    shared_ptr_3024e64e _data;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000000047d03b
- (id).cxx_construct;	// IMP=0x000000000047e8a9
- (void).cxx_destruct;	// IMP=0x000000000047e89b
@property(readonly, nonatomic) shared_ptr_3024e64e data; // @synthesize data=_data;
@property(readonly, nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(nonatomic) _Bool roundingEnabled; // @synthesize roundingEnabled=_roundingEnabled;
- (id)wordFrequency;	// IMP=0x000000000047e66b
- (id)metrics;	// IMP=0x000000000047e53c
- (double)minAge;	// IMP=0x000000000047e52e
- (double)maxAge;	// IMP=0x000000000047e520
- (unsigned long long)queryLimit;	// IMP=0x000000000047e50f
- (id)sources;	// IMP=0x000000000047e3e3
- (_Bool)roomForMoreData;	// IMP=0x000000000047e3d5
- (void)enumerateSentencesOfType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000047e160
- (void)setInputFormat:(long long)arg1;	// IMP=0x000000000047e0d8
- (void)addNgramCountWithType:(unsigned long long)arg1 content:(id)arg2;	// IMP=0x000000000047df5a
- (void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3;	// IMP=0x000000000047df44
- (void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3 hasWeights:(_Bool)arg4;	// IMP=0x000000000047dd2c
- (void)addLineWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3;	// IMP=0x000000000047db41
- (void)addDocumentWithUUID:(id)arg1 content:(id)arg2 metadata:(id)arg3;	// IMP=0x000000000047d818
- (void)addDocumentWithUUID:(id)arg1 content:(id)arg2;	// IMP=0x000000000047d631
- (id)initWithConfiguration:(id)arg1 ncsRoot:(id)arg2 recognizerConfiguration:(id)arg3;	// IMP=0x000000000047d063

@end
