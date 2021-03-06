//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@class NSDictionary, NSString;

@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
    NSDictionary *_options;	// 8 = 0x8
}

+ (double)backgroundJobTimeout;	// IMP=0x000000000054edf4
+ (id)backgroundJobName;	// IMP=0x000000000054ede7
+ (_Bool)supportsBackgroundJob;	// IMP=0x000000000054eddf
- (void).cxx_destruct;	// IMP=0x000000000054cf79
- (void)_enrichYearHighlights:(id)arg1 monthsHighlights:(id)arg2 withManager:(id)arg3 curationContext:(id)arg4 enrichmentprogressBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000054b079
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000054a67b
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000054a610

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

