//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

#import <MobileTimer/MTSerializer-Protocol.h>

@class NSMutableArray;

@interface MTStorageWriter : NSCoder <MTSerializer>
{
    NSMutableArray *_stack;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000012f7b
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
- (id)encodedDictionary;	// IMP=0x0000000000012f03
- (id)_dictionaryForProtocolObject:(id)arg1;	// IMP=0x0000000000012de5
- (id)_serializingProtocol;	// IMP=0x0000000000012dd4
- (void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000012d59
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001278b
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000012705
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x000000000001267f
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000125fe
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000001257d
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000000124fc
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000001247b
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000000123fa
- (void)_encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001236c
- (id)init;	// IMP=0x00000000000122d8
@property(readonly, nonatomic) unsigned long long mtType;
@property(readonly, nonatomic) NSCoder *mtCoder;

@end
