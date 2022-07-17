//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *mDictionary;	// 8 = 0x8
}

- (struct __CFDictionary *)p_cfDictionary;	// IMP=0x00000000002732e9
- (id)description;	// IMP=0x00000000002731d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002731be
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027317e
- (id)valueEnumerator;	// IMP=0x0000000000273153
- (id)allValues;	// IMP=0x00000000002730a3
- (id)keyEnumerator;	// IMP=0x000000000027306d
- (void)removeAllObjects;	// IMP=0x000000000027305f
- (void)setObject:(id)arg1 forKey:(long long)arg2;	// IMP=0x000000000027304e
- (void)removeObjectForKey:(long long)arg1;	// IMP=0x000000000027303d
- (id)objectForKey:(long long)arg1;	// IMP=0x000000000027302c
- (unsigned long long)count;	// IMP=0x000000000027301e
- (void)dealloc;	// IMP=0x0000000000272fcf
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000272f2a
- (id)init;	// IMP=0x0000000000272f16

@end
