//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSPersonNameComponents, NSString;

@interface CPLShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isCurrentUser;	// 8 = 0x8
    _Bool _hasiCloudAccount;	// 9 = 0x9
    long long _role;	// 16 = 0x10
    long long _acceptanceStatus;	// 24 = 0x18
    long long _permission;	// 32 = 0x20
    NSString *_userIdentifier;	// 40 = 0x28
    NSString *_email;	// 48 = 0x30
    NSString *_phoneNumber;	// 56 = 0x38
    NSPersonNameComponents *_nameComponents;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000053594
+ (void)initialize;	// IMP=0x0000000000053560
+ (id)descriptionForRole:(long long)arg1;	// IMP=0x00000000000534d8
+ (id)descriptionForPermission:(long long)arg1;	// IMP=0x0000000000053450
+ (id)descriptionForAcceptanceStatus:(long long)arg1;	// IMP=0x00000000000533c9
- (void).cxx_destruct;	// IMP=0x000000000005338b
@property(nonatomic) _Bool hasiCloudAccount; // @synthesize hasiCloudAccount=_hasiCloudAccount;
@property(copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(nonatomic) long long permission; // @synthesize permission=_permission;
@property(nonatomic) long long acceptanceStatus; // @synthesize acceptanceStatus=_acceptanceStatus;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
- (id)redactedDescription;	// IMP=0x00000000000531fa
- (id)description;	// IMP=0x000000000005311d
- (unsigned long long)hash;	// IMP=0x000000000005310b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000530f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053031
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000052f21
- (id)initWithUserIdentifier:(id)arg1 phoneNumber:(id)arg2 email:(id)arg3;	// IMP=0x0000000000052e33
- (id)initWithEmail:(id)arg1;	// IMP=0x0000000000052e1a
- (id)initWithPhoneNumber:(id)arg1;	// IMP=0x0000000000052e00
- (id)initWithUserIdentifier:(id)arg1;	// IMP=0x0000000000052de9
- (id)init;	// IMP=0x0000000000052dd0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052c31

@end

