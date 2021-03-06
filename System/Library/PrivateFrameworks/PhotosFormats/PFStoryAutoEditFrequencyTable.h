//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber;
@protocol PFRandomNumberGenerator;

@interface PFStoryAutoEditFrequencyTable : NSObject
{
    NSArray *_baseTable;	// 8 = 0x8
    NSMutableArray *_workingElements;	// 16 = 0x10
    id <PFRandomNumberGenerator> _randomNumberGenerator;	// 24 = 0x18
    NSNumber *_fallbackValue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000088c32
- (id)nextValuePassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000008899c
- (id)nextValue;	// IMP=0x0000000000088983
- (_Bool)hasValue:(id)arg1;	// IMP=0x000000000008896d
- (id)description;	// IMP=0x000000000008891f
- (id)init;	// IMP=0x0000000000088916
- (id)initWithValueCounts:(id)arg1 randomNumberGenerator:(id)arg2 fallbackValue:(id)arg3;	// IMP=0x000000000008861a

@end

