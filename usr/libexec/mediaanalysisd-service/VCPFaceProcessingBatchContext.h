//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, VCPFaceProcessingChangeBatch;
@protocol OS_dispatch_queue;

@interface VCPFaceProcessingBatchContext : NSObject
{
    NSMutableDictionary *_resources;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_managementQueue;	// 16 = 0x10
    _Bool _timeout;	// 24 = 0x18
    _Bool _hasPanorama;	// 25 = 0x19
    NSMutableSet *_processedLocalIdentifiers;	// 32 = 0x20
    NSMutableSet *_unprocessedLocalIdentifiers;	// 40 = 0x28
    NSMutableDictionary *_downloadRequests;	// 48 = 0x30
    NSMutableDictionary *_previousProcessingStatusMap;	// 56 = 0x38
    VCPFaceProcessingChangeBatch *_changeBatch;	// 64 = 0x40
    NSDate *_lastestDownloadTimestamp;	// 72 = 0x48
}

+ (id)batchContextWithPhotoLibrary:(id)arg1 clusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x004000000005313a
- (void).cxx_destruct;	// IMP=0x0020000000053900
@property(retain, nonatomic) NSDate *lastestDownloadTimestamp; // @synthesize lastestDownloadTimestamp=_lastestDownloadTimestamp;
@property(nonatomic) _Bool hasPanorama; // @synthesize hasPanorama=_hasPanorama;
@property(retain, nonatomic) VCPFaceProcessingChangeBatch *changeBatch; // @synthesize changeBatch=_changeBatch;
@property(retain, nonatomic) NSMutableDictionary *previousProcessingStatusMap; // @synthesize previousProcessingStatusMap=_previousProcessingStatusMap;
@property(retain, nonatomic) NSMutableDictionary *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
@property(retain, nonatomic) NSMutableSet *unprocessedLocalIdentifiers; // @synthesize unprocessedLocalIdentifiers=_unprocessedLocalIdentifiers;
@property(retain, nonatomic) NSMutableSet *processedLocalIdentifiers; // @synthesize processedLocalIdentifiers=_processedLocalIdentifiers;
- (id);	// IMP=0x001000000005384c
- (_Bool)downloadTimedout;	// IMP=0x0010000000053695
- (void)updateLastestDownloadTimestamp;	// IMP=0x0010000000053571
- (void)storeResourceURL:(id)arg1 isBestResource:(_Bool)arg2 requestDownload:(_Bool)arg3 downloadStatus:(int)arg4 forLocalIdentifier:(id)arg5;	// IMP=0x0010000000053352
- (id)resourceForLocalIdentifier:(id)arg1;	// IMP=0x00100000000531e5
- (id)initWithPhotoLibrary:(id)arg1 clusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x0010000000052f2c

@end
