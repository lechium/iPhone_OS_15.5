//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class HMICameraVideoFrame, NSError;

__attribute__((visibility("hidden")))
@interface HMIRegionOfInterestOperation : NSOperation
{
    struct __CVBuffer *_pixelBuffer;	// 8 = 0x8
    HMICameraVideoFrame *_frame;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    struct CGSize _size;	// 32 = 0x20
    struct CGRect _cropRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b4194
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) __weak HMICameraVideoFrame *frame; // @synthesize frame=_frame;
@property(readonly) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;	// IMP=0x00000000000b40ab
- (void)main;	// IMP=0x00000000000b3d60
- (id)initWithFrame:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000b3c9c

@end

