//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKFamilyMember, PKFeatureApplication;

@interface PKInboxMessage : NSObject
{
    _Bool _hidden;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    PKFeatureApplication *_accountUserInvitation;	// 32 = 0x20
    PKFamilyMember *_familyMember;	// 40 = 0x28
}

+ (id)accountUserInvitationInboxMessageWithAccountUserInvitation:(id)arg1 familyMember:(id)arg2;	// IMP=0x0000000000165334
- (void).cxx_destruct;	// IMP=0x0000000000165577
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKFeatureApplication *accountUserInvitation; // @synthesize accountUserInvitation=_accountUserInvitation;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) _Bool shouldBadge;
- (_Bool)_isEqualToInboxMessage:(id)arg1;	// IMP=0x0000000000165487
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016541f
- (id)initWithType:(long long)arg1 identifier:(id)arg2;	// IMP=0x00000000001652b6

@end

