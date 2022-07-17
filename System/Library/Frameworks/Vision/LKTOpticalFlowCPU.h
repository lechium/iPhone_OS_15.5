//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LKTOpticalFlowCPU
{
    struct unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> _opticalFlow;	// 8 = 0x8
    struct __CVBuffer *_uv_user_ref;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000177514
- (void).cxx_destruct;	// IMP=0x00000000001774ec
- (_Bool)estimateFlowStream:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000177234
- (_Bool)estimateFlowFromReference:(struct __CVBuffer *)arg1 target:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x0000000000176f29
- (_Bool)setOutputUV:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000176ea8
- (id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3;	// IMP=0x0000000000176809

@end
