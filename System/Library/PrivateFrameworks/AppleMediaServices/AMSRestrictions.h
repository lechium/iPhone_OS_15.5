//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMSRestrictions : NSObject
{
}

+ (id)_featureNameForMediaType:(unsigned long long)arg1;	// IMP=0x0000000000200063
+ (id)rankForMediaType:(unsigned long long)arg1;	// IMP=0x00000000001fff9f
+ (_Bool)requirePasswordImmediately;	// IMP=0x00000000001fff46
+ (_Bool)onDeviceDiagnosticsAllowed;	// IMP=0x00000000001ffefb
+ (long long)maximumMediaRank;	// IMP=0x00000000001ffef0
+ (_Bool)isParentalControlEnabled;	// IMP=0x00000000001ffebe
+ (_Bool)inAppPurchaseAllowed;	// IMP=0x00000000001ffe65
+ (_Bool)explicitContentAllowed;	// IMP=0x00000000001ffe0c
+ (_Bool)eroticaAllowed;	// IMP=0x00000000001ffdb3
+ (_Bool)allowActiveAccountModifications;	// IMP=0x00000000001ffd5a
+ (_Bool)allowAccountModifications;	// IMP=0x00000000001ffce9

@end
