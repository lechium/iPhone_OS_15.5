//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPRangeArray : NSObject <NSCopying>
{
    void *_rangeVectorOpaque;	// 8 = 0x8
}

- (id)description;	// IMP=0x0000000000278195
- (void)enumerateRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000278034
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000277fb1
- (void)removeRange:(struct _NSRange)arg1;	// IMP=0x0000000000277f8f
- (struct _NSRange *)rangeReferenceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000277f7b
- (void)addRange:(struct _NSRange)arg1;	// IMP=0x0000000000277f59
@property(readonly, nonatomic) unsigned long long start;
@property(readonly, nonatomic) unsigned long long finish;
@property(readonly, nonatomic) _Bool isEmpty;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000277e0f
@property(readonly, nonatomic) unsigned long long rangeCount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000277dc1
- (void)dealloc;	// IMP=0x0000000000277d6a
- (id)initWithRangeVector:(const void *)arg1;	// IMP=0x0000000000277cf4
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000277c9c
- (id)init;	// IMP=0x0000000000277c44

@end

