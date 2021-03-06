//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLStructType, MTLType, NSString;

__attribute__((visibility("hidden")))
@interface MTLArgumentInternal
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _access;	// 24 = 0x18
    unsigned long long _index;	// 32 = 0x20
    _Bool _active;	// 40 = 0x28
    unsigned long long _arrayLength;	// 48 = 0x30
    MTLType *_typeInfo;	// 56 = 0x38
}

- (unsigned long long)arrayLength;	// IMP=0x0000000000099bf6
- (_Bool)isActive;	// IMP=0x0000000000099be4
- (unsigned long long)index;	// IMP=0x0000000000099bd3
- (unsigned long long)access;	// IMP=0x0000000000099bc2
- (unsigned long long)type;	// IMP=0x0000000000099bb1
- (id)name;	// IMP=0x0000000000099ba0
- (id)description;	// IMP=0x0000000000099b8c
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000009989c
- (id)dataTypeDescription;	// IMP=0x000000000009988b
- (unsigned long long)textureDataType;	// IMP=0x0000000000099867
- (unsigned long long)textureType;	// IMP=0x0000000000099840
- (unsigned long long)threadgroupMemoryDataSize;	// IMP=0x000000000009981c
- (unsigned long long)threadgroupMemoryAlignment;	// IMP=0x00000000000997f8
- (id)bufferPointerType;	// IMP=0x00000000000997f0
- (id)bufferStructType;	// IMP=0x00000000000997cc
- (id)bufferIndirectArgumentType;	// IMP=0x00000000000997a8
- (unsigned long long)indirectConstantDataType;	// IMP=0x0000000000099784
- (unsigned long long)indirectConstantDataSize;	// IMP=0x0000000000099760
- (unsigned long long)indirectConstantAlignment;	// IMP=0x000000000009973c
- (unsigned long long)bufferDataType;	// IMP=0x0000000000099718
- (unsigned long long)bufferDataSize;	// IMP=0x00000000000996f4
- (unsigned long long)bufferAlignment;	// IMP=0x00000000000996d0
- (void)dealloc;	// IMP=0x0000000000099678
@property(readonly) MTLStructType *structType; // @dynamic structType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(_Bool)arg5 arrayLength:(unsigned long long)arg6 typeDescription:(id)arg7;	// IMP=0x00000000000995a9
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(_Bool)arg5 arrayLength:(unsigned long long)arg6;	// IMP=0x00000000000994f6

// Remaining properties
@property(readonly) unsigned long long bufferALUType; // @dynamic bufferALUType;
@property(readonly) unsigned long long bufferPixelFormat; // @dynamic bufferPixelFormat;

@end

