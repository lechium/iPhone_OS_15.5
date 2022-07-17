//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings
{
    NSNumber *_statusFirewallEnabled;	// 16 = 0x10
    NSNumber *_statusBlockAllIncoming;	// 24 = 0x18
    NSNumber *_statusStealthMode;	// 32 = 0x20
    NSArray *_statusApplications;	// 40 = 0x28
}

+ (id)buildRequiredOnly;	// IMP=0x00000000000a36e3
+ (id)buildWithFirewallEnabled:(id)arg1 withBlockAllIncoming:(id)arg2 withStealthMode:(id)arg3 withApplications:(id)arg4;	// IMP=0x00000000000a3605
+ (id)allowedStatusKeys;	// IMP=0x00000000000a3541
- (void).cxx_destruct;	// IMP=0x00000000000a3d6b
@property(copy, nonatomic) NSArray *statusApplications; // @synthesize statusApplications=_statusApplications;
@property(copy, nonatomic) NSNumber *statusStealthMode; // @synthesize statusStealthMode=_statusStealthMode;
@property(copy, nonatomic) NSNumber *statusBlockAllIncoming; // @synthesize statusBlockAllIncoming=_statusBlockAllIncoming;
@property(copy, nonatomic) NSNumber *statusFirewallEnabled; // @synthesize statusFirewallEnabled=_statusFirewallEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a3c0e
- (id)serializePayload;	// IMP=0x00000000000a3ae5
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a36fc

@end
