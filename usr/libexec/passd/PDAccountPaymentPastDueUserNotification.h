//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDAccountPaymentPastDueUserNotification
{
    _Bool _useGenericMessaging;	// 104 = 0x68
    NSString *_accountIdentifier;	// 112 = 0x70
    unsigned long long _featureIdentifier;	// 120 = 0x78
    long long _variant;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d1f3d
- (void).cxx_destruct;	// IMP=0x00200000001d25e8
@property(nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) _Bool useGenericMessaging; // @synthesize useGenericMessaging=_useGenericMessaging;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000001d2429
- (_Bool)needsNotificationSettings;	// IMP=0x00100000001d2421
- (unsigned long long)notificationType;	// IMP=0x00100000001d2416
- (_Bool)isValid;	// IMP=0x00100000001d23b2
- (id)_title;	// IMP=0x00100000001d2370
- (id)_messageString;	// IMP=0x00100000001d21f1
- (long long)_variantForDay:(long long)arg1 cycle:(long long)arg2;	// IMP=0x00100000001d2129
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d204b
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d1f45
- (void)_updateForNextPastDueNotificationForAccount:(id)arg1;	// IMP=0x00100000001d17a5
- (id)initWithPassUniqueIdentifier:(id)arg1 account:(id)arg2;	// IMP=0x00100000001d15db

@end
