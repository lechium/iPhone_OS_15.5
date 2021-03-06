//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

@interface TSDFPSCACounter
{
    unsigned int mCAFrameCount;	// 16 = 0x10
    NSTimer *mTimer;	// 24 = 0x18
}

- (void)stopLoggingFPS;	// IMP=0x00000000002119c2
- (void)startLoggingFPS;	// IMP=0x000000000021196b
- (void)p_updateFrameCount;	// IMP=0x0000000000211892
- (void)reset;	// IMP=0x0000000000211846

@end

