//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedSettings/_TtP15ManagedSettings20ShieldExtensionProxy_-Protocol.h>
#import <ManagedSettings/_TtP15ManagedSettings21OverrideSettingsProxy_-Protocol.h>

@protocol _TtP15ManagedSettings20ManagedSettingsAgent_ <_TtP15ManagedSettings20ShieldExtensionProxy_, _TtP15ManagedSettings21OverrideSettingsProxy_>
- (void)effectiveMediaSettings:(void (^)(NSNumber *, NSNumber *, NSError *))arg1;
- (void)updateEffectiveSettings:(void (^)(NSError *))arg1;
@end

