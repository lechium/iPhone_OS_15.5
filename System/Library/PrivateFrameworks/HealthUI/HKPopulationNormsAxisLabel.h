//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface HKPopulationNormsAxisLabel : NSObject
{
    NSNumber *_rangeStart;	// 8 = 0x8
    NSNumber *_rangeEnd;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002b6caa
@property(readonly, copy, nonatomic) NSNumber *rangeEnd; // @synthesize rangeEnd=_rangeEnd;
@property(copy, nonatomic) NSNumber *rangeStart; // @synthesize rangeStart=_rangeStart;
- (id)stringRepresentation;	// IMP=0x00000000002b6bb1
@property(readonly, nonatomic) NSString *separatorString;
- (id)initWithRangeStart:(id)arg1 end:(id)arg2;	// IMP=0x00000000002b6a9c
- (id)initWithValue:(id)arg1;	// IMP=0x00000000002b6a88

@end
