//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSString, SADomainObject;

@interface SADomainObjectCreate <SADomainObjectCommand>
{
}

+ (id)domainObjectCreateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000033cdf
+ (id)domainObjectCreate;	// IMP=0x0000000000033ccd
- (_Bool)requiresResponse;	// IMP=0x0000000000033d0b
@property(retain, nonatomic) SADomainObject *object;
- (id)encodedClassName;	// IMP=0x0000000000033cc0
- (id)groupIdentifier;	// IMP=0x0000000000033cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

