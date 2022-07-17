//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSGroupPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupiOSLegacyIdentifierPredicate <CNiOSGroupPredicate>
{
    int _iOSLegacyIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fefef
@property(readonly, nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000ff176
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ff0f9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ff080
- (id)initWithiOSLegacyIdentifier:(int)arg1;	// IMP=0x00000000000feff7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
