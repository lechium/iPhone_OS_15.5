//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NURenderJob.h>

@interface PIDisparitySampleJob : NURenderJob
{
    float _sampledDisparityValue;	// 8 = 0x8
    CDStruct_1b6d18a9 _sampleTime;	// 12 = 0xc
    struct CGRect _sampleRect;	// 40 = 0x28
}

@property(nonatomic) float sampledDisparityValue; // @synthesize sampledDisparityValue=_sampledDisparityValue;
@property(nonatomic) struct CGRect sampleRect; // @synthesize sampleRect=_sampleRect;
@property(nonatomic) CDStruct_1b6d18a9 sampleTime; // @synthesize sampleTime=_sampleTime;
- (_Bool)render:(out id *)arg1;	// IMP=0x00000000000098a1
- (id)result;	// IMP=0x0000000000009852
- (id)scalePolicy;	// IMP=0x0000000000009839
- (_Bool)wantsOutputVideo;	// IMP=0x0000000000009831
- (_Bool)wantsCompleteStage;	// IMP=0x0000000000009829
- (_Bool)wantsRenderStage;	// IMP=0x0000000000009821

@end

