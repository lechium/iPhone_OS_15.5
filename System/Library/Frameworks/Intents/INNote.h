//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INNote : NSObject <INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_title;	// 8 = 0x8
    NSArray *_contents;	// 16 = 0x10
    INSpeakableString *_groupName;	// 24 = 0x18
    NSDateComponents *_createdDateComponents;	// 32 = 0x20
    NSDateComponents *_modifiedDateComponents;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSString *_accountIdentifier;	// 56 = 0x38
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000029de27
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029de1f
- (void).cxx_destruct;	// IMP=0x000000000029ddc0
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents; // @synthesize modifiedDateComponents=_modifiedDateComponents;
@property(readonly, copy, nonatomic) NSDateComponents *createdDateComponents; // @synthesize createdDateComponents=_createdDateComponents;
@property(readonly, copy, nonatomic) INSpeakableString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic, setter=_setContents:) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, copy, nonatomic) INSpeakableString *title; // @synthesize title=_title;
- (id)_dictionaryRepresentation;	// IMP=0x000000000029da8a
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000029d9ae
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000029d782
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029d6b1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029d398
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029d38d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029d235
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6 accountIdentifier:(id)arg7;	// IMP=0x000000000029d019
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;	// IMP=0x000000000029ceba
- (id)init;	// IMP=0x000000000029ce8b
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000892f8
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000157112
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x0000000000212dbc
- (id)_intents_cacheableObjects;	// IMP=0x0000000000212bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
