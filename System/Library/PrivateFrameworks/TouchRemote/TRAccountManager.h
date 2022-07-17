//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TRAccountManager : NSObject
{
}

+ (id)associatedAccountServicesForIDMSAccount:(id)arg1;	// IMP=0x00000000000237b0
+ (id)_idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3;	// IMP=0x0000000000023304
+ (id)_idmsAccountForGameCenterService;	// IMP=0x000000000002322e
+ (id)_idmsAccountForITunesService;	// IMP=0x000000000002315f
+ (id)_idmsAccountForICloudService;	// IMP=0x0000000000023089
+ (id)_primaryGameCenterAccount;	// IMP=0x0000000000022fd4
+ (id)_primaryITunesAccount;	// IMP=0x0000000000022f7d
+ (id)_primaryICloudAccount;	// IMP=0x0000000000022f26
+ (id)idmsAccountForAccountService:(unsigned long long)arg1;	// IMP=0x0000000000022e2c

@end
