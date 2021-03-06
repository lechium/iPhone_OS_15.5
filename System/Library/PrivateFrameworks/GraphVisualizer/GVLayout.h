//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GVGraph, NSMutableArray;

@interface GVLayout : NSObject
{
    unsigned long long *savedOrder;	// 8 = 0x8
    unsigned long long currentCrossings;	// 16 = 0x10
    int direction;	// 24 = 0x18
    GVGraph *graph;	// 32 = 0x20
    NSMutableArray *selfEdges;	// 40 = 0x28
    NSMutableArray *ranks;	// 48 = 0x30
    struct CGSize separation;	// 56 = 0x38
}

+ (struct CGSize)layoutGraph:(id)arg1 withDirection:(int)arg2 separation:(struct CGSize)arg3;	// IMP=0x000000000000617d
@property(retain, nonatomic) NSMutableArray *ranks; // @synthesize ranks;
@property(retain, nonatomic) NSMutableArray *selfEdges; // @synthesize selfEdges;
@property(nonatomic) struct CGSize separation; // @synthesize separation;
@property(nonatomic) int direction; // @synthesize direction;
@property(nonatomic) GVGraph *graph; // @synthesize graph;
- (void)assignRankCoordinates;	// IMP=0x000000000000ba12
- (void)assignNodeCoordinates;	// IMP=0x000000000000b952
- (void)straightenY;	// IMP=0x000000000000b32e
- (void)straightenX;	// IMP=0x000000000000ad0a
- (void)packCutY:(unsigned long long)arg1;	// IMP=0x000000000000a92b
- (void)packCutX:(unsigned long long)arg1;	// IMP=0x000000000000a54c
- (void)medianPosition:(unsigned long long)arg1;	// IMP=0x000000000000a489
- (void)initializeNodeCoordinates;	// IMP=0x0000000000009fb0
- (void)assignNodePriorities;	// IMP=0x0000000000009e9d
- (void)assignCoordinates;	// IMP=0x0000000000009e62
- (void)transpose;	// IMP=0x0000000000009b98
- (void)weightedMedian:(unsigned long long)arg1;	// IMP=0x0000000000009ac3
- (void)medianSort:(id)arg1 withRespectTo:(id)arg2;	// IMP=0x0000000000009759
- (unsigned long long)medianValueOf:(id)arg1 withRespectTo:(id)arg2;	// IMP=0x000000000000958d
- (void)initializeOrder;	// IMP=0x0000000000008e66
- (void)commitOrder;	// IMP=0x0000000000008d56
- (void)restoreOrder;	// IMP=0x0000000000008c9a
- (void)saveOrder;	// IMP=0x0000000000008bae
- (unsigned long long)crossings;	// IMP=0x0000000000008a93
- (void)orderVertices;	// IMP=0x000000000000872d
- (void)buildRankIterators;	// IMP=0x000000000000866d
- (void)balanceRanks;	// IMP=0x00000000000080f8
- (void)normalizeRanks;	// IMP=0x0000000000007d33
- (void)minimizeCutValues;	// IMP=0x0000000000007d2d
- (void)makeFeasibleTree;	// IMP=0x0000000000007728
- (void)initializeRanks;	// IMP=0x0000000000007153
- (void)assignRanks;	// IMP=0x0000000000006d97
- (void)undoRemoveCycles;	// IMP=0x0000000000006c6d
- (void)removeCycles;	// IMP=0x0000000000006ad1
- (void)_removeCycleDFS:(id)arg1 visistedNodes:(id)arg2 nodesInStack:(id)arg3;	// IMP=0x000000000000687c
- (void)undoRemoveSelfEdges;	// IMP=0x00000000000066d7
- (void)removeSelfEdges;	// IMP=0x00000000000064e0
- (struct CGSize)doLayout:(id)arg1 direction:(int)arg2 separation:(struct CGSize)arg3;	// IMP=0x00000000000061f1
- (void)dealloc;	// IMP=0x000000000000613e

@end

