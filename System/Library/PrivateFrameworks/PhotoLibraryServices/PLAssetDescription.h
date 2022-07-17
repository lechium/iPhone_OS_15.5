//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription
{
}

+ (id)listOfSyncedProperties;	// IMP=0x0000000000582452
+ (id)entityName;	// IMP=0x0000000000582445
- (void)willSave;	// IMP=0x000000000058216d
- (void)prepareForDeletion;	// IMP=0x0000000000582033
- (_Bool)isSyncableChange;	// IMP=0x0000000000581e30
- (id)payloadForChangedKeys:(id)arg1;	// IMP=0x000000000047401b
- (id)payloadID;	// IMP=0x0000000000473f70

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *longDescription; // @dynamic longDescription;

@end
