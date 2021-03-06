//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSString;

@interface INBillPayee : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_nickname;	// 8 = 0x8
    NSString *_accountNumber;	// 16 = 0x10
    INSpeakableString *_organizationName;	// 24 = 0x18
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000002a9d2b
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002a9d23
- (void).cxx_destruct;	// IMP=0x00000000002a9cf0
@property(readonly, copy, nonatomic) INSpeakableString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(readonly, copy, nonatomic) INSpeakableString *nickname; // @synthesize nickname=_nickname;
- (id)_dictionaryRepresentation;	// IMP=0x00000000002a9b76
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000002a9a9a
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000002a9963
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a98e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a9797
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a978c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a96bc
@property(readonly) unsigned long long hash;
- (id)initWithNickname:(id)arg1 number:(id)arg2 organizationName:(id)arg3;	// IMP=0x00000000002a957c
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000089a39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

