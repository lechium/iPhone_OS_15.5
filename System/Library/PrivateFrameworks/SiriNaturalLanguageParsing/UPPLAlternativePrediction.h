//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface UPPLAlternativePrediction : NSObject
{
    NSArray *_chunkPredictions;	// 8 = 0x8
    NSNumber *_nerScore;	// 16 = 0x10
    unsigned long long _alternativeIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006ff56
@property(readonly, nonatomic) unsigned long long alternativeIndex; // @synthesize alternativeIndex=_alternativeIndex;
@property(readonly, nonatomic) NSNumber *nerScore; // @synthesize nerScore=_nerScore;
@property(readonly, nonatomic) NSArray *chunkPredictions; // @synthesize chunkPredictions=_chunkPredictions;
- (id)dictionaryRepresentation;	// IMP=0x000000000006fcaf
- (id)initWithChunkPredictions:(id)arg1 nerScore:(id)arg2 alternativeIndex:(unsigned long long)arg3;	// IMP=0x000000000006fc0a

@end

