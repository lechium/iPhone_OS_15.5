//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsDaemon/TPSAnalyticsProcessing-Protocol.h>

@class NSDate, NSString, TPSAnalyticsEventController, TPSDuetDataProvider;
@protocol TPSAnalyticsProcessorDataSource;

@interface TPSAnalyticsProcessor : NSObject <TPSAnalyticsProcessing>
{
    TPSAnalyticsEventController *_analyticsEventController;	// 8 = 0x8
    TPSDuetDataProvider *_duetDataProvider;	// 16 = 0x10
    NSString *_dateLastRunKey;	// 24 = 0x18
    id <TPSAnalyticsProcessorDataSource> _dataSource;	// 32 = 0x20
}

+ (id)loadValueForKey:(id)arg1 class:(Class)arg2;	// IMP=0x0000000000035ab2
+ (void)saveValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000035a99
- (void).cxx_destruct;	// IMP=0x0000000000035b96
@property(nonatomic) __weak id <TPSAnalyticsProcessorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)resetAnalytics;	// IMP=0x0000000000035b69
- (void)setDuetDataProvider:(id)arg1;	// IMP=0x0000000000035b58
- (void)processAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035b46
@property(retain, nonatomic) NSDate *dateLastRun;
@property(readonly, nonatomic) TPSDuetDataProvider *duetDataProvider;
- (id)init;	// IMP=0x0000000000035919

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

