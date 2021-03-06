//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBStringFloatDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000046a54
- (void)removeFloatForKey:(id)arg1;	// IMP=0x0000000000046a3e
- (void)setFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x000000000004699a
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000046959
- (_Bool)getFloat:(float *)arg1 forKey:(id)arg2;	// IMP=0x000000000004690e
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046878
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000004682c
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000000000466c5
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004656b
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000464d4
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000004647d
- (unsigned long long)hash;	// IMP=0x0000000000046467
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046416
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000463de
- (void)dealloc;	// IMP=0x000000000004632a
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000046311
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000462c9
- (id)initWithFloats:(const float *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000461a9
- (id)init;	// IMP=0x0000000000046190

@end

