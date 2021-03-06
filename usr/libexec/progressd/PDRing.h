//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PDRing : NSObject
{
    NSMutableArray *_buffer;	// 8 = 0x8
    unsigned long long _head;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ac328
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSArray *allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000000ac0d8
- (unsigned long long)_ringIndexMinusOne:(unsigned long long)arg1;	// IMP=0x00100000000ac0c3
- (unsigned long long)_ringIndexPlusOne:(unsigned long long)arg1;	// IMP=0x00100000000ac0b0
- (unsigned long long)_ringIndexForIndex:(unsigned long long)arg1;	// IMP=0x00100000000ac06d
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00100000000ac05b
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000ac029
- (_Bool);	// IMP=0x00100000000ac013
- (void)removeObject:(id)arg1;	// IMP=0x00100000000abfa3
- (void)addObject:(id)arg1;	// IMP=0x00100000000abf1b
@property(readonly, nonatomic) id top;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithSize:(unsigned long long)arg1;	// IMP=0x00100000000abe49

@end

