//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSyncChangeStore-Protocol.h>

@class NSString;
@protocol NAScheduler;

@interface MTPersistentSyncChangeStore : NSObject <MTSyncChangeStore>
{
    id <NAScheduler> _archiverScheduler;	// 8 = 0x8
    NSString *_syncDataPath;	// 16 = 0x10
    NSString *_syncDataFile;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000826c1
@property(copy, nonatomic) NSString *syncDataFile; // @synthesize syncDataFile=_syncDataFile;
@property(copy, nonatomic) NSString *syncDataPath; // @synthesize syncDataPath=_syncDataPath;
@property(readonly, nonatomic) id <NAScheduler> archiverScheduler; // @synthesize archiverScheduler=_archiverScheduler;
- (void)_removeSyncDataFile;	// IMP=0x0000000000082595
- (id)loadChanges;	// IMP=0x0000000000081e79
- (void)persistChanges:(id)arg1;	// IMP=0x0000000000081a02
- (void)setupSyncDataFileForDataModel:(id)arg1;	// IMP=0x000000000008187e
- (id)initWithDataModel:(id)arg1;	// IMP=0x0000000000081792

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

