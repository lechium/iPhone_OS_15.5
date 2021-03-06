//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSWPFontHeightCache : NSObject
{
    struct list<unsigned long, std::allocator<unsigned long>> _fontHashList;	// 8 = 0x8
    struct map<unsigned long, TSWPFontHeightCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontHeightCacheEntry>>> _fontHashToInfoMap;	// 32 = 0x20
    unsigned int _cacheSize;	// 56 = 0x38
    unsigned int _maxCacheSize;	// 60 = 0x3c
    struct _opaque_pthread_rwlock_t _lock;	// 64 = 0x40
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000288424
+ (id)sharedCache;	// IMP=0x0000000000288319
+ (id)_singletonAlloc;	// IMP=0x00000000002882e8
- (id).cxx_construct;	// IMP=0x0000000000288bb4
- (void).cxx_destruct;	// IMP=0x0000000000288b8c
- (void)p_addEntryForFont:(struct __CTFont *)arg1 heightInfo:(const CDStruct_7660b417 *)arg2;	// IMP=0x00000000002889cc
- (_Bool)p_findEntryForFont:(struct __CTFont *)arg1 outHeightInfo:(CDStruct_7660b417 *)arg2 collision:(_Bool *)arg3;	// IMP=0x0000000000288891
- (CDStruct_7660b417)fontHeightInfoForFont:(struct __CTFont *)arg1;	// IMP=0x00000000002885b9
- (void)dealloc;	// IMP=0x0000000000288526
- (id)init;	// IMP=0x00000000002884d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002884cc
- (id)autorelease;	// IMP=0x00000000002884c3
- (oneway void)release;	// IMP=0x00000000002884bd
- (unsigned long long)retainCount;	// IMP=0x00000000002884b2
- (id)retain;	// IMP=0x00000000002884a9

@end

