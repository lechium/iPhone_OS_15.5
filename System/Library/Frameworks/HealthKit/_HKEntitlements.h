//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    NSDictionary *_entitlementValues;	// 16 = 0x10
}

+ (id)_allowedEntitlementsSet;	// IMP=0x0000000000002dda
+ (id)entitlementsWithApplicationIdentifier:(id)arg1;	// IMP=0x000000000000e118
+ (id)entitlementsWithDictionary:(id)arg1;	// IMP=0x000000000000e1ea
+ (id)_entitlementsWithSecTask:(struct __SecTask *)arg1 valueOverrides:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000004a26
+ (id)entitlementsWithConnection:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004614
+ (void)_setEntitlementsForCurrentTask:(id)arg1;	// IMP=0x000000000006cca4
+ (id)_containerAppExtensionEntitlementsForCurrentTask;	// IMP=0x000000000006cacc
+ (id)entitlementsForCurrentTaskWithError:(id *)arg1;	// IMP=0x000000000006ca01
- (void).cxx_destruct;	// IMP=0x000000000000e78b
@property(readonly, copy, nonatomic) NSDictionary *entitlementValues; // @synthesize entitlementValues=_entitlementValues;
- (id)description;	// IMP=0x000000000006d478
- (id)_typesFromIdentifierArray:(id)arg1;	// IMP=0x000000000006cf37
- (id)typesForReadAuthorizationOverride;	// IMP=0x000000000006cece
- (id)typesForWriteAuthorizationOverride;	// IMP=0x000000000006ce65
- (id)valueForEntitlement:(id)arg1;	// IMP=0x0000000000002cd7
- (id)stringForEntitlement:(id)arg1;	// IMP=0x000000000000518b
- (_Bool)hasPrivateAccessEntitlementWithIdentifer:(id)arg1;	// IMP=0x000000000006ce46
- (_Bool)hasAccessEntitlementWithIdentifer:(id)arg1;	// IMP=0x000000000006ce27
- (_Bool)arrayEntitlement:(id)arg1 containsString:(id)arg2;	// IMP=0x000000000006cd97
- (_Bool)hasBackgroundDeliveryAPIAccess;	// IMP=0x000000000006cd7b
- (_Bool)hasPrivateMetadataAccess;	// IMP=0x000000000006cd32
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000000005128
- (id)applicationIdentifier;	// IMP=0x0000000000004e8d
- (id)_initWithEntitlementValues:(id)arg1;	// IMP=0x0000000000004d0e
- (id)init;	// IMP=0x000000000006ccb8

@end

