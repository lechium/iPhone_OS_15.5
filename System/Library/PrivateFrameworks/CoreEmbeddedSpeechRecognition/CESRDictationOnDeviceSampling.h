//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CESRDictationOnDeviceSampling : NSObject
{
    _Bool _isRequestConsideredForSampling;	// 8 = 0x8
    _Bool _isDeviceSampledFromConfig;	// 9 = 0x9
    long long _numberOfRequestsTillNow;	// 16 = 0x10
    NSDate *_currentSamplingDate;	// 24 = 0x18
    NSMutableDictionary *_dictationSamplingVaribles;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_fileQueue;	// 40 = 0x28
}

+ (id)_readDictationSampledPlist;	// IMP=0x0000000000010940
+ (id)sharedManager;	// IMP=0x000000000000f660
- (void).cxx_destruct;	// IMP=0x0000000000011350
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(nonatomic) _Bool isDeviceSampledFromConfig; // @synthesize isDeviceSampledFromConfig=_isDeviceSampledFromConfig;
@property(nonatomic) _Bool isRequestConsideredForSampling; // @synthesize isRequestConsideredForSampling=_isRequestConsideredForSampling;
@property(retain, nonatomic) NSMutableDictionary *dictationSamplingVaribles; // @synthesize dictationSamplingVaribles=_dictationSamplingVaribles;
@property(retain, nonatomic) NSDate *currentSamplingDate; // @synthesize currentSamplingDate=_currentSamplingDate;
@property(nonatomic) long long numberOfRequestsTillNow; // @synthesize numberOfRequestsTillNow=_numberOfRequestsTillNow;
- (void)_writeDictationSamplingVariablesToFile:(id)arg1;	// IMP=0x0000000000011040
- (void)_createDictationSampledPlistIfItDoesNotExist;	// IMP=0x0000000000010cb0
- (void)createDictationSampledPlistIfItDoesNotExist;	// IMP=0x0000000000010bf0
- (_Bool)isRequestSelectedForSampling;	// IMP=0x0000000000010910
- (_Bool)isRequestSelectedForSamplingFromConfigForLanguage:(id)arg1;	// IMP=0x000000000000fdc0
- (_Bool)isSamplingDateCurrent;	// IMP=0x000000000000fce0
- (void)updateDateToCurrent;	// IMP=0x000000000000fc20
- (void)setRequestCount:(long long)arg1;	// IMP=0x000000000000fb90
- (void)decrementRequestCount;	// IMP=0x000000000000fa70
- (void)updateRequestCountWithFlag:(_Bool)arg1;	// IMP=0x000000000000fa20
- (void)incrementRequestCount;	// IMP=0x000000000000f9e0
- (void)resetRequestCount;	// IMP=0x000000000000f9b0
- (id)init;	// IMP=0x000000000000f720

@end
