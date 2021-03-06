//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData;

@interface NSArchiver
{
    void *mdata;	// 8 = 0x8
    void *pointerTable;	// 16 = 0x10
    void *stringTable;	// 24 = 0x18
    void *ids;	// 32 = 0x20
    void *map;	// 40 = 0x28
    void *replacementTable;	// 48 = 0x30
    void *reserved;	// 56 = 0x38
}

+ (_Bool)archiveRootObject:(id)arg1 toFile:(id)arg2;	// IMP=0x0000000000008d18
+ (id)archivedDataWithRootObject:(id)arg1;	// IMP=0x0000000000008c7b
+ (id)classNameEncodedForTrueClassName:(id)arg1;	// IMP=0x0000000000007a77
+ (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;	// IMP=0x0000000000007a26
+ (void)initialize;	// IMP=0x0000000000007504
- (id)classNameEncodedForTrueClassName:(id)arg1;	// IMP=0x0000000000008dab
- (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;	// IMP=0x0000000000008d4e
- (void)encodeConditionalObject:(id)arg1;	// IMP=0x0000000000008af0
- (void)encodeRootObject:(id)arg1;	// IMP=0x00000000000089fa
- (void)encodeDataObject:(id)arg1;	// IMP=0x00000000000088e4
- (void)encodeObject:(id)arg1;	// IMP=0x000000000000875a
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000086eb
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;	// IMP=0x0000000000008491
- (void)encodeValuesOfObjCTypes:(const char *)arg1;	// IMP=0x000000000000837a
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x0000000000007afe
- (long long)versionForClassName:(id)arg1;	// IMP=0x0000000000007ac7
- (void)replaceObject:(id)arg1 withObject:(id)arg2;	// IMP=0x00000000000079b4
- (void)dealloc;	// IMP=0x00000000000078e6
- (id)data;	// IMP=0x00000000000078d5
@property(readonly, retain) NSMutableData *archiverData;
- (id)initForWritingWithMutableData:(id)arg1;	// IMP=0x000000000000755c

@end

