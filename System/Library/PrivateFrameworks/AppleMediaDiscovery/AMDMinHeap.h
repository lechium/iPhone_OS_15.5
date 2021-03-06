//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AMDMinHeap : NSObject
{
    NSMutableArray *_objects;	// 8 = 0x8
    CDUnknownBlockType _comparator;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
    unsigned long long _position;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000468d0
@property unsigned long long position; // @synthesize position=_position;
@property unsigned long long capacity; // @synthesize capacity=_capacity;
@property(copy) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
- (void)swap:(unsigned long long)arg1 with:(unsigned long long)arg2;	// IMP=0x0000000000046650
- (void)pushDown;	// IMP=0x0000000000046240
- (void)bubbleUp;	// IMP=0x00000000000460c0
- (id)topN;	// IMP=0x0000000000045f60
- (id)poll;	// IMP=0x0000000000045d80
- (unsigned long long)size;	// IMP=0x0000000000045d50
- (_Bool)isEmpty;	// IMP=0x0000000000045d10
- (_Bool)add:(id)arg1;	// IMP=0x0000000000045ad0
- (id)initWithCapacity:(unsigned long long)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045960

@end

