//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject
{
    NSPointerArray *_array;	// 8 = 0x8
    _Bool _dirty;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000090c30
@property(readonly, nonatomic) NSArray *strongArray;
@property(readonly, nonatomic) unsigned long long count;
- (void)addWeakObject:(id)arg1;	// IMP=0x0000000000090a0e
- (id)initWithEntries:(id)arg1;	// IMP=0x0000000000090842
- (id)init;	// IMP=0x00000000000907a8

@end

