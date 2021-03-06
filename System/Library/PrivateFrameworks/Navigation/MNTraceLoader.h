//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNTrace;

@interface MNTraceLoader : NSObject
{
    MNTrace *_trace;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e7882
- (id)trace;	// IMP=0x00000000000e7874
- (_Bool)loadExtraData;	// IMP=0x00000000000e786c
- (_Bool)_tableExists:(id)arg1;	// IMP=0x00000000000e7767
- (id)_handleUpdateError;	// IMP=0x00000000000e7303
- (_Bool)_executeQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e71f8
- (_Bool)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id *)arg2;	// IMP=0x00000000000e6a34
- (_Bool)_loadTraceVersion;	// IMP=0x00000000000e69b0
- (_Bool)_loadMiscInfo;	// IMP=0x00000000000e6664
- (_Bool)_loadAnnotatedUserEnvironmentTable;	// IMP=0x00000000000e650a
- (_Bool)_loadAnnotatedUserBehaviorTable;	// IMP=0x00000000000e63ca
- (_Bool)_loadNavigationEventsTable;	// IMP=0x00000000000e60b6
- (_Bool)_loadEVDataTable;	// IMP=0x00000000000e5853
- (_Bool)_loadVehicleDataTable;	// IMP=0x00000000000e55fd
- (_Bool)_loadMotionDataTable;	// IMP=0x00000000000e5483
- (_Bool)_loadCompassHeadingDataTable;	// IMP=0x00000000000e5312
- (_Bool)_loadETAUpdatesTable;	// IMP=0x00000000000e5014
- (_Bool)_loadDirectionsTable;	// IMP=0x00000000000e4853
- (_Bool)_loadLocationsTable:(_Bool)arg1;	// IMP=0x00000000000e40a7
- (_Bool)_loadInfoTable;	// IMP=0x00000000000e3fec
- (id)loadTraceWithPath:(id)arg1 options:(unsigned long long)arg2 outError:(out id *)arg3;	// IMP=0x00000000000e365d
- (id)loadTraceWithPath:(id)arg1 outError:(out id *)arg2;	// IMP=0x00000000000e3643

@end

