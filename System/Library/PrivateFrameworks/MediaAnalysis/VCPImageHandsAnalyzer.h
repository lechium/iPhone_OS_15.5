//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, VCPCNNHandKeypointsDetector, VCPCNNHandsDetector;

@interface VCPImageHandsAnalyzer
{
    int _maxNumRegions;	// 8 = 0x8
    int _inputWidth;	// 12 = 0xc
    int _inputHeight;	// 16 = 0x10
    VCPCNNHandsDetector *_handsDetector;	// 24 = 0x18
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;	// 32 = 0x20
    NSMutableArray *_results;	// 40 = 0x28
    NSString *_resConfig;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001d87a1
- (int)preferredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;	// IMP=0x00000000001d8766
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d8452
- (int)convertSingleResultToDict:(struct CGPoint [21])arg1 keypointConfidence:(float *)arg2 box:(id)arg3 results:(id)arg4;	// IMP=0x00000000001d7bbb
- (int)updateModelForAspectRatio:(id)arg1;	// IMP=0x00000000001d7b30
- (int)configForAspectRatio:(id)arg1;	// IMP=0x00000000001d7803
- (long long)getClosestAspectRatio:(id)arg1;	// IMP=0x00000000001d773f
- (id)initWithKeypointsOption:(int)arg1 forceCPU:(_Bool)arg2 sharedModel:(_Bool)arg3 aspectRatio:(id)arg4 modelName:(id)arg5 revision:(int)arg6;	// IMP=0x00000000001d74ab
- (id)init;	// IMP=0x00000000001d749d

@end

