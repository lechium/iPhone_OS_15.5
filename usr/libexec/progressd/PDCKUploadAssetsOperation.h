//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKRecordZoneID;

@interface PDCKUploadAssetsOperation : NSObject
{
    CKDatabase *_cloudDatabase;	// 8 = 0x8
    CKContainer *_container;	// 16 = 0x10
    CKRecordZoneID *_assetZoneID;	// 24 = 0x18
    CDUnknownBlockType _recordProgressBlock;	// 32 = 0x20
    CDUnknownBlockType _recordCompletionBlock;	// 40 = 0x28
    CDUnknownBlockType _operationCompletionBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000008a01f
@property(copy, nonatomic) CDUnknownBlockType operationCompletionBlock; // @synthesize operationCompletionBlock=_operationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordCompletionBlock; // @synthesize recordCompletionBlock=_recordCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordProgressBlock; // @synthesize recordProgressBlock=_recordProgressBlock;
@property(readonly, nonatomic) CKRecordZoneID *assetZoneID; // @synthesize assetZoneID=_assetZoneID;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) CKDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
- (void)saveRecords:(id)arg1 recordIDsToDelete:(id)arg2;	// IMP=0x00100000000896a3
- (id)initWithPDDatabase:(id)arg1;	// IMP=0x00100000000894d6

@end

