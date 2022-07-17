//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeCore/STSerializableMappedObject-Protocol.h>

@class NSString, STiCloudOrganization;

__attribute__((visibility("hidden")))
@interface STiCloudOrganizationSettings <STSerializableMappedObject>
{
}

+ (id)serializableClassName;	// IMP=0x0000000000032933
- (void)setPasscode:(id)arg1;	// IMP=0x0000000000032697
- (id)dictionaryRepresentation;	// IMP=0x0000000000032523
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000320db
- (id)computeUniqueIdentifier;	// IMP=0x00000000000320c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) STiCloudOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *recoveryAltDSID; // @dynamic recoveryAltDSID;
@property(readonly) Class superclass;

@end
