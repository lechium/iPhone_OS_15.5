//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;
@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

@interface PTEspressoGenericExecutor : NSObject
{
    void *_ctx;	// 8 = 0x8
    void *_plan;	// 16 = 0x10
    CDStruct_2bc666a5 _net;	// 24 = 0x18
    NSMutableDictionary *_inputsMap;	// 40 = 0x28
    NSMutableDictionary *_outputsMap;	// 48 = 0x30
    NSMutableArray *_inputConversion;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_espressoCallbackQueue;	// 64 = 0x40
    int _espressoEngine;	// 72 = 0x48
    id <MTLDevice> _device;	// 80 = 0x50
    id <MTLCommandQueue> _commandQueue;	// 88 = 0x58
    NSURL *_url;	// 96 = 0x60
    NSMutableArray *_textureNamePairs;	// 104 = 0x68
}

+ (unsigned long long)getEspressoMetalDeviceId:(id)arg1;	// IMP=0x000000000002d720
- (void).cxx_destruct;	// IMP=0x000000000002ea53
- (void)dealloc;	// IMP=0x000000000002ea10
- (unsigned int)executeAsync;	// IMP=0x000000000002e9fc
- (unsigned int)executeAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e870
- (unsigned int)execute;	// IMP=0x000000000002e803
- (unsigned int)convertBindInput;	// IMP=0x000000000002e09c
- (id)getOutputResourceWithName:(id)arg1;	// IMP=0x000000000002e086
- (id)getInputResourceWithName:(id)arg1;	// IMP=0x000000000002e070
- (unsigned int)bindInputResourceWithName:(id)arg1 to:(struct __CVBuffer *)arg2;	// IMP=0x000000000002dfe4
- (id)texture2DArrayToTexture2D:(id)arg1;	// IMP=0x000000000002df4b
- (id)getResourceWithName:(id)arg1 fromMap:(id)arg2;	// IMP=0x000000000002df36
- (id)initWithUrl:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3 forEngine:(int)arg4 device:(id)arg5 commandQueue:(id)arg6 reshape:(CDStruct_da2e99ad *)arg7 configuration:(id)arg8;	// IMP=0x000000000002d860
- (short)bindBuffers:(id)arg1 toMap:(id)arg2 withMode:(int)arg3;	// IMP=0x000000000002cdb8

@end
