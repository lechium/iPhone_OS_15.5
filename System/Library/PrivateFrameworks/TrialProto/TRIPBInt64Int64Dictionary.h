//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64Int64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000003ff70
- (void)removeInt64ForKey:(long long)arg1;	// IMP=0x000000000003ff37
- (void)setInt64:(long long)arg1 forKey:(long long)arg2;	// IMP=0x000000000003feaf
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000003fe6e
- (_Bool)getInt64:(long long *)arg1 forKey:(long long)arg2;	// IMP=0x000000000003fe01
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fd3b
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000003fcd1
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000003fb41
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000003f9d7
- (void)enumerateKeysAndInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f927
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000003f8d0
- (unsigned long long)hash;	// IMP=0x000000000003f8ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f869
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f831
- (void)dealloc;	// IMP=0x000000000003f77d
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003f764
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003f71c
- (id)initWithInt64s:(const long long *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003f622
- (id)init;	// IMP=0x000000000003f609

@end
