//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ContextObject : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000010b96b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000010b8f4
- (id)objectForKey:(id)arg1;	// IMP=0x001000000010b88d
- (id)copyDictionaryRepresentation;	// IMP=0x001000000010b853
- (id)description;	// IMP=0x001000000010b80d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010b788
- (id)init;	// IMP=0x001000000010b72b

@end

