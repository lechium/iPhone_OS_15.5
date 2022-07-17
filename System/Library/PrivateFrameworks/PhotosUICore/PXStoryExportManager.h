//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface PXStoryExportManager : NSObject
{
    long long _qualityOfService;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (id)photoLibraryForStoryConfiguration:(id)arg1;	// IMP=0x00000000007b5657
+ (id)frequentSignpostLog;	// IMP=0x00000000007b5627
+ (void)_incrementShareCountForMemory:(id)arg1;	// IMP=0x0000000000688547
+ (id)_defaultPayloadForConfiguration:(id)arg1;	// IMP=0x0000000000688487
+ (id)_aspectDescriptionFromSize:(struct CGSize)arg1;	// IMP=0x00000000006883e6
+ (void)collectAnalyticsForExportEndWithConfiguration:(id)arg1 analyticsToken:(id)arg2 model:(id)arg3 withSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000687ee0
+ (void)collectDataContinuationAnalyticsForExportWithConfiguration:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000687c24
+ (id)_appleIDCountry;	// IMP=0x0000000000687c1c
+ (_Bool)collectAnalyticsForFixationWithAppleMusicAsset:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000006877ac
+ (id)collectAnalyticsForExportBeginWithConfiguration:(id)arg1;	// IMP=0x000000000068768a
- (void).cxx_destruct;	// IMP=0x00000000007ab464
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (void)cancelAllExports;	// IMP=0x00000000007ab413
@property(nonatomic) long long maxConcurrentExportCount;
- (id)requestExportWithDestinationURL:(id)arg1 configuration:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007ab171
- (id)init;	// IMP=0x00000000007ab0cb

@end
