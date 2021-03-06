//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolBoolDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    _Bool _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 18 = 0x12
}

- (void)removeAll;	// IMP=0x000000000004a007
- (void)removeBoolForKey:(_Bool)arg1;	// IMP=0x0000000000049ffa
- (void)setBool:(_Bool)arg1 forKey:(_Bool)arg2;	// IMP=0x0000000000049fd7
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000049f86
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000049e5d
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000049d7f
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049d26
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049cc8
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000049cb4
- (_Bool)getBool:(_Bool *)arg1 forKey:(_Bool)arg2;	// IMP=0x0000000000049c96
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000049be8
- (unsigned long long)hash;	// IMP=0x0000000000049bd7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049b67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000049b2f
- (void)dealloc;	// IMP=0x0000000000049a85
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000049a6c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000049a0f
- (id)initWithBools:(const _Bool *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000499a3
- (id)init;	// IMP=0x000000000004998a

@end

