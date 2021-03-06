//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRequestedFields, NSString;

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying>
{
    CKDPAssetsToDownload *_assetsToDownload;	// 8 = 0x8
    NSString *_clientVersionETag;	// 16 = 0x10
    CKDPRecordRetrieveRequestRetrieveAssetURL *_getAssetURL;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    CKDPRequestedFields *_requestedFields;	// 40 = 0x28
    NSString *_versionETag;	// 48 = 0x30
    _Bool _shouldFailBatch;	// 56 = 0x38
    struct {
        unsigned int shouldFailBatch:1;
    } _has;	// 60 = 0x3c
}

+ (id)options;	// IMP=0x000000000001ca28
- (void).cxx_destruct;	// IMP=0x000000000001da43
@property(nonatomic) _Bool shouldFailBatch; // @synthesize shouldFailBatch=_shouldFailBatch;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL; // @synthesize getAssetURL=_getAssetURL;
@property(retain, nonatomic) NSString *clientVersionETag; // @synthesize clientVersionETag=_clientVersionETag;
@property(retain, nonatomic) NSString *versionETag; // @synthesize versionETag=_versionETag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001d7f6
- (unsigned long long)hash;	// IMP=0x000000000001d70e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d53d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d3de
- (void)copyTo:(id)arg1;	// IMP=0x000000000001d2db
- (Class)responseClass;	// IMP=0x000000000001d2ca
- (unsigned int)requestTypeCode;	// IMP=0x000000000001d2bf
- (void)writeTo:(id)arg1;	// IMP=0x000000000001d1c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001d1bc
- (id)dictionaryRepresentation;	// IMP=0x000000000001cbea
- (id)description;	// IMP=0x000000000001cb3b
@property(nonatomic) _Bool hasShouldFailBatch;
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(readonly, nonatomic) _Bool hasGetAssetURL;
@property(readonly, nonatomic) _Bool hasClientVersionETag;
@property(readonly, nonatomic) _Bool hasVersionETag;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

