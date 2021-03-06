//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UnfairLock;

@interface ThreadSafeDictionary : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    UnfairLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002bbc
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0010000000002ada
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000029a0
- (id)optionalForKey:(id)arg1;	// IMP=0x00100000000027e8
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000002691
- (id)objectForKey:(id)arg1;	// IMP=0x001000000000249e
- (id)init;	// IMP=0x0010000000002429

@end

