//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLNearestNeighborsIndex-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class _KDNode;

@interface MLNearestNeighborsSingleKdTreeIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding>
{
    vector_8ca568ff vData;	// 8 = 0x8
    vector_2056c7c2 vIndices;	// 32 = 0x20
    unsigned long long _numDimensions;	// 56 = 0x38
    unsigned long long _leafSize;	// 64 = 0x40
    _KDNode *_root;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011f211
- (id).cxx_construct;	// IMP=0x000000000011e98c
- (void).cxx_destruct;	// IMP=0x000000000011e947
@property(retain, nonatomic) _KDNode *root; // @synthesize root=_root;
@property(nonatomic) unsigned long long leafSize; // @synthesize leafSize=_leafSize;
@property(nonatomic) unsigned long long numDimensions; // @synthesize numDimensions=_numDimensions;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011e682
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011e55b
- (void)findK:(unsigned long long)arg1 nearestNeighbors:(void *)arg2 toQueryPoint:(const void *)arg3 inTree:(id)arg4;	// IMP=0x000000000011df94
- (vector_7105b4ee)calculateDistancesForNodesBetweenLeft:(unsigned long long)arg1 andRight:(unsigned long long)arg2 toQueryPoint:(const void *)arg3;	// IMP=0x000000000011da5f
- (id)constructTreeForPointsBoundedBy:(void *)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000011d5fa
- (id)constructTree;	// IMP=0x000000000011d1df
- (unsigned long long)dataPointCount;	// IMP=0x000000000011d1ae
- (_Bool)updateWithData:(const void *)arg1 error:(id *)arg2;	// IMP=0x000000000011d0b6
- (vector_7105b4ee)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const void *)arg2;	// IMP=0x000000000011ce69
- (id)initWithDataset:(void *)arg1 numberOfDimensions:(unsigned long long)arg2 leafSize:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000011cca0

@end
