//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LRUStringCache : NSObject
{
    unsigned long long _size;	// 8 = 0x8
    NSMutableArray *_strings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000042e6b
@property(retain) NSMutableArray *strings; // @synthesize strings=_strings;
@property unsigned long long size; // @synthesize size=_size;
- (void)removeAllObjects;	// IMP=0x0010000000042da3
- (id)values;	// IMP=0x0010000000042cee
- (void)addObject:(id)arg1;	// IMP=0x0010000000042b3b
- (unsigned long long)count;	// IMP=0x0010000000042aa5
- (id)initWithSize:(unsigned long long)arg1;	// IMP=0x0010000000042a0f

@end
