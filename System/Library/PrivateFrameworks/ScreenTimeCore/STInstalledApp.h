//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeCore/STSerializableMappedObject-Protocol.h>
#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSData, NSString, STUserDeviceState;

@interface STInstalledApp <STSerializableMappedObject, STUniquelySerializableManagedObject>
{
}

+ (id)serializableClassName;	// IMP=0x0000000000041d96
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000041c4f
+ (id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000412f5
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000418f2
- (id)dictionaryRepresentation;	// IMP=0x0000000000041737
- (id)computeUniqueIdentifier;	// IMP=0x0000000000041647
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x00000000000415b1
@property(retain, nonatomic) STUserDeviceState *userDeviceState; // @dynamic userDeviceState;

// Remaining properties
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *iconData; // @dynamic iconData;
@property(nonatomic) _Bool installedLocally; // @dynamic installedLocally;
@property(readonly) Class superclass;

@end

