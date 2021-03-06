//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableOrderedSet;

@interface CRCoderArchiver
{
    struct vector<CRDT::Document_DocObject *, std::allocator<CRDT::Document_DocObject *>> currentDocObjectEncodingStack;	// 8 = 0x8
    NSMutableOrderedSet *_uuidSet;	// 32 = 0x20
    NSMutableOrderedSet *_keySet;	// 40 = 0x28
    NSMutableOrderedSet *_encodedObjects;	// 48 = 0x30
    void *_currentDocument;	// 56 = 0x38
}

+ (id)encodedDataWithDocument:(id)arg1;	// IMP=0x00000000000b1b1d
+ (void)initialize;	// IMP=0x00000000000b1b04
- (id).cxx_construct;	// IMP=0x00000000000b373b
- (void).cxx_destruct;	// IMP=0x00000000000b36d8
@property(nonatomic) void *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) NSMutableOrderedSet *encodedObjects; // @synthesize encodedObjects=_encodedObjects;
@property(retain, nonatomic) NSMutableOrderedSet *keySet; // @synthesize keySet=_keySet;
@property(retain, nonatomic) NSMutableOrderedSet *uuidSet; // @synthesize uuidSet=_uuidSet;
- (int)indexForKey:(id)arg1;	// IMP=0x00000000000b34d8
- (void *)currentDocumentObjectForEncoding;	// IMP=0x00000000000b34c2
- (void *)currentCustomObjectForEncoding;	// IMP=0x00000000000b345c
- (void *)mutableObjectIDForKey:(id)arg1;	// IMP=0x00000000000b336a
- (unsigned long long)encodeUUIDIndexFromUUID:(id)arg1;	// IMP=0x00000000000b325a
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000b31e8
- (void)encodeUInt32:(unsigned int)arg1 forKey:(id)arg2;	// IMP=0x00000000000b3173
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000b3101
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000000b308c
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x00000000000b3013
- (void)encodeUUID:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000b2f85
- (void)encodeString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000b2e99
- (void)encodeData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000b2d04
- (void)encodeObject:(id)arg1 forObjectID:(void *)arg2;	// IMP=0x00000000000b29b4
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000b2922
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)arg1;	// IMP=0x00000000000b289e
- (id)encodeDocument:(id)arg1;	// IMP=0x00000000000b1ba5

@end

