//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeWalletDataSource-Protocol.h>

@class NSString;

@interface HMDHomeWalletDataSource : HMFObject <HMDHomeWalletDataSource>
{
    int _passCodeChangeNotificationToken;	// 8 = 0x8
}

@property int passCodeChangeNotificationToken; // @synthesize passCodeChangeNotificationToken=_passCodeChangeNotificationToken;
- (void)canNotifyAboutExpressModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006b4fbc
- (void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b4f47
- (id)numberValueFromNoBackupStoreWithKey:(id)arg1;	// IMP=0x00000000006b4ef6
- (void)persistNumberValueToNoBackupStore:(id)arg1 withKey:(id)arg2;	// IMP=0x00000000006b4ecd
- (_Bool)registerForPasscodeChangeNotificationWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b4da3
@property(readonly) long long walletKeyColor;
@property(readonly) double accessoryWriteRetryInterval;
@property(readonly) long long accessoryWriteMaxRetryCount;
@property(readonly, getter=isResidentCapable) _Bool residentCapable;
@property(readonly) _Bool isWatch;
- (void)dealloc;	// IMP=0x00000000006b4ae1
- (id)init;	// IMP=0x00000000006b4a9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
