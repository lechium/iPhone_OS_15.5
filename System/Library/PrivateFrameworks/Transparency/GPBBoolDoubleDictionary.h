//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>
#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolDoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    double _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 32 = 0x20
}

- (void)removeAll;	// IMP=0x000000000002ce56
- (void)removeDoubleForKey:(_Bool)arg1;	// IMP=0x000000000002ce49
- (void)setDouble:(double)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002ce24
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002cdda
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000002ccc1
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000002cbfd
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cba2
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cb0e
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000002caf6
- (_Bool)getDouble:(double *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002cad4
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002ca24
- (unsigned long long)hash;	// IMP=0x000000000002ca13
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c997
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c95f
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002c946
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002c8e8
- (id)initWithDoubles:(const double *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002c87c
- (id)init;	// IMP=0x000000000002c863

@end

