//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDAccountPaymentScheduledUserNotification
{
    unsigned long long _featureIdentifier;	// 104 = 0x68
    NSString *_messageString;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001cf7c8
- (void).cxx_destruct;	// IMP=0x00200000001d0260
@property(readonly, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (unsigned long long)notificationType;	// IMP=0x00100000001d0233
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000001d015e
- (_Bool)isValid;	// IMP=0x00100000001d00ed
- (id)_messageStringForPayment:(id)arg1 account:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x00100000001cf94e
- (id)_titleString;	// IMP=0x00100000001cf932
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001cf892
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001cf7d0
- (id)initWithAccount:(id)arg1 payment:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x00100000001cf338

@end

