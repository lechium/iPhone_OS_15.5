//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID, SPHandle;

@interface SPCommand : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enableLostMode;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSUUID *_beaconIdentifier;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSDate *_expiration;	// 40 = 0x28
    NSNumber *_duration;	// 48 = 0x30
    long long _playSoundContext;	// 56 = 0x38
    SPHandle *_handle;	// 64 = 0x40
    NSString *_lostModeEmail;	// 72 = 0x48
    NSString *_lostModeMessage;	// 80 = 0x50
    NSString *_lostModePhoneNumber;	// 88 = 0x58
    NSString *_obfuscatedIdentifier;	// 96 = 0x60
}

+ (id)stopNotifyWhenFound:(id)arg1;	// IMP=0x00000000000154ee
+ (id)startNotifyWhenFound:(id)arg1;	// IMP=0x00000000000154d5
+ (id)updateAccessoryFirmware:(id)arg1;	// IMP=0x0000000000015469
+ (id)setObfuscatedIdentifier:(id)arg1;	// IMP=0x00000000000153bf
+ (id)connectToBeaconUUID:(id)arg1;	// IMP=0x0000000000015353
+ (id)endLeashingWithBeaconUUID:(id)arg1;	// IMP=0x00000000000152e7
+ (id)beginLeashingWithBeaconUUID:(id)arg1;	// IMP=0x000000000001527b
+ (id)disableLostModeForBeaconUUID:(id)arg1;	// IMP=0x000000000001520f
+ (id)enableLostModeForBeaconUUID:(id)arg1 message:(id)arg2 phoneNumber:(id)arg3 email:(id)arg4;	// IMP=0x0000000000015119
+ (id)stopSoundWithBeaconUUID:(id)arg1;	// IMP=0x00000000000150ad
+ (id)playSoundWithBeaconUUID:(id)arg1 withContext:(long long)arg2;	// IMP=0x0000000000014ffb
+ (id)unpairWithBeaconUUID:(id)arg1;	// IMP=0x0000000000014f8f
+ (id)playSoundWithBeaconUUID:(id)arg1;	// IMP=0x0000000000014f74
+ (id)playSoundWithBeaconUUID:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000014e95
+ (id)declineShareWithBeaconUUID:(id)arg1;	// IMP=0x0000000000014e29
+ (id)acceptShareWithBeaconUUID:(id)arg1;	// IMP=0x0000000000014dbd
+ (id)stopSharingWithBeaconUUID:(id)arg1 handle:(id)arg2;	// IMP=0x0000000000014d26
+ (id)startSharingWithBeaconUUID:(id)arg1 handle:(id)arg2 expiration:(id)arg3;	// IMP=0x0000000000014c77
+ (id)locate:(id)arg1;	// IMP=0x0000000000014c0e
+ (id)disableNotifyWhenFound:(id)arg1;	// IMP=0x0000000000014ba2
+ (id)enableNotifyWhenFound:(id)arg1;	// IMP=0x0000000000014b36
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014b2e
- (void).cxx_destruct;	// IMP=0x00000000000160fd
@property(nonatomic) _Bool enableLostMode; // @synthesize enableLostMode=_enableLostMode;
@property(copy, nonatomic) NSString *obfuscatedIdentifier; // @synthesize obfuscatedIdentifier=_obfuscatedIdentifier;
@property(copy, nonatomic) NSString *lostModePhoneNumber; // @synthesize lostModePhoneNumber=_lostModePhoneNumber;
@property(copy, nonatomic) NSString *lostModeMessage; // @synthesize lostModeMessage=_lostModeMessage;
@property(copy, nonatomic) NSString *lostModeEmail; // @synthesize lostModeEmail=_lostModeEmail;
@property(copy, nonatomic) SPHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) long long playSoundContext; // @synthesize playSoundContext=_playSoundContext;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSUUID *beaconIdentifier; // @synthesize beaconIdentifier=_beaconIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *taskName;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015d68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015b04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015963
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 playSoundContext:(long long)arg5 handle:(id)arg6 lostModeMessage:(id)arg7 lostModePhoneNumber:(id)arg8 obfuscatedIdentifier:(id)arg9 identifier:(id)arg10;	// IMP=0x00000000000157ef
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeEmail:(id)arg6 lostModeMessage:(id)arg7 lostModePhoneNumber:(id)arg8 obfuscatedIdentifier:(id)arg9 identifier:(id)arg10;	// IMP=0x0000000000015643
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8;	// IMP=0x0000000000015507

@end
