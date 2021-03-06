//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSDictionary, NSOrderedSet, NSString, WFContentDestination;

@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent>
{
    unsigned long long _count;	// 8 = 0x8
    unsigned long long _disclosureLevel;	// 16 = 0x10
    WFContentDestination *_origin;	// 24 = 0x18
    NSOrderedSet *_privateItemIdentifiers;	// 32 = 0x20
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x00000000000029ca
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000029c2
+ (id)shortcutsAppAttributionWithDisclosureLevel:(unsigned long long)arg1;	// IMP=0x00000000000028b4
+ (id)shortcutsAppAttribution;	// IMP=0x00000000000028a0
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 originalItemIdentifier:(id)arg3;	// IMP=0x00000000000027f3
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 originalItemIdentifiers:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000002770
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 originalItemIdentifiers:(id)arg3;	// IMP=0x00000000000026dc
+ (id)attributionWithAppDescriptor:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4;	// IMP=0x0000000000029e40
+ (id)attributionWithAppDescriptor:(id)arg1 disclosureLevel:(unsigned long long)arg2;	// IMP=0x0000000000029dd2
- (void).cxx_destruct;	// IMP=0x00000000000026b4
@property(retain, nonatomic) NSOrderedSet *privateItemIdentifiers; // @synthesize privateItemIdentifiers=_privateItemIdentifiers;
@property(readonly, nonatomic) WFContentDestination *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) unsigned long long disclosureLevel; // @synthesize disclosureLevel=_disclosureLevel;
@property(readonly, copy) NSString *description;
- (id)wfSerializedRepresentation;	// IMP=0x0000000000002368
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000224e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000020c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001f05
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)identifier;	// IMP=0x0000000000001d3f
- (id)attributionByReplacingAccountWithAppOrigin;	// IMP=0x0000000000001c07
- (id)initWithDisclosureLevel:(unsigned long long)arg1 origin:(id)arg2 originalItemIdentifiers:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000001a8c
@property(readonly, nonatomic) NSDictionary *wfSerializedRepresentationWithPrivateItemIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

