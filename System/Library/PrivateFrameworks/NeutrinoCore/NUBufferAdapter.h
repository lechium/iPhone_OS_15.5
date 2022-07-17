//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUBuffer-Protocol.h>
#import <NeutrinoCore/NUBufferProvider-Protocol.h>

@class NSString, NUPixelFormat;

@interface NUBufferAdapter : NSObject <NUBuffer, NUBufferProvider>
{
    CDStruct_d58201db _size;	// 8 = 0x8
    NUPixelFormat *_format;	// 24 = 0x18
    long long _rowBytes;	// 32 = 0x20
    const void *_bytes;	// 40 = 0x28
    _Bool _valid;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000dcfda
@property(readonly, nonatomic) long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (void)provideBuffer:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dcb64
- (void)invalidate;	// IMP=0x00000000000dcb5a
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000dc4f5
@property(readonly, nonatomic) const void *bytes;
- (id)init;	// IMP=0x00000000000dbdbe
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void *)arg4;	// IMP=0x00000000000dbd28
- (id)initWithBuffer:(id)arg1;	// IMP=0x00000000000dbc3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
