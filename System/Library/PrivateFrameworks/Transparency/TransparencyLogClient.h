//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TransparencyAnalytics, TransparencyLogSession, TransparencyManagedDataStore;

@interface TransparencyLogClient : NSObject
{
    TransparencyLogSession *_session;	// 8 = 0x8
    TransparencyManagedDataStore *_dataStore;	// 16 = 0x10
    TransparencyAnalytics *_transparencyAnalytics;	// 24 = 0x18
}

+ (double)timeShift:(id)arg1;	// IMP=0x000000000004b511
- (void).cxx_destruct;	// IMP=0x000000000004c54f
@property(retain) TransparencyAnalytics *transparencyAnalytics; // @synthesize transparencyAnalytics=_transparencyAnalytics;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) TransparencyLogSession *session; // @synthesize session=_session;
- (void)deleteDownloadId:(id)arg1;	// IMP=0x000000000004c383
- (void)downloadRequest:(id)arg1 retry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004c161
- (void)fetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004be58
- (void)download:(id)arg1 retry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004bd73
- (_Bool)fetch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bd59
- (_Bool)fetch:(id)arg1 shouldRetry:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b834
- (void)renewAccountTokenForFetch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b63c
- (_Bool)needsTimeShift:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000004b3d9
- (_Bool)needsReauthorization:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000004b1be
- (_Bool)needsRetry:(id)arg1;	// IMP=0x000000000004b197
@property(readonly) _Bool ready;
- (id)initWithBackgroundSession:(id)arg1 transparencyAnalytics:(id)arg2 dataStore:(id)arg3;	// IMP=0x000000000004aff7

@end

