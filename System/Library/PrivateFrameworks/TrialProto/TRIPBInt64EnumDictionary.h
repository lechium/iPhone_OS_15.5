//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownFunctionPointerType _validationFunc;	// 24 = 0x18
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(long long)arg2;	// IMP=0x00000000000427fd
- (void)removeAll;	// IMP=0x00000000000427e7
- (void)removeEnumForKey:(long long)arg1;	// IMP=0x00000000000427ae
- (void)setRawValue:(int)arg1 forKey:(long long)arg2;	// IMP=0x0000000000042726
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000426e5
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042612
- (_Bool)getRawValue:(int *)arg1 forKey:(long long)arg2;	// IMP=0x00000000000425a5
- (_Bool)getEnum:(int *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000042522
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004246f
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000004240f
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_a49d1a5a *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x0000000000042355
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000000000421ca
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004205a
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041f9b
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000041f44
- (unsigned long long)hash;	// IMP=0x0000000000041f2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041edd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041ea5
- (void)dealloc;	// IMP=0x0000000000041df1
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000041dd7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000041d6b
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000041c54
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000000041c3a
- (id)init;	// IMP=0x0000000000041c1e

@end

