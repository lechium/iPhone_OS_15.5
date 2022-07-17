//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeSettingsUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface STCommunicationLimits : NSObject <NSCopying>
{
    _Bool _contactsEditable;	// 8 = 0x8
    long long _screenTimeCommunicationLimit;	// 16 = 0x10
    long long _downtimeCommunicationLimit;	// 24 = 0x18
    long long _contactManagementState;	// 32 = 0x20
}

+ (void)setHasShownCompatibilityAlert:(_Bool)arg1 forDSID:(id)arg2;	// IMP=0x000000000003b1d9
+ (_Bool)hasShownCompatibilityAlertForDSID:(id)arg1;	// IMP=0x000000000003b124
@property _Bool contactsEditable; // @synthesize contactsEditable=_contactsEditable;
@property long long contactManagementState; // @synthesize contactManagementState=_contactManagementState;
@property long long downtimeCommunicationLimit; // @synthesize downtimeCommunicationLimit=_downtimeCommunicationLimit;
@property long long screenTimeCommunicationLimit; // @synthesize screenTimeCommunicationLimit=_screenTimeCommunicationLimit;
- (unsigned long long)hash;	// IMP=0x000000000003b49f
- (_Bool)isEqualToCommunicationLimits:(id)arg1;	// IMP=0x000000000003b3c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b35d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b30b

@end
