//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ArraySlicer : NSObject
{
    unsigned long long _sliceSize;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    unsigned long long _offset;	// 24 = 0x18
    NSArray *_array;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000339c0
- (id)unconsumed;	// IMP=0x0000000000033975
- (id)consumed;	// IMP=0x000000000003392d
- (id)nextSlice;	// IMP=0x00000000000338d3
@property(readonly, nonatomic) unsigned long long remaining;
- (id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2;	// IMP=0x0000000000033835

@end

