//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface MIInstallationIdentity : NSObject
{
    NSData *_installSessionID;	// 8 = 0x8
    NSData *_uniqueInstallID;	// 16 = 0x10
}

+ (id)installationIdentityForBundle:(id)arg1 settingIfNotSet:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0020000000051f48
+ (id)identityForUpdateOfBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000051d82
+ (id)newIdentityForBundle:(id)arg1;	// IMP=0x0010000000051ade
- (void).cxx_destruct;	// IMP=0x00200000000533cf
// Error: Property attributes should begin with the type ('T') attribute, property name: uniqueInstallID
// Property attributes: (null)

@property(copy, nonatomic) NSData *installSessionID; // @synthesize installSessionID=_installSessionID;
- (id)description;	// IMP=0x00100000000532d4
- (_Bool)writeToBundle:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000531b2
- (_Bool)_writeToBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000053021
- (_Bool)_writeToBundle:(id)arg1 fd:(int)arg2 fdLocation:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005292a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000052895
- (unsigned long long)hash;	// IMP=0x0010000000052808
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000052637
- (id)initWithSessionID:(id)arg1 uniqueID:(id)arg2;	// IMP=0x00100000000524e3

@end
