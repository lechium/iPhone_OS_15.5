//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _MDPlistBytes : NSObject
{
    unsigned long long _byteVector;	// 8 = 0x8
    unsigned int _byteVectorCnt;	// 16 = 0x10
    unsigned int _byteVectorCapacity;	// 20 = 0x14
    CDUnknownBlockType _deallocator;	// 24 = 0x18
    unsigned int _isBad:16;	// 32 = 0x20
    unsigned int _isMutable:1;	// 34 = 0x22
    unsigned int _isMutating:1;	// 34 = 0x22
    unsigned int _didFinalize:1;	// 34 = 0x22
    unsigned int _useMalloc:1;	// 34 = 0x22
    struct __CFArray *_rleQueue;	// 40 = 0x28
    unsigned long long *_wrapperPtr;	// 48 = 0x30
    unsigned long long *_uidVector;	// 56 = 0x38
    int _uidCount;	// 64 = 0x40
    int _uidCapacity;	// 68 = 0x44
    struct _malloc_zone_t *_zone;	// 72 = 0x48
}

+ (struct __MDPlistBytes *)nullObjectPlistBytes;	// IMP=0x000000000000b3e0
+ (void)enumerateObjectsFromPlistBytes:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b260
+ (struct __MDPlistBytes *)emptyDictionaryPlistBytes;	// IMP=0x000000000000b1e0
+ (struct __MDPlistBytes *)emptyArrayPlistBytes;	// IMP=0x000000000000b160
+ (struct __MDPlistBytes *)createPlistBytes:(id)arg1;	// IMP=0x000000000000b050
+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b020
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aff0
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cc70
- (void)dumpUIDs;	// IMP=0x000000000000cb00
- (struct __CFData *)copyDataWithBytesNoCopy;	// IMP=0x000000000000cad0
- (struct __CFData *)copyData;	// IMP=0x000000000000cab0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c9d0
- (id)description;	// IMP=0x000000000000c580
- (unsigned long long)_cfTypeID;	// IMP=0x000000000000c540
- (void)dealloc;	// IMP=0x000000000000c490
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c470
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(_Bool)arg3;	// IMP=0x000000000000c440
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 trusted:(unsigned char)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c0b0
- (void)enumerateQueryResults:(unsigned long long)arg1 stringCache:(CDStruct_6130f9a9 *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bfc0
- (_Bool)enumerateQueryResults:(unsigned long long)arg1 attributeSize:(unsigned long long)arg2 stringCache:(CDStruct_6130f9a9 *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000bd80

@end
