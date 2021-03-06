//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SIServiceDeviceUploadInfo, SIServiceServerUploadInfo;

@interface SIServiceBatchInfo
{
    NSData *_batch_id;	// 8 = 0x8
    SIServiceDeviceUploadInfo *_device_upload_info;	// 16 = 0x10
    SIServiceServerUploadInfo *_server_upload_info;	// 24 = 0x18
    int _batch_type;	// 32 = 0x20
    struct {
        unsigned int batch_type:1;
    } _has;	// 36 = 0x24
    _Bool _hasBatch_id;	// 40 = 0x28
    _Bool _hasDevice_upload_info;	// 41 = 0x29
    _Bool _hasServer_upload_info;	// 42 = 0x2a
    unsigned long long _whichUpload_Info;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004f6dd
@property(nonatomic) _Bool hasServer_upload_info; // @synthesize hasServer_upload_info=_hasServer_upload_info;
@property(nonatomic) _Bool hasDevice_upload_info; // @synthesize hasDevice_upload_info=_hasDevice_upload_info;
@property(nonatomic) _Bool hasBatch_id; // @synthesize hasBatch_id=_hasBatch_id;
@property(nonatomic) int batch_type; // @synthesize batch_type=_batch_type;
@property(copy, nonatomic) NSData *batch_id; // @synthesize batch_id=_batch_id;
@property(readonly, nonatomic) unsigned long long whichUpload_Info; // @synthesize whichUpload_Info=_whichUpload_Info;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004f3bc
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000004f2fe
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000004efbf
- (unsigned long long)hash;	// IMP=0x000000000004ef26
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004eae1
- (void)writeTo:(id)arg1;	// IMP=0x000000000004e997
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004e294
- (void)deleteBatch_type;	// IMP=0x000000000004e26a
@property(nonatomic) _Bool hasBatch_type;
- (void)deleteServer_upload_info;	// IMP=0x000000000004e1f2
@property(retain, nonatomic) SIServiceServerUploadInfo *server_upload_info; // @synthesize server_upload_info=_server_upload_info;
- (void)deleteDevice_upload_info;	// IMP=0x000000000004e124
@property(retain, nonatomic) SIServiceDeviceUploadInfo *device_upload_info; // @synthesize device_upload_info=_device_upload_info;
- (void)deleteBatch_id;	// IMP=0x000000000004e077
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000331f0e
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000331ed6

@end

