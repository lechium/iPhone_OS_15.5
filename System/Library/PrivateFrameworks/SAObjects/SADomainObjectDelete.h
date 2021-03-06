//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSString, SADomainObject;

@interface SADomainObjectDelete <SADomainObjectCommand>
{
}

+ (id)domainObjectDeleteWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000033e36
+ (id)domainObjectDelete;	// IMP=0x0000000000033e24
- (_Bool)requiresResponse;	// IMP=0x0000000000033e62
@property(retain, nonatomic) SADomainObject *identifier;
- (id)encodedClassName;	// IMP=0x0000000000033e17
- (id)groupIdentifier;	// IMP=0x0000000000033e03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

