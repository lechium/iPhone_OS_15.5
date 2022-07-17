//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MMCSAsset-Protocol.h>
#import <CoreMediaStream/NSCopying-Protocol.h>
#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying>
{
    _Bool _assetDataAvailableOnServer;	// 8 = 0x8
    NSData *_masterAssetHash;	// 16 = 0x10
    NSDictionary *_metadata;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSURL *_MMCSURL;	// 40 = 0x28
    NSData *_fileData;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    NSString *_type;	// 64 = 0x40
    NSData *_fileHash;	// 72 = 0x48
    unsigned long long _protocolFileSize;	// 80 = 0x50
    NSString *_MMCSAccessHeader;	// 88 = 0x58
    NSDate *_MMCSAccessHeaderTimeStamp;	// 96 = 0x60
    NSString *_MMCSReceipt;	// 104 = 0x68
    NSString *_GUID;	// 112 = 0x70
    NSString *_assetCollectionGUID;	// 120 = 0x78
    NSDate *_batchCreationDate;	// 128 = 0x80
    NSDate *_photoCreationDate;	// 136 = 0x88
    id _userInfo;	// 144 = 0x90
    unsigned long long _mediaAssetType;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ae27
+ (id)assetWithAsset:(id)arg1;	// IMP=0x000000000001aa52
+ (id)asset;	// IMP=0x000000000001aa40
+ (id)MSASPAssetFromProtocolDictionary:(id)arg1;	// IMP=0x00000000000da68d
- (void).cxx_destruct;	// IMP=0x000000000001a975
@property(nonatomic) _Bool assetDataAvailableOnServer; // @synthesize assetDataAvailableOnServer=_assetDataAvailableOnServer;
@property(nonatomic) unsigned long long mediaAssetType; // @synthesize mediaAssetType=_mediaAssetType;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *photoCreationDate; // @synthesize photoCreationDate=_photoCreationDate;
@property(retain, nonatomic) NSDate *batchCreationDate; // @synthesize batchCreationDate=_batchCreationDate;
@property(retain, nonatomic) NSString *assetCollectionGUID; // @synthesize assetCollectionGUID=_assetCollectionGUID;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSString *MMCSReceipt; // @synthesize MMCSReceipt=_MMCSReceipt;
@property(retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp; // @synthesize MMCSAccessHeaderTimeStamp=_MMCSAccessHeaderTimeStamp;
@property(retain, nonatomic) NSString *MMCSAccessHeader; // @synthesize MMCSAccessHeader=_MMCSAccessHeader;
@property(nonatomic) unsigned long long MMCSItemSize; // @synthesize MMCSItemSize=_protocolFileSize;
@property(retain, nonatomic) NSData *MMCSHash; // @synthesize MMCSHash=_fileHash;
@property(retain, nonatomic) NSString *MMCSUTI; // @synthesize MMCSUTI=_type;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSURL *MMCSURL; // @synthesize MMCSURL=_MMCSURL;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSData *masterAssetHash; // @synthesize masterAssetHash=_masterAssetHash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a61e
- (id)metadataValueForKey:(id)arg1;	// IMP=0x000000000001a592
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001a580
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001a49c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019fde
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019cae
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019a5a
- (unsigned long long)_fileSizeOnDisk;	// IMP=0x0000000000019871
- (void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2;	// IMP=0x0000000000019805
- (id)MMCSItemType;	// IMP=0x0000000000019686
- (int)MMCSOpenNewFileDescriptor;	// IMP=0x00000000000195f4
@property(nonatomic) unsigned long long MMCSItemID;
@property(nonatomic) unsigned int MMCSItemFlags;
- (unsigned long long)_fileSize;	// IMP=0x000000000001941b
- (_Bool)isVideo;	// IMP=0x0000000000019403
- (_Bool)isPhoto;	// IMP=0x00000000000193ec
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000019005
- (id)initWithGUID:(id)arg1;	// IMP=0x0000000000018f8b
@property(retain, nonatomic) NSError *MMCSError;
@property(nonatomic) unsigned long long protocolFileSize;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSData *fileHash;
- (id)MSASPProtocolDictionary;	// IMP=0x00000000000d9d5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
