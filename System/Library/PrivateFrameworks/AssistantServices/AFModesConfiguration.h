//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isEyesFree;	// 8 = 0x8
    _Bool _isForCarDND;	// 9 = 0x9
    _Bool _isVoiceTriggerRequest;	// 10 = 0xa
    _Bool _isConnectedToCarPlay;	// 11 = 0xb
    _Bool _isRequestMadeWithPhysicalDeviceInteraction;	// 12 = 0xc
    _Bool _userTypedInSiri;	// 13 = 0xd
    NSString *_modeOverrideValue;	// 16 = 0x10
    long long _deviceRaised;	// 24 = 0x18
    long long _faceDetected;	// 32 = 0x20
    long long _touchScreenDetected;	// 40 = 0x28
    long long _buttonPressDetected;	// 48 = 0x30
    long long _flatDevicePosture;	// 56 = 0x38
    long long _deviceOrientation;	// 64 = 0x40
    long long _isInWorkout;	// 72 = 0x48
    long long _isBacklightOn;	// 80 = 0x50
    long long _isInWaterLock;	// 88 = 0x58
    long long _isInSleepLock;	// 96 = 0x60
    long long _isInTheaterMode;	// 104 = 0x68
    long long _isOnWrist;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d8451
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d9680
- (void).cxx_destruct;	// IMP=0x00000000000d8f5c
@property(readonly, nonatomic) long long isOnWrist; // @synthesize isOnWrist=_isOnWrist;
@property(readonly, nonatomic) long long isInTheaterMode; // @synthesize isInTheaterMode=_isInTheaterMode;
@property(readonly, nonatomic) long long isInSleepLock; // @synthesize isInSleepLock=_isInSleepLock;
@property(readonly, nonatomic) long long isInWaterLock; // @synthesize isInWaterLock=_isInWaterLock;
@property(readonly, nonatomic) long long isBacklightOn; // @synthesize isBacklightOn=_isBacklightOn;
@property(readonly, nonatomic) long long isInWorkout; // @synthesize isInWorkout=_isInWorkout;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly, nonatomic) long long flatDevicePosture; // @synthesize flatDevicePosture=_flatDevicePosture;
@property(readonly, nonatomic) long long buttonPressDetected; // @synthesize buttonPressDetected=_buttonPressDetected;
@property(readonly, nonatomic) long long touchScreenDetected; // @synthesize touchScreenDetected=_touchScreenDetected;
@property(readonly, nonatomic) long long faceDetected; // @synthesize faceDetected=_faceDetected;
@property(readonly, nonatomic) long long deviceRaised; // @synthesize deviceRaised=_deviceRaised;
@property(readonly, copy, nonatomic) NSString *modeOverrideValue; // @synthesize modeOverrideValue=_modeOverrideValue;
@property(readonly, nonatomic) _Bool userTypedInSiri; // @synthesize userTypedInSiri=_userTypedInSiri;
@property(readonly, nonatomic) _Bool isRequestMadeWithPhysicalDeviceInteraction; // @synthesize isRequestMadeWithPhysicalDeviceInteraction=_isRequestMadeWithPhysicalDeviceInteraction;
@property(readonly, nonatomic) _Bool isConnectedToCarPlay; // @synthesize isConnectedToCarPlay=_isConnectedToCarPlay;
@property(readonly, nonatomic) _Bool isVoiceTriggerRequest; // @synthesize isVoiceTriggerRequest=_isVoiceTriggerRequest;
@property(readonly, nonatomic) _Bool isForCarDND; // @synthesize isForCarDND=_isForCarDND;
@property(readonly, nonatomic) _Bool isEyesFree; // @synthesize isEyesFree=_isEyesFree;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d89f9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d8459
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d8446
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8187
- (unsigned long long)hash;	// IMP=0x00000000000d7d0a
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000000000d74f6
- (id)description;	// IMP=0x00000000000d74e2
- (id)initWithIsEyesFree:(_Bool)arg1 isForCarDND:(_Bool)arg2 isVoiceTriggerRequest:(_Bool)arg3 isConnectedToCarPlay:(_Bool)arg4 isRequestMadeWithPhysicalDeviceInteraction:(_Bool)arg5 userTypedInSiri:(_Bool)arg6 modeOverrideValue:(id)arg7 deviceRaised:(long long)arg8 faceDetected:(long long)arg9 touchScreenDetected:(long long)arg10 buttonPressDetected:(long long)arg11 flatDevicePosture:(long long)arg12 deviceOrientation:(long long)arg13 isInWorkout:(long long)arg14 isBacklightOn:(long long)arg15 isInWaterLock:(long long)arg16 isInSleepLock:(long long)arg17 isInTheaterMode:(long long)arg18 isOnWrist:(long long)arg19;	// IMP=0x00000000000d73d0
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d96ef

@end

