//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ObjectCacheByCString : NSObject
{
    struct __CFDictionary *_dictionary;	// 8 = 0x8
}

- (id)getObjectForCStringKey:(char *)arg1;	// IMP=0x000000000047a9ef
- (void)setObject:(id)arg1 forCStringKey:(char *)arg2;	// IMP=0x000000000047a9de
- (void)dealloc;	// IMP=0x000000000047a96a
- (id)init;	// IMP=0x000000000047a8fc

@end

