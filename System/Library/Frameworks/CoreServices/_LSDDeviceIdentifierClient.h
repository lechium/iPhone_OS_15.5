//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/_LSDDeviceIdentifierProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierClient <_LSDDeviceIdentifierProtocol>
{
}

- (void)clearAllIdentifiersOfType:(long long)arg1;	// IMP=0x000000000009b92c
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000009b6d8
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000009b4e4
- (void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000009b359
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009b059
- (void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a832
- (_Bool)canAccessAdvertisingIdentifier;	// IMP=0x000000000009a24c
- (_Bool)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1;	// IMP=0x000000000009a13c
- (_Bool)hasUninstallEntitlement;	// IMP=0x000000000009a0a9
- (unsigned int)findAppBundleForExecutableURL:(id)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x0000000000099fcc

@end

