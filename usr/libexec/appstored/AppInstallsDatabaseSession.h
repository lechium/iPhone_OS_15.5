//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;
@protocol AppInstallPipeline;

@interface AppInstallsDatabaseSession : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    id <AppInstallPipeline> _pipeline;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000026fb3d
@property __weak id <AppInstallPipeline> pipeline; // @synthesize pipeline=_pipeline;
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (long long)totalPendingRestoreDownloadSize;	// IMP=0x001000000026fa05
- (id)installForExternalID:(id)arg1;	// IMP=0x001000000026f961
- (id)activeRestoreInstallMatchingCoordinatorID:(id)arg1 orMatchingBundleID:(id)arg2;	// IMP=0x001000000026f682
- (id)activeInstallMatchingCoordinatorID:(id)arg1 orMatchingBundleID:(id)arg2;	// IMP=0x001000000026f3a3
- (id)activeInstallMatchingBundleID:(id)arg1;	// IMP=0x001000000026f21c
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000026f1b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
