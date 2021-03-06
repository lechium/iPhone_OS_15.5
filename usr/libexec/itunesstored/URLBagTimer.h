//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface URLBagTimer : NSObject
{
    NSString *_bagKey;	// 8 = 0x8
    NSString *_cellularBagKey;	// 16 = 0x10
    double _defaultInterval;	// 24 = 0x18
    double _defaultWindow;	// 32 = 0x20
    CDUnknownBlockType _eventBlock;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    CDUnknownBlockType _preconditionsBlock;	// 64 = 0x40
    id _taskObserver;	// 72 = 0x48
}

+ (id)subscriptionRenewTimer;	// IMP=0x00400000000fe33f
- (void).cxx_destruct;	// IMP=0x00200000000fee72
@property(copy, nonatomic) CDUnknownBlockType preconditionsBlock; // @synthesize preconditionsBlock=_preconditionsBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) double defaultWindow; // @synthesize defaultWindow=_defaultWindow;
@property(nonatomic) double defaultInterval; // @synthesize defaultInterval=_defaultInterval;
@property(copy, nonatomic) NSString *cellularBagKey; // @synthesize cellularBagKey=_cellularBagKey;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (double)_windowWithUserDefaultsKey:(id)arg1;	// IMP=0x00100000000fed60
- (id)_userDefaultsKeyWindowOverride;	// IMP=0x00100000000fed43
- (id)_userDefaultsKeyWiFiOverride;	// IMP=0x00100000000fed26
- (id)_userDefaultsKeyLastTimeCheck;	// IMP=0x00100000000fed09
- (id)_userDefaultsKeyCellularOverride;	// IMP=0x00100000000fecec
- (double)_timerIntervalWithBagKey:(id)arg1 userDefaultsKey:(id)arg2;	// IMP=0x00100000000feba1
- (double)_timerInterval;	// IMP=0x00100000000feac1
- (void)_setLastFireDate:(id)arg1;	// IMP=0x00100000000fea50
- (void)_resetBackgroundTaskJobs;	// IMP=0x00100000000fea4a
- (double)_readTimeIntervalFromUserDefaultsKey:(id)arg1;	// IMP=0x00100000000fe982
- (id)_nextFireDateWithInterval:(double)arg1;	// IMP=0x00100000000fe7f1
- (void)_fireTimer;	// IMP=0x00100000000fe722
- (void)_attemptFireForJob:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000fe71c
- (void)_addJobWithDate:(id)arg1 window:(double)arg2 allowsCellular:(_Bool)arg3;	// IMP=0x00100000000fe716
- (void)start;	// IMP=0x00100000000fe48e
- (void)reset;	// IMP=0x00100000000fe42c
- (void)invalidate;	// IMP=0x00100000000fe3b3
- (void)dealloc;	// IMP=0x00100000000fe2c2
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000fe0d5

@end

