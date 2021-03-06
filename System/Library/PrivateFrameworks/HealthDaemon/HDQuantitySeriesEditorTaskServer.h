//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKQuantitySeriesSampleEditorTaskServerInterface-Protocol.h>

@class HKQuantitySample;

@interface HDQuantitySeriesEditorTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface>
{
    HKQuantitySample *_quantitySample;	// 8 = 0x8
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000239efe
+ (Class)configurationClass;	// IMP=0x0000000000239eed
+ (id)requiredEntitlements;	// IMP=0x0000000000239dbd
+ (id)taskIdentifier;	// IMP=0x0000000000239da9
- (void).cxx_destruct;	// IMP=0x000000000023a010
- (id)remoteInterface;	// IMP=0x000000000023a008
- (id)exportedInterface;	// IMP=0x0000000000239fef
- (void)remote_commitRemovedDatums:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000239f06
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000239e27

@end

