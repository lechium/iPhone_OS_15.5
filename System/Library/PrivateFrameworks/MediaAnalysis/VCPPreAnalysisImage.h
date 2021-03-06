//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPPreAnalysisImage : NSObject
{
    NSMutableDictionary *_scaledPixelBuffers;	// 8 = 0x8
    struct CF<__CVBuffer *> _sourcePixelBuffer;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000000bb7d8
- (void).cxx_destruct;	// IMP=0x00000000000bb7b2
- (int)pixelBuffer:(struct __CVBuffer **)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;	// IMP=0x00000000000bb500
- (int)preWarmWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2;	// IMP=0x00000000000bb30b
@property(readonly, nonatomic) struct __CVBuffer *sourcePixelBuffer;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000000bb248

@end

