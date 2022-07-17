//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSArray, NSString;

@interface SADomainObjectRetrieve <SADomainObjectCommand>
{
}

+ (id)domainObjectRetrieveWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000340f1
+ (id)domainObjectRetrieve;	// IMP=0x00000000000340df
- (_Bool)mutatingCommand;	// IMP=0x0000000000034141
- (_Bool)requiresResponse;	// IMP=0x0000000000034139
@property(copy, nonatomic) NSArray *identifiers;
- (id)encodedClassName;	// IMP=0x00000000000340d2
- (id)groupIdentifier;	// IMP=0x00000000000340be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
