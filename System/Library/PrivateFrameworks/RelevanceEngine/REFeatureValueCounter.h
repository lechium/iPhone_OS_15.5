//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface REFeatureValueCounter : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    NSPointerArray *_values;	// 16 = 0x10
    struct REFancyShrinkingDictionary _indicies;	// 24 = 0x18
    struct _opaque_pthread_rwlock_t _lock;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000000051876
- (void).cxx_destruct;	// IMP=0x0000000000051850
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)_createErrorWithCode:(unsigned long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0000000000051733
- (unsigned long long)totalCount;	// IMP=0x00000000000516d8
- (unsigned long long)countForValue:(id)arg1;	// IMP=0x00000000000514f6
- (unsigned long long)trackedValueForValue:(id)arg1;	// IMP=0x000000000005112f
- (void)_updateConfigurationForCount:(unsigned long long)arg1;	// IMP=0x0000000000050fdd
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050912
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000502cc
- (id)init;	// IMP=0x0000000000050230

@end

