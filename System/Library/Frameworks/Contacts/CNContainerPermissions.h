//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _canCreateContacts;	// 8 = 0x8
    _Bool _canDeleteContacts;	// 9 = 0x9
    _Bool _canCreateGroups;	// 10 = 0xa
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059085
@property(readonly, nonatomic) _Bool canCreateGroups; // @synthesize canCreateGroups=_canCreateGroups;
@property(readonly, nonatomic) _Bool canDeleteContacts; // @synthesize canDeleteContacts=_canDeleteContacts;
@property(readonly, nonatomic) _Bool canCreateContacts; // @synthesize canCreateContacts=_canCreateContacts;
- (id)description;	// IMP=0x00000000000594f5
- (unsigned long long)hash;	// IMP=0x0000000000059353
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000059098
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005908d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000058fff
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000058f52
- (id)initWithCanCreateContacts:(_Bool)arg1 canDeleteContacts:(_Bool)arg2 canCreateGroups:(_Bool)arg3;	// IMP=0x0000000000058ee3
- (id)init;	// IMP=0x0000000000058eca

@end

