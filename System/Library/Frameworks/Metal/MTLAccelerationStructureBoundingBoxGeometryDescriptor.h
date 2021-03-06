//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLBuffer;

@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor
{
    id <MTLBuffer> _boundingBoxBuffer;	// 32 = 0x20
    unsigned long long _boundingBoxBufferOffset;	// 40 = 0x28
    unsigned long long _boundingBoxStride;	// 48 = 0x30
    unsigned long long _boundingBoxCount;	// 56 = 0x38
}

+ (id)descriptor;	// IMP=0x0000000000033a5b
@property(nonatomic) unsigned long long boundingBoxCount; // @synthesize boundingBoxCount=_boundingBoxCount;
@property(nonatomic) unsigned long long boundingBoxStride; // @synthesize boundingBoxStride=_boundingBoxStride;
@property(nonatomic) unsigned long long boundingBoxBufferOffset; // @synthesize boundingBoxBufferOffset=_boundingBoxBufferOffset;
@property(retain, nonatomic) id <MTLBuffer> boundingBoxBuffer; // @synthesize boundingBoxBuffer=_boundingBoxBuffer;
- (unsigned long long)hash;	// IMP=0x0000000000033ca4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033b9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033af9
- (void)dealloc;	// IMP=0x0000000000033ab7
- (id)init;	// IMP=0x0000000000033a74

@end

