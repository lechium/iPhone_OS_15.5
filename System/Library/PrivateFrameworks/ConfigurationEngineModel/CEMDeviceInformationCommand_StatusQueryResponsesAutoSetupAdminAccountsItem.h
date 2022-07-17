//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem
{
    NSString *_statusGUID;	// 16 = 0x10
    NSString *_statusShortName;	// 24 = 0x18
}

+ (id)buildRequiredOnly;	// IMP=0x0000000000043585
+ (id)buildWithGUID:(id)arg1 withShortName:(id)arg2;	// IMP=0x00000000000434f9
+ (id)allowedStatusKeys;	// IMP=0x000000000004344b
- (void).cxx_destruct;	// IMP=0x0000000000043a06
@property(copy, nonatomic) NSString *statusShortName; // @synthesize statusShortName=_statusShortName;
@property(copy, nonatomic) NSString *statusGUID; // @synthesize statusGUID=_statusGUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004392d
- (id)serializePayload;	// IMP=0x0000000000043876
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004359e

@end
