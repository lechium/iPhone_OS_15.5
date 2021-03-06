//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSURL;

@interface (null) : NSObject
{
    NSURL *_dbFileURL;	// 8 = 0x8
    GEOSQLiteDB *_db;	// 16 = 0x10
    double _maximumAge;	// 24 = 0x18
    unsigned long long _numberOfEntries;	// 32 = 0x20
    unsigned long long _totalDataSize;	// 40 = 0x28
    unsigned long long _maxTotalDataSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000003e741
- (void)getDataForIdentifier:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 callbackQueue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x001000000003e131
- (void)addData:(id)arg1 forIdentifier:(id)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;	// IMP=0x001000000003dc42
- (unsigned long long)shrinkBySize:(unsigned long long)arg1;	// IMP=0x001000000003db4a
- (unsigned long long)shrinkToSize:(unsigned long long)arg1;	// IMP=0x001000000003da52
- (unsigned long long)calculateFreeableSize;	// IMP=0x001000000003d98e
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;	// IMP=0x001000000003d6e8
- (unsigned long long)_shrinkToSize:(unsigned long long)arg1;	// IMP=0x001000000003d6a3
- (_Bool)_deleteAndRecreateDB;	// IMP=0x001000000003d65d
- (unsigned long long)_evictAssetsOlderThanAllowedThreshold;	// IMP=0x001000000003d2d8
- (void)_evictIfNecessary;	// IMP=0x001000000003d2ba
- (void)_updateDataSizeOnDBQueue;	// IMP=0x001000000003d1df
- (void)tearDown;	// IMP=0x001000000003d12b
- (_Bool)_setup:(id)arg1;	// IMP=0x001000000003cf18
- (id)initWithDBFileURL:(id)arg1 maximumTotalDataSize:(unsigned long long)arg2 maximumAge:(double)arg3;	// IMP=0x001000000003cc53
- (id)initWithDBFileURL:(id)arg1;	// IMP=0x001000000003cc37
- (id)init;	// IMP=0x001000000003cc23

@end

