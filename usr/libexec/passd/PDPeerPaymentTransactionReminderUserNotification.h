//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDPeerPaymentTransactionReminderUserNotification
{
    unsigned long long _reminderPeriod;	// 120 = 0x78
}

+ (id)notificationIdentifierForTransactionServiceIdentifier:(id)arg1 reminderPeriod:(unsigned long long)arg2;	// IMP=0x00200000001cd9a5
@property(readonly, nonatomic) unsigned long long reminderPeriod; // @synthesize reminderPeriod=_reminderPeriod;
- (id)_messageString;	// IMP=0x00100000001cdc1e
- (id)_titleString;	// IMP=0x00100000001cdbda
- (unsigned long long)notificationType;	// IMP=0x00100000001cdbcf
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3 reminderPeriod:(unsigned long long)arg4;	// IMP=0x00100000001cd9e3

@end

