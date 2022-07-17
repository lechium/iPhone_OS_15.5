//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureBracketedStillImageSettings;

__attribute__((visibility("hidden")))
@interface AVCaptureStillImageRequest : NSObject
{
    CDUnknownBlockType _sbufCompletionBlock;	// 8 = 0x8
    CDUnknownBlockType _iosurfaceCompletionBlock;	// 16 = 0x10
    CDUnknownBlockType _bracketedCaptureCompletionBlock;	// 24 = 0x18
    long long _settingsID;	// 32 = 0x20
    unsigned int _shutterSoundID;	// 40 = 0x28
    AVCaptureBracketedStillImageSettings *_bracketedSettings;	// 48 = 0x30
}

+ (id)request;	// IMP=0x000000000003f0fa
@property(retain) AVCaptureBracketedStillImageSettings *bracketedSettings; // @synthesize bracketedSettings=_bracketedSettings;
@property unsigned int shutterSoundID; // @synthesize shutterSoundID=_shutterSoundID;
@property long long settingsID; // @synthesize settingsID=_settingsID;
@property(copy) CDUnknownBlockType bracketedCaptureCompletionBlock; // @synthesize bracketedCaptureCompletionBlock=_bracketedCaptureCompletionBlock;
@property(copy) CDUnknownBlockType iosurfaceCompletionBlock; // @synthesize iosurfaceCompletionBlock=_iosurfaceCompletionBlock;
@property(copy) CDUnknownBlockType sbufCompletionBlock; // @synthesize sbufCompletionBlock=_sbufCompletionBlock;
- (void)dealloc;	// IMP=0x000000000003f113

@end
