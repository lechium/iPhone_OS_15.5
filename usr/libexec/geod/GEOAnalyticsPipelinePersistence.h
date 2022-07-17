//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, MISSING_TYPE, NSString;

@interface GEOAnalyticsPipelinePersistence : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    _Bool _shadowEnabled;	// 16 = 0x10
    NSString *_dbFilePath;	// 24 = 0x18
    _Bool _firstAuthComplete;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000025232
- (void).cxx_destruct;	// IMP=0x00100000000297a7
- (void)processMapsAppDeletion;	// IMP=0x001000000002966a
- (void)clearAllData;	// IMP=0x00100000000295d4
- (void)clearPendingLogMsgElemsForBatchUploadWithBatchId:(unsigned long long)arg1;	// IMP=0x0010000000029429
- (void)clearExpiredLogMsgsWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000028e2f
- (void)deleteCurCollSaved:(id)arg1;	// IMP=0x0010000000028caf
- (void)selectDailySettingsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000002883a
- (void)selectDailyCountsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000282ed
- (void)selectCurCollSavedWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000002803d
- (void)selectCurCollViewsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027b34
- (void)selectLogMsgsForBatchUploadWithBatchId:(unsigned long long)arg1 visitorBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000275f1
- (id)selectBatchIdsForBatchUpload;	// IMP=0x00100000000273f1
- (void)storeLogMsgElems:(id)arg1;	// IMP=0x0010000000026feb
- (void)_writeRRLogElem:(id)arg1;	// IMP=0x0010000000026e56
- (void)_writeDailySettingsElem:(id)arg1;	// IMP=0x0010000000026c6c
- (void)_writeCuratedCollectionElem:(id)arg1;	// IMP=0x0010000000026662
- (MISSING_TYPE *)_writeDailyCountElem: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000026229
- (void)_writeLogMsgQueueElem:(id)arg1;	// IMP=0x0010000000025e81
- (long long)_analyticsCount;	// IMP=0x0010000000025d61
- (void)_tearDown;	// IMP=0x0010000000025cf4
- (void)dealloc;	// IMP=0x0010000000025cb6
- (void)_setupEvalStmtsOnDb:(id)arg1;	// IMP=0x0010000000025b58
- (void)_configureDatabase;	// IMP=0x0010000000025471
@property(readonly, nonatomic) _Bool evalModeEnabled;
- (void)protectedDataDidBecomeAvailable:(id)arg1;	// IMP=0x0010000000025456
@property(nonatomic) _Bool firstAuthComplete;
- (id)initWithDBFilePath:(id)arg1;	// IMP=0x00100000000252e1
- (id)init;	// IMP=0x0010000000025287
- (void)showEvalDataWithVisitorBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002ac5a
- (void)flushEvalData;	// IMP=0x001000000002abb6
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x001000000002ab19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
