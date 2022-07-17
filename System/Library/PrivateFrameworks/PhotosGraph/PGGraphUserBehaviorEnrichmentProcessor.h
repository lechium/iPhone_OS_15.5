//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface PGGraphUserBehaviorEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
    NSObject<OS_os_log> *_loggingConnection;	// 8 = 0x8
}

+ (double)backgroundJobTimeout;	// IMP=0x00000000002fc033
+ (id)backgroundJobName;	// IMP=0x00000000002fc026
+ (_Bool)supportsBackgroundJob;	// IMP=0x00000000002fc01e
- (void).cxx_destruct;	// IMP=0x00000000002fc65a
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000002fc041

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
