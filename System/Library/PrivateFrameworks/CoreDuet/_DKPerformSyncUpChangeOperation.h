//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncType;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpChangeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;	// 8 = 0x8
    id <_DKSyncRemoteKnowledgeStorage> _transport;	// 16 = 0x10
    _DKSync2Policy *_policy;	// 24 = 0x18
    _DKSyncType *_type;	// 32 = 0x20
    NSArray *_insertedEvents;	// 40 = 0x28
    NSArray *_deletedEventIDs;	// 48 = 0x30
    _CDMutablePerfMetric *_perfMetric;	// 56 = 0x38
    struct _CDPerfEvent _perfEvent;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000076768
- (void)endOperation;	// IMP=0x00000000000766bc
- (void)main;	// IMP=0x0000000000076138
- (_Bool)isAsynchronous;	// IMP=0x0000000000076130

@end

