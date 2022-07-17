//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCTransfer-Protocol.h>

@class BRCClientZone, BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCUpload : NSObject <BRCTransfer>
{
    BRCClientZone *_clientZone;	// 8 = 0x8
    long long _throttleID;	// 16 = 0x10
    unsigned long long _totalSize;	// 24 = 0x18
    NSString *_stageID;	// 32 = 0x20
    _Bool _progressPublished;	// 40 = 0x28
    BRCItemID *_itemID;	// 48 = 0x30
    CKRecord *_record;	// 56 = 0x38
    unsigned long long _doneSize;	// 64 = 0x40
    BRCProgress *_progress;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000e127c
@property(readonly, nonatomic) NSString *stageID; // @synthesize stageID=_stageID;
@property(readonly, nonatomic) long long throttleID; // @synthesize throttleID=_throttleID;
@property(nonatomic) _Bool progressPublished; // @synthesize progressPublished=_progressPublished;
@property(readonly, nonatomic) BRCProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long doneSize; // @synthesize doneSize=_doneSize;
@property(readonly, nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void)dealloc;	// IMP=0x00000000000e11b6
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3;	// IMP=0x00000000000e1027
- (id)description;	// IMP=0x00000000000e0ffa
@property(readonly, nonatomic) NSNumber *transferID;
@property(readonly, nonatomic) NSString *etag;
@property(retain, nonatomic) CKRecord *secondaryRecord;
@property(readonly, nonatomic) CKRecordID *secondaryRecordID;
@property(readonly, nonatomic) CKRecordID *recordID;

@end
