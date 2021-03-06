//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _SFPasswordCredential
{
    NSString *_username;	// 96 = 0x60
    NSString *_password;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006d8b
- (void).cxx_destruct;	// IMP=0x00000000000076f7
@property(copy, nonatomic, getter=_cachedPassword) NSString *password;
- (void)usePasswordWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007524
@property(copy, nonatomic) NSString *username;
- (id)debugDescription;	// IMP=0x00000000000074e4
- (id)description;	// IMP=0x00000000000074d0
- (id)descriptionShowingPassword:(_Bool)arg1;	// IMP=0x00000000000073bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000720b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007195
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000070f6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006f0b
- (id)_initWithUsername:(id)arg1 primaryServiceIdentifier:(id)arg2 supplementaryServiceIdentifiers:(id)arg3;	// IMP=0x0000000000006e7d
- (id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3 supplementaryServiceIdentifiers:(id)arg4;	// IMP=0x0000000000006da8
- (id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3;	// IMP=0x0000000000006d93

@end

