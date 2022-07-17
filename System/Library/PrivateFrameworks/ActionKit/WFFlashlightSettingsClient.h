//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVFlashlight;

@interface WFFlashlightSettingsClient
{
    AVFlashlight *_flashlight;	// 8 = 0x8
}

+ (void)createClientWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000034573f
- (void).cxx_destruct;	// IMP=0x000000000034572c
@property(readonly, nonatomic) AVFlashlight *flashlight; // @synthesize flashlight=_flashlight;
- (void)toggleWithBrightnessLevel:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003455c2
- (void)turnOnWithBrightnessLevel:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000345475
- (void)turnOffWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000034530a
- (id)initWithFlashlight:(id)arg1;	// IMP=0x000000000034520e

@end
