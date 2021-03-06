//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPImageSaliencyAnalyzerFullEspresso
{
    VCPCNNModelEspresso *_modelEspresso;	// 16 = 0x10
    float *_inputData;	// 24 = 0x18
    NSString *_resConfig;	// 32 = 0x20
    int _srcWidth;	// 40 = 0x28
    int _srcHeight;	// 44 = 0x2c
}

+ (id)sharedModel:(id)arg1;	// IMP=0x00000000000b98ee
- (void).cxx_destruct;	// IMP=0x00000000000b9c75
- (int)getSalientRegions:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9ac6
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x00000000000b9a25
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;	// IMP=0x00000000000b95a2
- (void)dealloc;	// IMP=0x00000000000b955c

@end

