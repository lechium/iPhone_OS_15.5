//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDAccountBackgroundProvisionCompleteUserNotification
{
    unsigned long long _feature;	// 120 = 0x78
}

+ (_Bool);	// IMP=0x00400000001da005
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00200000001da0c3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001da00d
- (id)_messageString;	// IMP=0x00100000001d9fd2
- (id)_titleString;	// IMP=0x00100000001d9f9f
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000001d9ee2
- (_Bool)isValid;	// IMP=0x00100000001d9ecd
- (unsigned long long)notificationType;	// IMP=0x00100000001d9ec2
- (id)initWithFeatureIdentifier:(unsigned long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00100000001d9dbc

@end

