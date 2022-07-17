//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimatorEspresso
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
}

+ (id)sharedModel:(id)arg1;	// IMP=0x000000000003ad2c
- (void).cxx_destruct;	// IMP=0x000000000003b142
- (void)dealloc;	// IMP=0x000000000003b0fc
- (int)computePoseScore:(float *)arg1;	// IMP=0x000000000003ae63
- (float *)getInputBuffer;	// IMP=0x000000000003ad1b
- (id)init;	// IMP=0x000000000003ab70

@end
