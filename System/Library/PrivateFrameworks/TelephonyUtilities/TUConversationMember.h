//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, TUHandle;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isLightweightMember;	// 8 = 0x8
    _Bool _joinedFromLetMeIn;	// 9 = 0x9
    _Bool _isOtherInvitedHandle;	// 10 = 0xa
    TUHandle *_handle;	// 16 = 0x10
    NSString *_nickname;	// 24 = 0x18
    long long _validationSource;	// 32 = 0x20
    NSDate *_dateReceivedLetMeIn;	// 40 = 0x28
    TUHandle *_lightweightPrimary;	// 48 = 0x30
    unsigned long long _lightweightPrimaryParticipantIdentifier;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004baae
- (void).cxx_destruct;	// IMP=0x000000000004c142
@property(nonatomic) _Bool isOtherInvitedHandle; // @synthesize isOtherInvitedHandle=_isOtherInvitedHandle;
@property(nonatomic) _Bool joinedFromLetMeIn; // @synthesize joinedFromLetMeIn=_joinedFromLetMeIn;
@property(nonatomic) unsigned long long lightweightPrimaryParticipantIdentifier; // @synthesize lightweightPrimaryParticipantIdentifier=_lightweightPrimaryParticipantIdentifier;
@property(copy, nonatomic) TUHandle *lightweightPrimary; // @synthesize lightweightPrimary=_lightweightPrimary;
@property(nonatomic) NSDate *dateReceivedLetMeIn; // @synthesize dateReceivedLetMeIn=_dateReceivedLetMeIn;
@property(nonatomic) _Bool isLightweightMember; // @synthesize isLightweightMember=_isLightweightMember;
@property(nonatomic) long long validationSource; // @synthesize validationSource=_validationSource;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004bd7b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004bab6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b91f
- (unsigned long long)hash;	// IMP=0x000000000004b85e
- (_Bool)isEqualToMember:(id)arg1;	// IMP=0x000000000004b713
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b6b6
@property(readonly, nonatomic, getter=isValidated) _Bool validated;
- (_Bool)pseudonym;	// IMP=0x000000000004b60c
@property(copy, nonatomic) TUHandle *splitSessionPrimary;
@property(nonatomic) _Bool isSplitSessionMember;
- (_Bool)representsSameMemberAs:(id)arg1;	// IMP=0x000000000004b533
@property(readonly, copy, nonatomic) NSArray *idsDestinations;
@property(readonly, copy, nonatomic) NSString *idsDestination;
@property(readonly, copy, nonatomic) NSString *idsFromID;
@property(readonly, copy, nonatomic) NSSet *handles;
- (id)description;	// IMP=0x000000000004adcf
- (id)initWithDestinations:(id)arg1;	// IMP=0x000000000004ad45
- (id)initWithDestination:(id)arg1;	// IMP=0x000000000004aceb
- (id)initWithContact:(id)arg1;	// IMP=0x000000000004ac6a
- (id)initWithContact:(id)arg1 additionalHandles:(id)arg2;	// IMP=0x000000000004a7a5
- (id)initWithHandles:(id)arg1;	// IMP=0x000000000004a74f
- (id)initWithHandle:(id)arg1 nickname:(id)arg2 joinedFromLetMeIn:(_Bool)arg3;	// IMP=0x000000000004a515
- (id)initWithHandle:(id)arg1 nickname:(id)arg2;	// IMP=0x000000000004a500
- (id)initWithHandle:(id)arg1;	// IMP=0x000000000004a4e9

@end
