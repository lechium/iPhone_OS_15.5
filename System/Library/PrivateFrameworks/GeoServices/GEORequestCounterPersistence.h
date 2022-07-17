//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB;

@interface GEORequestCounterPersistence : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    double _maxAge;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000117b952
- (void).cxx_destruct;	// IMP=0x0000000001180bfb
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)externalRequestsCount:(CDUnknownBlockType)arg1;	// IMP=0x0000000001180798
- (void)incrementExternalForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 xmitBytes:(long long)arg4 recvBytes:(long long)arg5 usedInterfaces:(unsigned long long)arg6 requestType:(id)arg7 requestSubtype:(id)arg8 source:(id)arg9;	// IMP=0x000000000118034d
- (void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x000000000117fcf0
- (void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;	// IMP=0x000000000117f977
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x000000000117f1dd
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x000000000117f07a
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x000000000117ef17
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(_Bool)arg4 at:(id)arg5;	// IMP=0x000000000117ec61
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x000000000117eafe
- (void)_recordAnalylticsCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 withFxn:(CDUnknownFunctionPointerType)arg4;	// IMP=0x000000000117e985
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000117e11c
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;	// IMP=0x000000000117de39
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;	// IMP=0x000000000117db0d
- (void)purgeAllCounts;	// IMP=0x000000000117da23
- (void)_purgeOlderThan:(id)arg1;	// IMP=0x000000000117d431
- (void)logsDuring:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000117cd45
- (void)countsDuring:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000117c4c2
- (void)incrementForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 requestType:(int)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 usedInterfaces:(unsigned long long)arg8 withCompletion:(CDUnknownBlockType)arg9;	// IMP=0x000000000117c008
- (void)_tearDown;	// IMP=0x000000000117bf9b
- (void)dealloc;	// IMP=0x000000000117bf5d
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;	// IMP=0x000000000117ba09
- (id)init;	// IMP=0x000000000117b9a7

@end
