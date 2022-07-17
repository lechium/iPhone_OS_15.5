//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKServerChangeToken, NSMutableArray, NSMutableDictionary, NSString;

@interface BRCZoneHealthCheckOperation <BRCOperationSubclass>
{
    CKServerChangeToken *_changeToken;	// 32 = 0x20
    NSMutableDictionary *_recordsByID;	// 40 = 0x28
    NSMutableArray *_deletedRecordIds;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000492db
- (void)main;	// IMP=0x0000000000048141
- (void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000047fc7
- (void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;	// IMP=0x0000000000047629
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x00000000000475bd
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;	// IMP=0x00000000000474d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
