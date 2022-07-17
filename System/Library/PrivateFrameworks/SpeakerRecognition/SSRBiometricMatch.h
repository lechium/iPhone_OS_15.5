//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/BKDeviceDelegate-Protocol.h>

@class BKDevice, NSString;

@interface SSRBiometricMatch : NSObject <BKDeviceDelegate>
{
    BKDevice *_biometricDevice;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000004ec30
- (void).cxx_destruct;	// IMP=0x000000000004f316
@property(retain, nonatomic) BKDevice *biometricDevice; // @synthesize biometricDevice=_biometricDevice;
- (_Bool)_getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;	// IMP=0x000000000004f109
- (unsigned long long)getLastBiometricMatchForVoiceTriggerTimeStamp:(unsigned long long)arg1;	// IMP=0x000000000004eef2
- (id)init;	// IMP=0x000000000004ecb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
