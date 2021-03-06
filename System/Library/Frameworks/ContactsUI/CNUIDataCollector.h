//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNMetricsUIReporter, CNUIDataCollectorSGLogger, NSString;

@interface CNUIDataCollector : NSObject
{
    CNMetricsUIReporter *_metricsReporter;	// 8 = 0x8
    NSString *_appIdentifier;	// 16 = 0x10
    CNUIDataCollectorSGLogger *_sgLogger;	// 24 = 0x18
}

+ (id)sharedCollector;	// IMP=0x0000000000147d66
+ (_Bool)isEnabled;	// IMP=0x0000000000147d4d
- (void).cxx_destruct;	// IMP=0x0000000000147c3c
@property(readonly, nonatomic) CNUIDataCollectorSGLogger *sgLogger; // @synthesize sgLogger=_sgLogger;
@property(readonly, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(readonly, nonatomic) CNMetricsUIReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
- (void)logContactCreated:(id)arg1 originalContact:(id)arg2;	// IMP=0x0000000000147afb
- (void)logContactShown:(id)arg1;	// IMP=0x00000000001479e2
- (void)logSearchResultSelected:(id)arg1;	// IMP=0x0000000000147858
- (void)logSearchResultsFetchedSuggested:(_Bool)arg1;	// IMP=0x0000000000147747
- (void)logSearchUsage;	// IMP=0x00000000001476b1
- (void)logPresentation;	// IMP=0x000000000014761b
- (void)logContactActionType:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000147197
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000000147048
- (id)init;	// IMP=0x0000000000146fee

@end

