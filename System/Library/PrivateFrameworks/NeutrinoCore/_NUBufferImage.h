//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutablePurgeableBufferImage-Protocol.h>
#import <NeutrinoCore/NUPurgeableBufferImage-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@interface _NUBufferImage <NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage>
{
}

- (_Bool)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;	// IMP=0x00000000001e802f
- (_Bool)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;	// IMP=0x00000000001e801d
- (void)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e7f66
- (void)readBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e7eaf
- (id)debugQuickLookObject;	// IMP=0x00000000001e7e8b

// Remaining properties
@property(readonly) NUColorSpace *colorSpace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NUPixelFormat *format;
@property(readonly) unsigned long long hash;
@property(readonly) NUImageLayout *layout;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) Class superclass;
@property(readonly, copy) NURegion *validRegion;

@end

