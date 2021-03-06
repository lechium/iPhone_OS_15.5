//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSNumber, NSString;

@interface _ICQMegaBackupEligibilityRequest
{
    _Bool _backupAllowed;	// 8 = 0x8
    _Bool _needsTemporaryStorage;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSString *_deviceBackupUUID;	// 24 = 0x18
    NSNumber *_deviceTotalUsedSpaceInBytes;	// 32 = 0x20
    long long _entryMethod;	// 40 = 0x28
    NSString *_deepLinkURL;	// 48 = 0x30
    NSNumber *_daysUntilExpiration;	// 56 = 0x38
}

+ (id)eligibilityRequestWithAccount:(id)arg1 deviceBackupUUID:(id)arg2 deviceTotalUsedSpaceInBytes:(id)arg3 entryMethod:(long long)arg4 deepLinkURL:(id)arg5 requestURL:(id)arg6 URLSession:(id)arg7 queue:(id)arg8 error:(id *)arg9;	// IMP=0x00000000000385e2
- (void).cxx_destruct;	// IMP=0x0000000000038ba5
@property(readonly, nonatomic) NSNumber *daysUntilExpiration; // @synthesize daysUntilExpiration=_daysUntilExpiration;
@property(readonly, nonatomic) _Bool needsTemporaryStorage; // @synthesize needsTemporaryStorage=_needsTemporaryStorage;
@property(readonly, nonatomic, getter=isBackupAllowed) _Bool backupAllowed; // @synthesize backupAllowed=_backupAllowed;
@property(readonly, copy, nonatomic) NSString *deepLinkURL; // @synthesize deepLinkURL=_deepLinkURL;
@property(readonly, nonatomic) long long entryMethod; // @synthesize entryMethod=_entryMethod;
@property(readonly, copy, nonatomic) NSNumber *deviceTotalUsedSpaceInBytes; // @synthesize deviceTotalUsedSpaceInBytes=_deviceTotalUsedSpaceInBytes;
@property(readonly, copy, nonatomic) NSString *deviceBackupUUID; // @synthesize deviceBackupUUID=_deviceBackupUUID;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)handleResponse:(id)arg1 body:(id)arg2;	// IMP=0x00000000000389ee
- (void)addAdditionalRequestHeaders:(id)arg1;	// IMP=0x00000000000389bf
- (id)bodyJSON;	// IMP=0x000000000003886c
- (id)additionalRequestHeaders;	// IMP=0x0000000000038744

@end

