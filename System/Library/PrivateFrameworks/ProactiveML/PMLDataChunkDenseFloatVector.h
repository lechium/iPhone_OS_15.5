//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PMLDataChunkDenseFloatVector
{
}

+ (id)chunkWithVector:(const float *)arg1 count:(int)arg2;	// IMP=0x000000000003ef25
+ (unsigned int)dataChunkType;	// IMP=0x000000000003ef1a
@property(readonly, nonatomic) int count;
@property(readonly, nonatomic) const float *vector;
- (id)toVec;	// IMP=0x00000000000212ed

@end

