//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCClientZone, BRCProgress, BRFileObjectID, CKRecord, CKRecordID, GSPermanentStorage, NSError;

@interface BRCDownloadVersion
{
    CKRecordID *_secondaryRecordID;	// 96 = 0x60
    CKRecord *_secondaryRecord;	// 104 = 0x68
    BRCClientZone *_clientZone;	// 112 = 0x70
    _Bool _sharedZone;	// 120 = 0x78
    _Bool _isLoser;	// 121 = 0x79
    GSPermanentStorage *_storage;	// 128 = 0x80
    NSError *_gsError;	// 136 = 0x88
    BRFileObjectID *_fileObjectID;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000186f37
@property(readonly, nonatomic) BRFileObjectID *fileObjectID; // @synthesize fileObjectID=_fileObjectID;
@property(readonly, nonatomic) NSError *gsError; // @synthesize gsError=_gsError;
@property(readonly, nonatomic) GSPermanentStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) _Bool isLoser; // @synthesize isLoser=_isLoser;
- (void)setSecondaryRecord:(id)arg1;	// IMP=0x0000000000186ee0
- (id)secondaryRecord;	// IMP=0x0000000000186ecf
- (id)secondaryRecordID;	// IMP=0x0000000000186ebe
- (id)_stageWithSession:(id)arg1 creationInfo:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001859cf
- (id)_stageContentWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018537e
- (id)description;	// IMP=0x0000000000185349
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(_Bool)arg4;	// IMP=0x0000000000184f33
@property(retain, nonatomic) BRCProgress *progress;
- (int)kind;	// IMP=0x0000000000184f09

@end

