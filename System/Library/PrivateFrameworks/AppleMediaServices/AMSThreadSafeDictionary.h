//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeObject, NSArray;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeDictionary : NSObject
{
    AMSThreadSafeObject *_backingDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022ae8c
@property(retain, nonatomic) AMSThreadSafeObject *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000022ad59
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000022ac41
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000022ab50
- (void)removeAllObjects;	// IMP=0x000000000022aadc
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000022a960
- (id)objectForKey:(id)arg1;	// IMP=0x000000000022a7e4
@property(readonly, copy) NSArray *allValues;
@property(readonly, copy) NSArray *allKeys;
- (id)init;	// IMP=0x000000000022a4ba

@end
