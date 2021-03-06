//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLPointerType, MTLStructType, NSString;

@interface MTLArgument : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009948b
+ (id)alloc;	// IMP=0x0000000000099481

// Remaining properties
@property(readonly) unsigned long long access; // @dynamic access;
@property(readonly, getter=isActive) _Bool active; // @dynamic active;
@property(readonly) unsigned long long arrayLength; // @dynamic arrayLength;
@property(readonly) unsigned long long bufferAlignment; // @dynamic bufferAlignment;
@property(readonly) unsigned long long bufferDataSize; // @dynamic bufferDataSize;
@property(readonly) unsigned long long bufferDataType; // @dynamic bufferDataType;
@property(readonly) MTLArgument *bufferIndirectArgumentType; // @dynamic bufferIndirectArgumentType;
@property(readonly) MTLPointerType *bufferPointerType; // @dynamic bufferPointerType;
@property(readonly) MTLStructType *bufferStructType; // @dynamic bufferStructType;
@property(readonly) unsigned long long index; // @dynamic index;
@property(readonly) unsigned long long indirectConstantAlignment; // @dynamic indirectConstantAlignment;
@property(readonly) unsigned long long indirectConstantDataSize; // @dynamic indirectConstantDataSize;
@property(readonly) unsigned long long indirectConstantDataType; // @dynamic indirectConstantDataType;
@property(readonly) _Bool isDepthTexture; // @dynamic isDepthTexture;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) unsigned long long textureDataType; // @dynamic textureDataType;
@property(readonly) unsigned long long textureType; // @dynamic textureType;
@property(readonly) unsigned long long threadgroupMemoryAlignment; // @dynamic threadgroupMemoryAlignment;
@property(readonly) unsigned long long threadgroupMemoryDataSize; // @dynamic threadgroupMemoryDataSize;
@property(readonly) unsigned long long type; // @dynamic type;

@end

