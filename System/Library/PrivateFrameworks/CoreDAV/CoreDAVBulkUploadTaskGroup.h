//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface CoreDAVBulkUploadTaskGroup <CoreDAVTaskDelegate>
{
    NSURL *_folderURL;	// 88 = 0x58
    NSString *_lastKnownCTag;	// 96 = 0x60
    _Bool _validCTag;	// 104 = 0x68
    unsigned long long _multiPutBatchMaxNumResources;	// 112 = 0x70
    unsigned long long _multiPutBatchMaxSize;	// 120 = 0x78
    NSMutableDictionary *_remainingUUIDsToAddActions;	// 128 = 0x80
    NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 136 = 0x88
    NSMutableDictionary *_uuidToHREF;	// 144 = 0x90
    NSMutableDictionary *_hrefToETag;	// 152 = 0x98
    NSMutableDictionary *_uuidToErrorItems;	// 160 = 0xa0
    NSMutableDictionary *_hrefToErrorItems;	// 168 = 0xa8
    NSMutableDictionary *_uuidToStatus;	// 176 = 0xb0
    NSMutableDictionary *_hrefToStatus;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000697fa
@property(readonly, nonatomic) NSDictionary *hrefToStatus; // @synthesize hrefToStatus=_hrefToStatus;
@property(readonly, nonatomic) NSDictionary *uuidToStatus; // @synthesize uuidToStatus=_uuidToStatus;
@property(readonly, nonatomic) NSDictionary *hrefToErrorItems; // @synthesize hrefToErrorItems=_hrefToErrorItems;
@property(readonly, nonatomic) NSDictionary *uuidToErrorItems; // @synthesize uuidToErrorItems=_uuidToErrorItems;
@property(readonly, nonatomic) NSDictionary *hrefToETag; // @synthesize hrefToETag=_hrefToETag;
@property(readonly, nonatomic) NSDictionary *uuidToHREF; // @synthesize uuidToHREF=_uuidToHREF;
@property(retain, nonatomic) NSString *nextCTag; // @synthesize nextCTag=_lastKnownCTag;
@property(readonly, nonatomic) _Bool validCTag; // @synthesize validCTag=_validCTag;
@property(readonly, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property(nonatomic) unsigned long long multiPutBatchMaxSize; // @synthesize multiPutBatchMaxSize=_multiPutBatchMaxSize;
@property(nonatomic) unsigned long long multiPutBatchMaxNumResources; // @synthesize multiPutBatchMaxNumResources=_multiPutBatchMaxNumResources;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000068f80
- (void)syncAway;	// IMP=0x0000000000068f6e
- (void)startTaskGroup;	// IMP=0x0000000000068f5c
- (void)_sendNextBatch;	// IMP=0x0000000000068503
- (Class)multiPutTaskClass;	// IMP=0x0000000000068388
@property(readonly, copy) NSString *description;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;	// IMP=0x0000000000067fd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
