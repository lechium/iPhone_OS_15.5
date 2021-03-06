//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPEvictingMinPriorityQueue : NSObject
{
    unsigned long long _capacity;	// 8 = 0x8
    void *_queue;	// 16 = 0x10
}

- (id)extractSortedMutableArray;	// IMP=0x000000000001ec10
- (id)getMinItemWithoutPopping;	// IMP=0x000000000001ebe9
- (id)popItem;	// IMP=0x000000000001eb14
- (void)addObject:(id)arg1;	// IMP=0x000000000001e7c9
- (unsigned long long)capacity;	// IMP=0x000000000001e7bf
@property(readonly, nonatomic) double count;
- (void)dealloc;	// IMP=0x000000000001e743
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001e6c2
- (id)init;	// IMP=0x000000000001e6bc

@end

