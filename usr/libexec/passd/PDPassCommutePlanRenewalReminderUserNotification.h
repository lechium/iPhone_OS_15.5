//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDPassCommutePlanRenewalReminderUserNotification
{
    NSString *_title;	// 104 = 0x68
    NSString *_message;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001cc78a
- (void).cxx_destruct;	// IMP=0x00200000001cc977
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_messageString;	// IMP=0x00100000001cc940
- (id)_titleString;	// IMP=0x00100000001cc92b
- (unsigned long long)notificationType;	// IMP=0x00100000001cc920
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001cc881
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001cc792
- (id)initWithPaymentPass:(id)arg1 commutePlan:(id)arg2;	// IMP=0x00100000001cc433

@end
