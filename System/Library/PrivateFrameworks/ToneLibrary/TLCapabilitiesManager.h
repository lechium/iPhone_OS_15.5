//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject
{
    _Bool _isRingtoneStoreAvailable;	// 8 = 0x8
    _Bool _isAlertToneStoreAvailable;	// 9 = 0x9
    NSDictionary *_deviceCodeNameSimplicationMapping;	// 16 = 0x10
}

+ (id)sharedCapabilitiesManager;	// IMP=0x0000000000032db9
- (void).cxx_destruct;	// IMP=0x000000000003351f
@property(readonly, nonatomic, getter=isHomePod) _Bool homePod;
@property(readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property(readonly, nonatomic) NSString *deviceCodeName;
@property(readonly, nonatomic) _Bool hasUserGeneratedVibrationsCapability;
@property(readonly, nonatomic) _Bool hasSynchronizedVibrationsCapability;
@property(readonly, nonatomic) _Bool hasVibratorCapability;
@property(readonly, nonatomic) _Bool wantsModernDefaultRingtone;
@property(readonly, nonatomic, getter=isAlertToneStoreAvailable) _Bool alertToneStoreAvailable;
@property(readonly, nonatomic, getter=isRingtoneStoreAvailable) _Bool ringtoneStoreAvailable;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1;	// IMP=0x0000000000033336
- (void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2;	// IMP=0x00000000000331ae
- (void)_checkRingtoneStoreAvailability;	// IMP=0x000000000003305d
- (_Bool)_hasTelephonyCapability;	// IMP=0x0000000000033055
- (void)dealloc;	// IMP=0x0000000000032fbc
- (id)init;	// IMP=0x0000000000032e0e

@end

