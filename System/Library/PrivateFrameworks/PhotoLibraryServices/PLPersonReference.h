//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, PLAdditionalAssetAttributes, PLPerson;

@interface PLPersonReference
{
}

+ (id)entityName;	// IMP=0x000000000033108d
+ (id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3;	// IMP=0x0000000000330e15

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) PLPerson *person; // @dynamic person;
@property(retain, nonatomic) NSData *personData; // @dynamic personData;
@property(retain, nonatomic) NSString *personUUID; // @dynamic personUUID;

@end

