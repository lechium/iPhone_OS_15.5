//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNGroup, NSData, NSDate, NSString;

@interface CNMutableGroup
{
}

- (id)freezeWithSelfAsSnapshot;	// IMP=0x00000000000ed964
- (id)freeze;	// IMP=0x00000000000ed93a
@property(copy, nonatomic) CNGroup *snapshot; // @dynamic snapshot;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;	// IMP=0x00000000000ed6c8
@property(copy, nonatomic) NSString *externalUUID; // @dynamic externalUUID;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(copy, nonatomic) NSData *externalRepresentation; // @dynamic externalRepresentation;
@property(copy, nonatomic) NSString *externalURI; // @dynamic externalURI;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)copy;	// IMP=0x00000000000ed39a

@end

