//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDecimalNumber;

@interface PDPassPaymentDailyDailyCashWithPercentageUserNotification
{
    NSDecimalNumber *_percentage;	// 128 = 0x80
    NSArray *_merchantNames;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001d60df
- (void).cxx_destruct;	// IMP=0x00200000001d6639
@property(readonly, nonatomic) NSArray *merchantNames; // @synthesize merchantNames=_merchantNames;
@property(readonly, nonatomic) NSDecimalNumber *percentage; // @synthesize percentage=_percentage;
- (unsigned long long)notificationType;	// IMP=0x00100000001d660c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000001d60e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d6040
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d5f54
- (id)initWithPercentage:(id)arg1 merchantNames:(id)arg2 periodAmount:(id)arg3 date:(id)arg4 hasRedemptions:(_Bool)arg5 forPassUniqueIdentifier:(id)arg6;	// IMP=0x00100000001d5e7b

@end
