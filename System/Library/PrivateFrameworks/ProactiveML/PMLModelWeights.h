//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString, PMLMutableDenseVector;

@interface PMLModelWeights : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    PMLMutableDenseVector *_data;	// 8 = 0x8
}

+ (id)weightsFromNumbers:(id)arg1;	// IMP=0x00000000000416b8
+ (id)constWeightsOfLength:(int)arg1 value:(float)arg2;	// IMP=0x00000000000415c8
+ (id)zeroWeightsOfLength:(int)arg1;	// IMP=0x0000000000041560
+ (id)modelWeightsOfLength:(int)arg1 rngSeed:(unsigned long long)arg2;	// IMP=0x00000000000414ef
+ (id)modelWeightsOfLength:(int)arg1;	// IMP=0x00000000000414db
+ (id)modelWeightsOfLength:(int)arg1 rng:(id)arg2;	// IMP=0x000000000004125f
+ (id)modelWeightsFromFloats:(id)arg1;	// IMP=0x0000000000041212
- (void).cxx_destruct;	// IMP=0x0000000000041202
- (id)copy;	// IMP=0x00000000000411c9
- (id)sliceFrom:(int)arg1 to:(int)arg2;	// IMP=0x000000000004116e
- (id)weightsByAppendingWeights:(id)arg1;	// IMP=0x000000000004110f
- (void)processValuesInPlaceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000410f9
@property(readonly, nonatomic) int length;
- (id)asMutableDenseVector;	// IMP=0x00000000000410d5
- (float *)values;	// IMP=0x00000000000410bf
- (id)initWithCount:(int)arg1;	// IMP=0x0000000000041060
- (id)initModelWeightsFromFloats:(id)arg1;	// IMP=0x0000000000040ff5
- (id)toDictionary;	// IMP=0x000000000002061e
- (id)initFromDictionary:(id)arg1;	// IMP=0x0000000000020366
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x00000000000200f1
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;	// IMP=0x000000000001ff9f
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000001fef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

