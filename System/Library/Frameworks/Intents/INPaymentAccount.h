//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INBalanceAmount, INSpeakableString, NSString;

@interface INPaymentAccount : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_nickname;	// 8 = 0x8
    NSString *_accountNumber;	// 16 = 0x10
    long long _accountType;	// 24 = 0x18
    INSpeakableString *_organizationName;	// 32 = 0x20
    INBalanceAmount *_balance;	// 40 = 0x28
    INBalanceAmount *_secondaryBalance;	// 48 = 0x30
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0000000000352571
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000352569
- (void).cxx_destruct;	// IMP=0x0000000000352520
@property(readonly, copy, nonatomic) INBalanceAmount *secondaryBalance; // @synthesize secondaryBalance=_secondaryBalance;
@property(readonly, copy, nonatomic) INBalanceAmount *balance; // @synthesize balance=_balance;
@property(readonly, copy, nonatomic) INSpeakableString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(readonly, copy, nonatomic) INSpeakableString *nickname; // @synthesize nickname=_nickname;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000352278
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000035219c
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0000000000351f26
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000351e65
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000351c8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000351c82
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000351b64
@property(readonly) unsigned long long hash;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4;	// IMP=0x0000000000351a7d
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4 balance:(id)arg5 secondaryBalance:(id)arg6;	// IMP=0x000000000035193d
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000088f21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

