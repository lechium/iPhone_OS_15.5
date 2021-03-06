//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol CAMStillImagePersistenceCoordinatorDelegate;

@interface CAMStillImagePersistenceCoordinator : NSObject
{
    id <CAMStillImagePersistenceCoordinatorDelegate> _delegate;	// 8 = 0x8
    NSString *_loggingIdentifier;	// 16 = 0x10
    NSMutableDictionary *__receivedCoordinationInfos;	// 24 = 0x18
    NSMutableDictionary *__pendingLocalPersistenceResults;	// 32 = 0x20
    NSString *__loggingPrefix;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000600e5
@property(readonly, nonatomic) NSString *_loggingPrefix; // @synthesize _loggingPrefix=__loggingPrefix;
@property(readonly, nonatomic) NSMutableDictionary *_pendingLocalPersistenceResults; // @synthesize _pendingLocalPersistenceResults=__pendingLocalPersistenceResults;
@property(readonly, nonatomic) NSMutableDictionary *_receivedCoordinationInfos; // @synthesize _receivedCoordinationInfos=__receivedCoordinationInfos;
@property(readonly, copy, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_loggingIdentifier;
@property(readonly, nonatomic) __weak id <CAMStillImagePersistenceCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_debugStringForUnreceivedResultSpecifiersFromExpectedResultSpecifiers:(id)arg1 receivedCoordinationInfos:(id)arg2;	// IMP=0x00000000000e8cb9
- (unsigned int)_powerAssertionReasonForResultSpecifiers:(unsigned long long)arg1;	// IMP=0x000000000005fd6c
@property(readonly, nonatomic) _Bool hasReceivedAllExpectedResponses;
- (void)updateForTimeoutTimerFiredForCoordinationInfo:(id)arg1 request:(id)arg2;	// IMP=0x00000000000e8a37
- (void)_dispatchRemotePersistenceIfPossibleForResultSpecifiers:(unsigned long long)arg1 request:(id)arg2;	// IMP=0x000000000005f7dc
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 overCaptureResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 shouldPersistAsSingleAsset:(_Bool)arg4;	// IMP=0x00000000000e82fa
- (void)_dispatchRemotePersistenceIfPossibleForPairWithOriginalResultSpecifiers:(unsigned long long)arg1 processedResultSpecifiers:(unsigned long long)arg2 request:(id)arg3 shouldPersistAsSingleAsset:(_Bool)arg4;	// IMP=0x00000000000e7bae
- (void)updateForCoordinationInfo:(id)arg1 localPersistenceResult:(id)arg2 request:(id)arg3;	// IMP=0x000000000005d690
- (id)initWithDelegate:(id)arg1 loggingIdentifier:(id)arg2;	// IMP=0x00000000000e798b

@end

