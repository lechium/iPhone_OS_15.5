//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AACustodianRecoveryRequestContext : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _CLIMode;	// 8 = 0x8
    _Bool _dataOnlyRecovery;	// 9 = 0x9
    NSString *_recoverySessionID;	// 16 = 0x10
    NSString *_ownerAppleID;	// 24 = 0x18
    NSString *_recoveryCode;	// 32 = 0x20
    NSUUID *_custodianUUID;	// 40 = 0x28
    NSString *_custodianRecoveryToken;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003e86b
- (void).cxx_destruct;	// IMP=0x000000000003ecc8
@property(nonatomic, getter=isDataOnlyRecovery) _Bool dataOnlyRecovery; // @synthesize dataOnlyRecovery=_dataOnlyRecovery;
@property(nonatomic) _Bool CLIMode; // @synthesize CLIMode=_CLIMode;
@property(copy, nonatomic) NSString *custodianRecoveryToken; // @synthesize custodianRecoveryToken=_custodianRecoveryToken;
@property(copy, nonatomic) NSUUID *custodianUUID; // @synthesize custodianUUID=_custodianUUID;
@property(copy, nonatomic) NSString *recoveryCode; // @synthesize recoveryCode=_recoveryCode;
@property(copy, nonatomic) NSString *ownerAppleID; // @synthesize ownerAppleID=_ownerAppleID;
@property(copy, nonatomic) NSString *recoverySessionID; // @synthesize recoverySessionID=_recoverySessionID;
- (id)description;	// IMP=0x000000000003ebc2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003eaf2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003ea18
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003e873

@end
