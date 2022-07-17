//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPLandmarkValidator : NSObject
{
    VCPCNNModel *_model;	// 8 = 0x8
    VCPCNNData *_input;	// 16 = 0x10
    float *_transArray;	// 24 = 0x18
    float *_meanLandmarkLoc;	// 32 = 0x20
    char *_triIndexMap;	// 40 = 0x28
    unsigned char _numTri;	// 48 = 0x30
    char *_triList;	// 56 = 0x38
    float *_orientation;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000cbb87
@property float *orientation; // @synthesize orientation=_orientation;
- (int)validateOneImage:(struct __CVBuffer *)arg1 landmarks:(float *)arg2 numofLandmarks:(int)arg3 score:(float *)arg4;	// IMP=0x00000000000cb416
- (void)dealloc;	// IMP=0x00000000000cb39f
- (id)initWithModelFile:(id)arg1 paramFile:(struct __sFILE *)arg2 numTri:(unsigned char)arg3 triList:(char *)arg4 angle:(float *)arg5;	// IMP=0x00000000000cad00

@end
