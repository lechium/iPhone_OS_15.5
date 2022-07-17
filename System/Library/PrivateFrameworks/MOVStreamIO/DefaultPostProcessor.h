//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MOVStreamIO/MOVStreamPostProcessor-Protocol.h>

@class MOVStreamFrameConverter, NSString;

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor>
{
    MOVStreamFrameConverter *_converter;	// 8 = 0x8
    _Bool removePadding;	// 16 = 0x10
    unsigned int originalPixelFormat;	// 20 = 0x14
    id exactBytesPerRow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000005395
@property(nonatomic) unsigned int originalPixelFormat; // @synthesize originalPixelFormat;
@property(retain) id exactBytesPerRow; // @synthesize exactBytesPerRow;
@property _Bool removePadding; // @synthesize removePadding;
- (struct __CVBuffer *)pixelBufferWithExactBytesPerRow:(id)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x0000000000004f7d
- (struct __CVBuffer *)pixelBufferWithoutPaddingFromPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000004d99
- (_Bool)shouldRemovePaddingOfPixelBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2;	// IMP=0x0000000000004d48
- (_Bool)shouldChangeBytesPerRowOfPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0000000000004abe
- (unsigned long long)minimumBytesPerRowForPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0000000000004a98
- (void)dealloc;	// IMP=0x0000000000004a55
- (struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg1 metadata:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000495f
@property(readonly) unsigned int processedPixelFormat;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1;	// IMP=0x00000000000048c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
