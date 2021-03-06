//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxy-Protocol.h>

@class GEOABAssignmentResponse, NSString;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy>
{
    id <GEOExperimentServerProxyDelegate> _delegate;	// 8 = 0x8
    GEOABAssignmentResponse *_experimentsInfo;	// 16 = 0x10
    struct os_unfair_lock_s _experimentsInfoLock;	// 24 = 0x18
    int _experimentsChangedToken;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000011a6883
@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;	// IMP=0x00000000011a66a6
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;	// IMP=0x00000000011a64f0
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;	// IMP=0x00000000011a6079
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;	// IMP=0x00000000011a5e7c
- (void)forceUpdate;	// IMP=0x00000000011a5d6c
- (void)abAssignUUIDWithSyncCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000011a5a0a
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000011a55e7
- (void)refreshDatasetABStatus:(id)arg1;	// IMP=0x00000000011a53ee
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)dealloc;	// IMP=0x00000000011a536a
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000011a5000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

