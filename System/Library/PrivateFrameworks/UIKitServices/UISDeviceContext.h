//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCSecureCoding-Protocol.h>
#import <UIKitServices/NSCopying-Protocol.h>
#import <UIKitServices/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>
{
    NSDictionary *_deviceInfoKeysToValues;	// 8 = 0x8
}

+ (id)_allKeys;	// IMP=0x00000000000131bf
+ (id)_keysToValueTypes;	// IMP=0x00000000000130d8
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0000000000012bdb
+ (id)defaultContext;	// IMP=0x00000000000124a8
- (void).cxx_destruct;	// IMP=0x000000000001333b
- (id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1;	// IMP=0x00000000000132c1
- (id)_rawDeviceInfoKeysToValues;	// IMP=0x00000000000130ca
- (_Bool)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2;	// IMP=0x0000000000013061
- (_Bool)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2;	// IMP=0x000000000001303b
- (long long)_valueTypeForValue:(id)arg1;	// IMP=0x0000000000012fd6
- (long long)_valueTypeForKey:(id)arg1;	// IMP=0x0000000000012e89
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012d2a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012cfb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012cf0
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000012c63
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000012be3
- (id)deviceInfoStringValueForKey:(id)arg1;	// IMP=0x0000000000012af4
- (_Bool)deviceInfoBoolValueForKey:(id)arg1;	// IMP=0x00000000000129f3
- (long long)deviceInfoIntegerValueForKey:(id)arg1;	// IMP=0x00000000000128f2
- (double)deviceInfoFloatValueForKey:(id)arg1;	// IMP=0x00000000000127ed
- (_Bool)hasDeviceInfoValueForKey:(id)arg1;	// IMP=0x00000000000126e2
- (id)initWithDeviceInfoValues:(id)arg1;	// IMP=0x0000000000012664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

