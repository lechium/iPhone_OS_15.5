//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSKeyedPortCoder
{
    id sndPort;	// 16 = 0x10
    id rcvPort;	// 24 = 0x18
    NSMutableDictionary *root;	// 32 = 0x20
    NSMutableArray *containers;	// 40 = 0x28
    NSMutableArray *components;	// 48 = 0x30
    _Bool mainDataFinished;	// 56 = 0x38
    unsigned long long nextGenericIndex;	// 64 = 0x40
    unsigned long long nextOutOfLineGenericIndex;	// 72 = 0x48
    _Bool isBycopy;	// 80 = 0x50
    _Bool isByref;	// 81 = 0x51
    _Bool isValid;	// 82 = 0x52
    NSMutableArray *importedObjects;	// 88 = 0x58
}

- (void)decodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c82d7
- (void)encodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c819d
- (id)decodeInvocation;	// IMP=0x00000000001c7faa
- (void)encodeInvocation:(id)arg1;	// IMP=0x00000000001c7ec6
- (id)decodeObject;	// IMP=0x00000000001c7eb4
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;	// IMP=0x00000000001c7e88
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x00000000001c7e71
- (id)decodePortObject;	// IMP=0x00000000001c7e5d
- (id)decodeDataObject;	// IMP=0x00000000001c7e49
- (id)_decodeObjectNoKey;	// IMP=0x00000000001c7e35
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000001c7e20
- (void)encodeConditionalObject:(id)arg1;	// IMP=0x00000000001c7e0c
- (void)encodeObject:(id)arg1;	// IMP=0x00000000001c7dfa
- (void)encodeByrefObject:(id)arg1;	// IMP=0x00000000001c7da5
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x00000000001c7d50
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x00000000001c7d3b
- (void)encodePortObject:(id)arg1;	// IMP=0x00000000001c7d27
- (void)encodeDataObject:(id)arg1;	// IMP=0x00000000001c7d13
- (void)_encodeObjectNoKey:(id)arg1;	// IMP=0x00000000001c7cff
- (void)_setByref:(_Bool)arg1;	// IMP=0x00000000001c7cef
- (void)_setBycopy:(_Bool)arg1;	// IMP=0x00000000001c7cdf
- (long long)versionForClassName:(id)arg1;	// IMP=0x00000000001c7cb1
- (id)decodePortObjectForKey:(id)arg1;	// IMP=0x00000000001c7c9f
- (id)decodeDataObjectForKey:(id)arg1;	// IMP=0x00000000001c7c8d
- (id)_getOutOfLineObjectForKey:(id)arg1;	// IMP=0x00000000001c7b9c
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;	// IMP=0x00000000001c7b16
- (long long)decodeIntegerForKey:(id)arg1;	// IMP=0x00000000001c7aeb
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x00000000001c7a2b
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x00000000001c796c
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x00000000001c78ae
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x00000000001c77f2
- (int)decodeIntForKey:(id)arg1;	// IMP=0x00000000001c7736
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x00000000001c770d
- (id)_decodePropertyListForKey:(id)arg1;	// IMP=0x00000000001c76fb
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x00000000001c7386
- (id)_getObjectFromTopForKey:(id)arg1;	// IMP=0x00000000001c7315
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x00000000001c72df
- (void)encodePortObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c72cd
- (void)encodeDataObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c72bb
- (void)_addOutOfLineObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c7184
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00000000001c70b2
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000001c706b
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6fed
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6f6f
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6eef
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6e70
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6df1
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6dc8
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6d94
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6d82
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c6a7e
- (void)_finishUpObject;	// IMP=0x00000000001c6a61
- (void)_prepareToEncodeObjectForKey:(id)arg1;	// IMP=0x00000000001c69fc
- (_Bool)allowsKeyedCoding;	// IMP=0x00000000001c69f4
- (void)_addObjectToTop:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c692c
- (id)_topContainer;	// IMP=0x00000000001c690f
- (void)importObject:(id)arg1;	// IMP=0x00000000001c68c2
- (id)importedObjects;	// IMP=0x00000000001c68b1
- (_Bool)isByref;	// IMP=0x00000000001c68a1
- (_Bool)isBycopy;	// IMP=0x00000000001c6891
- (id)_proxyForLocalObject:(id)arg1;	// IMP=0x00000000001c682d
- (id)connection;	// IMP=0x00000000001c67fb
- (id)finishedComponents;	// IMP=0x00000000001c67c6
- (void)dispatch;	// IMP=0x00000000001c6743
- (void)_buildMainData;	// IMP=0x00000000001c662d
- (id)debugDescription;	// IMP=0x00000000001c656c
- (void)invalidate;	// IMP=0x00000000001c64f2
- (void)dealloc;	// IMP=0x00000000001c643e
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;	// IMP=0x00000000001c61fd

@end

