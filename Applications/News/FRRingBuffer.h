//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface FRRingBuffer : NSObject
{
    unsigned long long _capacity;	// 8 = 0x8
    NSMutableArray *_values;	// 16 = 0x10
    unsigned long long _position;	// 24 = 0x18
    double _min;	// 32 = 0x20
    double _max;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000e5fe6
@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (id)description;	// IMP=0x00100000000e5e4a
@property(readonly, nonatomic) NSDictionary *dictionary;
- (void)insertValue:(double)arg1;	// IMP=0x00100000000e5902
- (id)initWithCapacity:(unsigned long long)arg1 dictionary:(id)arg2;	// IMP=0x00100000000e5522
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00100000000e54ab

@end
