//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKFamilyMember;

@interface PDPeerPaymentGraduationUserNotification
{
    PKFamilyMember *_familyMember;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001ce6fa
- (void).cxx_destruct;	// IMP=0x00200000001ce9ce
- (unsigned long long)familyNotificationType;	// IMP=0x00100000001ce9b7
- (unsigned long long)notificationType;	// IMP=0x00100000001ce9ac
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000001ce8c1
- (id)_messageString;	// IMP=0x00100000001ce82b
- (id)_titleString;	// IMP=0x00100000001ce81a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001ce79d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001ce702
- (id)initWithPassUniqueIdentifier:(id)arg1 familyMember:(id)arg2;	// IMP=0x00100000001ce607

@end
