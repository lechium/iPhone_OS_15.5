//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, PDAppletSubcredentialManager, PKAppletSubcredential, PKPaymentApplication;

@protocol PDAppletSubcredentialManagerObserver <NSObject>

@optional
- (void)sessionDidReceiveData:(NSData *)arg1;
- (void)sessionDidChangeConnectionStatus:(long long)arg1;
- (void)appletSubcredentialManager:(PDAppletSubcredentialManager *)arg1 didUpdateRangingSuspensionReasons:(unsigned long long)arg2 forCredential:(PKAppletSubcredential *)arg3 forPaymentApplication:(PKPaymentApplication *)arg4;
- (void)appletSubcredentialManager:(PDAppletSubcredentialManager *)arg1 didUpdateCredential:(PKAppletSubcredential *)arg2 onPassWithIdentifier:(NSString *)arg3;
@end
