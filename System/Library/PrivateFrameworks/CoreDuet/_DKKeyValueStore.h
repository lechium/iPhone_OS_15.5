//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKeyValueStore-Protocol.h>

@protocol _DKSimpleKeyValueStore;

@interface _DKKeyValueStore : NSObject <_DKKeyValueStore>
{
    id <_DKSimpleKeyValueStore> _store;	// 8 = 0x8
}

+ (id)standardUserDefaultsKeyValueStore;	// IMP=0x000000000009a4b6
- (void).cxx_destruct;	// IMP=0x000000000009aa36
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000009aa20
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009aa0a
- (id)objectForKey:(id)arg1 havingClass:(Class)arg2;	// IMP=0x000000000009a8ce
- (id)objectForKey:(id)arg1;	// IMP=0x000000000009a8b8
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009a8a6
- (id)stringForKey:(id)arg1;	// IMP=0x000000000009a83f
- (void)setNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009a82d
- (id)numberForKey:(id)arg1;	// IMP=0x000000000009a7c6
- (void)setDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009a7b4
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000009a74d
- (void)setDate:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009a73b
- (id)dateForKey:(id)arg1;	// IMP=0x000000000009a6d4
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009a6c2
- (id)dataForKey:(id)arg1;	// IMP=0x000000000009a65b
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000009a5da
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000009a58d
- (void)setArray:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009a57b
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000009a514
- (id)initWithSimpleKeyValueStore:(id)arg1;	// IMP=0x000000000009a44b

@end
