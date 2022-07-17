//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSHashTable, NSTimer;

__attribute__((visibility("hidden")))
@interface CarRouteGeniusManager : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _preciseLocationEnabled;	// 9 = 0x9
    NSTimer *_predictingRetryTimer;	// 16 = 0x10
    unsigned long long _retryCount;	// 24 = 0x18
    NSHashTable *_activeChromes;	// 32 = 0x20
}

+ (id)sharedDebugPanelChrome;	// IMP=0x00200000007a1465
- (void).cxx_destruct;	// IMP=0x00200000007a155e
@property(retain, nonatomic) NSHashTable *activeChromes; // @synthesize activeChromes=_activeChromes;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSTimer *predictingRetryTimer; // @synthesize predictingRetryTimer=_predictingRetryTimer;
@property(nonatomic, getter=isPreciseLocationEnabled) _Bool preciseLocationEnabled; // @synthesize preciseLocationEnabled=_preciseLocationEnabled;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)didUpdateRouteGenius:(id)arg1;	// IMP=0x00100000007a14ba
- (void)stopPredictingDestinationIfNeeded;	// IMP=0x00100000007a1234
- (void)startPredictingDestinationIfNeeded;	// IMP=0x00100000007a10fc
- (void)_stopPredictingRetryTimer;	// IMP=0x00100000007a1023
- (void)_startPredictingRetryTimer;	// IMP=0x00100000007a09a7
- (void)deactivateForAllChromes;	// IMP=0x00100000007a05e5
- (void)deactivateForChrome:(id)arg1;	// IMP=0x00100000007a047c
- (void)activateIfPossibleForChrome:(id)arg1;	// IMP=0x001000000079fb6e
- (void)dealloc;	// IMP=0x001000000079fa87
- (MISSING_TYPE *)init;	// IMP=0x001000000079f9c0

@end
