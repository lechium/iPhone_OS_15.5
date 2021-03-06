//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SYDApplication, SYDSchedulingParameters;

@interface SYDApplicationScheduling : NSObject
{
    _Bool _developmentApp;	// 8 = 0x8
    MISSING_TYPE *_disableUntilNextLaunch;	// 9 = 0x9
    int _nextSyncReason;	// 12 = 0xc
    int _currentSyncReason;	// 16 = 0x10
    SYDSchedulingParameters *_parameters;	// 24 = 0x18
    SYDApplication *_app;	// 32 = 0x20
    unsigned long long _currentSyncIdentifier;	// 40 = 0x28
    double _delayedSyncDate;	// 48 = 0x30
    unsigned long long _entriesSize;	// 56 = 0x38
    CDStruct_cdff19b3 *_entries;	// 64 = 0x40
    double _lastLaunch;	// 72 = 0x48
}

+ (id)descriptionForReason:(int)arg1;	// IMP=0x004000000005226d
- (void).cxx_destruct;	// IMP=0x0020000000054419
@property(nonatomic) double lastLaunch; // @synthesize lastLaunch=_lastLaunch;
@property(nonatomic, getter=isDisabledUntilNextLaunch) _Bool disableUntilNextLaunch; // @synthesize disableUntilNextLaunch=_disableUntilNextLaunch;
@property(nonatomic) CDStruct_cdff19b3 *entries; // @synthesize entries=_entries;
@property(nonatomic) unsigned long long entriesSize; // @synthesize entriesSize=_entriesSize;
@property(nonatomic) double delayedSyncDate; // @synthesize delayedSyncDate=_delayedSyncDate;
@property(nonatomic) unsigned long long currentSyncIdentifier; // @synthesize currentSyncIdentifier=_currentSyncIdentifier;
@property(nonatomic) int currentSyncReason; // @synthesize currentSyncReason=_currentSyncReason;
@property(nonatomic) int nextSyncReason; // @synthesize nextSyncReason=_nextSyncReason;
@property(nonatomic) SYDApplication *app; // @synthesize app=_app;
@property(nonatomic) _Bool developmentApp; // @synthesize developmentApp=_developmentApp;
@property(retain, nonatomic) SYDSchedulingParameters *parameters; // @synthesize parameters=_parameters;
- (id)schedulingDescription;	// IMP=0x0010000000053e4d
- (void)resetUpdateRequests;	// IMP=0x0010000000053de4
- (void)disableUntilNextLaunch;	// IMP=0x0010000000053dd1
- (void)disableSyncUntil:(double)arg1;	// IMP=0x0010000000053dc6
- (void)didFinishSyncWithIdentifier:(unsigned long long)arg1 success:(_Bool)arg2 now:(double)arg3;	// IMP=0x0010000000053a23
- (void)willStartSyncWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000053849
- (_Bool)requestSyncSoonForReason:(int)arg1 now:(double)arg2;	// IMP=0x001000000005336f
- (double)nextRefreshDateUsingNow:(double)arg1;	// IMP=0x001000000005332d
- (double)_nextRefreshDateForReason:(int)arg1 usingNow:(double)arg2;	// IMP=0x0010000000052f11
- (id)persistentState;	// IMP=0x0010000000052bba
- (void)_markEntriesAsIncorrect;	// IMP=0x0010000000052a8f
- (void)_resizeEntriesWithUpdatedParametersIfNecessary;	// IMP=0x00100000000529d4
- (void)dealloc;	// IMP=0x001000000005299a
- (id)initWithApplication:(id)arg1 persistentState:(id)arg2;	// IMP=0x0010000000052352

@end

