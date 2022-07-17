//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface EMAccount
{
    _Bool _primaryiCloudAccount;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_username;	// 24 = 0x18
    NSString *_hostname;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000332b
+ (id)sortDescriptorForNameAscending:(_Bool)arg1;	// IMP=0x0000000000004318
+ (id)predicateForDeliveryAccounts;	// IMP=0x00000000000042dd
+ (id)predicateForReceivingAccounts;	// IMP=0x00000000000042a2
- (void).cxx_destruct;	// IMP=0x0000000000003607
@property(readonly, nonatomic, getter=isPrimaryiCloudAccount) _Bool primaryiCloudAccount; // @synthesize primaryiCloudAccount=_primaryiCloudAccount;
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000348b
- (id)ef_publicDescription;	// IMP=0x0000000000003333

@end
