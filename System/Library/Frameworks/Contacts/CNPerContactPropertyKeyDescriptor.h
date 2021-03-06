//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNKeyDescriptor-Protocol.h>
#import <Contacts/CNKeyDescriptor_Private-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor>
{
    NSMutableDictionary *_propertiesByIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000615f0
- (void).cxx_destruct;	// IMP=0x0000000000061cd6
@property(retain, nonatomic) NSMutableDictionary *propertiesByIdentifier; // @synthesize propertiesByIdentifier=_propertiesByIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000061c60
- (id)_cn_ignorableKeys;	// IMP=0x0000000000061c47
- (id)_cn_optionalKeys;	// IMP=0x0000000000061bbf
- (id)_cn_requiredKeys;	// IMP=0x0000000000061b9c
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000619d0
- (void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2;	// IMP=0x00000000000619ba
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061752
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006172f
- (id)init;	// IMP=0x00000000000616d9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000615f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

