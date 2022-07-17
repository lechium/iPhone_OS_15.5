//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UPPLEmbeddingTensor : NSObject
{
    NSArray *_values;	// 8 = 0x8
    unsigned long long _numTokens;	// 16 = 0x10
    unsigned long long _numLayers;	// 24 = 0x18
    unsigned long long _embeddingDim;	// 32 = 0x20
    NSString *_embedderId;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000872a9
@property(readonly, nonatomic) NSString *embedderId; // @synthesize embedderId=_embedderId;
@property(readonly, nonatomic) unsigned long long embeddingDim; // @synthesize embeddingDim=_embeddingDim;
@property(readonly, nonatomic) unsigned long long numLayers; // @synthesize numLayers=_numLayers;
@property(readonly, nonatomic) unsigned long long numTokens; // @synthesize numTokens=_numTokens;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;	// IMP=0x00000000000870ad
- (id)initWithValues:(id)arg1 withNumTokens:(unsigned long long)arg2 withNumLayers:(unsigned long long)arg3 withEmbeddingDim:(unsigned long long)arg4 withEmbedderId:(id)arg5;	// IMP=0x0000000000086fec

@end
