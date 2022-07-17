//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation
{
    HMCameraClip *_cameraClip;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e570c
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) HMCameraClip *cameraClip; // @synthesize cameraClip=_cameraClip;
- (void)main;	// IMP=0x00000000000e4b26
- (id)initWithCameraClip:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e4a79

@end
