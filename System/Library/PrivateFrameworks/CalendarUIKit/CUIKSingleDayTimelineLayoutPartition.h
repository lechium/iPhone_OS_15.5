//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineLayoutPartition : NSObject
{
    NSMutableArray *_stackOfOccurrences;	// 8 = 0x8
    double _topBoundaryTime;	// 16 = 0x10
    double _initialStartBoundary;	// 24 = 0x18
    double _endBoundary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000019823
@property(nonatomic) double endBoundary; // @synthesize endBoundary=_endBoundary;
@property(nonatomic) double initialStartBoundary; // @synthesize initialStartBoundary=_initialStartBoundary;
@property(nonatomic) double topBoundaryTime; // @synthesize topBoundaryTime=_topBoundaryTime;
@property(readonly, nonatomic) double totalWidth;
@property(readonly, nonatomic) double freeSpaceWidth;
@property(readonly, nonatomic) double freeSpaceStartBoundary;
- (void)popOccurrence;	// IMP=0x000000000001960c
- (void)pushOccurrence:(id)arg1;	// IMP=0x00000000000195f6
- (id)peekOccurrence;	// IMP=0x00000000000195e0
@property(readonly, nonatomic) NSArray *stackedOccurrences;
- (id)description;	// IMP=0x00000000000194d4
- (id)init;	// IMP=0x000000000001947e

@end
