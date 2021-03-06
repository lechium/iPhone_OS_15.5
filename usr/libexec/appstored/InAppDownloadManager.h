//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable, NSMutableDictionary, NSOperationQueue;

@interface InAppDownloadManager : NSObject
{
    NSLock *_downloadLock;	// 8 = 0x8
    NSOperationQueue *_downloadQueue;	// 16 = 0x10
    NSMapTable *_observers;	// 24 = 0x18
    NSMutableDictionary *_pendingDownloads;	// 32 = 0x20
}

+ (id)manager;	// IMP=0x0040000000146738
- (void).cxx_destruct;	// IMP=0x002000000014854f
- (void)_notifyObserversDownloadStatusChanged:(id)arg1;	// IMP=0x001000000014839e
- (id)processDownloadsForTransactions:(id)arg1;	// IMP=0x0010000000147ca3
- (void)removeDownloadsForTransactionID:(id)arg1;	// IMP=0x001000000014742c
- (void)pauseDownloadWithID:(id)arg1;	// IMP=0x00100000001471e9
- (void)cancelDownloadWithID:(id)arg1;	// IMP=0x0010000000146fa6
- (_Bool)startDownloadWithID:(id)arg1 client:(id)arg2;	// IMP=0x00100000001469e4
- (void)removeDownloadObserver:(id)arg1;	// IMP=0x0010000000146969
- (id)addDownloadObserver:(id)arg1;	// IMP=0x0010000000146899
- (id)init;	// IMP=0x00100000001467bd

@end

