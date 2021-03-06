//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMURLConfigurationRequest : NSObject
{
    _Bool _wantsQRCodeForSession;	// 8 = 0x8
    long long _requestedCaptureMode;	// 16 = 0x10
    long long _requestedCaptureDevice;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool wantsQRCodeForSession; // @synthesize wantsQRCodeForSession=_wantsQRCodeForSession;
@property(readonly, nonatomic) long long requestedCaptureDevice; // @synthesize requestedCaptureDevice=_requestedCaptureDevice;
@property(readonly, nonatomic) long long requestedCaptureMode; // @synthesize requestedCaptureMode=_requestedCaptureMode;
- (long long)_captureDeviceFromString:(id)arg1 outCaptureDevice:(long long *)arg2;	// IMP=0x00000000001d09f2
- (_Bool)_captureModeFromString:(id)arg1 outCaptureMode:(long long *)arg2;	// IMP=0x00000000001d08ca
- (_Bool)_initializeFromQueryDictionary:(id)arg1;	// IMP=0x00000000001d0788
- (id)initWithQueryDictionary:(id)arg1;	// IMP=0x00000000001d06f9

@end

