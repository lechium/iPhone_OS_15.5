//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKBiometricPassPreflightManager;

@protocol NPKBiometricPassPreflightManagerDataSource <NSObject>
- (void)biometricPassPreflightManager:(NPKBiometricPassPreflightManager *)arg1 provisionedCredentialCountsForType:(unsigned long long)arg2 completion:(void (^)(unsigned long long))arg3;
@end

