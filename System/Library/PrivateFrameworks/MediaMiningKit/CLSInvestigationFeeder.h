//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class NSDate, NSMutableSet, NSSet, NSString;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>
{
    unsigned long long _locationClusteringAlgorithm;	// 8 = 0x8
    _Bool _allowsInterview;	// 16 = 0x10
    NSMutableSet *_focusItems;	// 24 = 0x18
    NSSet *_focusPersonLocalIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003ae85
@property(retain, nonatomic) NSSet *focusPersonLocalIdentifiers; // @synthesize focusPersonLocalIdentifiers=_focusPersonLocalIdentifiers;
@property(readonly, nonatomic) NSMutableSet *focusItems; // @synthesize focusItems=_focusItems;
@property(nonatomic) _Bool allowsInterview; // @synthesize allowsInterview=_allowsInterview;
@property(nonatomic) unsigned long long locationClusteringAlgorithm; // @synthesize locationClusteringAlgorithm=_locationClusteringAlgorithm;
- (unsigned long long)numberOfItemsInInvestigation:(id)arg1;	// IMP=0x000000000003ae01
- (id)prepareWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003adef
- (id)_prepareFeederWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039ebd
- (void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039b30
- (void)_enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039626
- (double)behavioralScore;	// IMP=0x00000000000394fb
- (unsigned long long)numberOfRegularGemItems;	// IMP=0x00000000000393d1
- (unsigned long long)numberOfShinyGemItems;	// IMP=0x00000000000392a7
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003917f
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039057
- (id)itemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000038f2d
- (id)allItems;	// IMP=0x0000000000038e03
- (id)approximateLocation;	// IMP=0x0000000000038cd9
- (id)localEndDateComponents;	// IMP=0x0000000000038baf
- (id)localStartDateComponents;	// IMP=0x0000000000038a85
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
- (unsigned long long)numberOfItems;	// IMP=0x00000000000384b3
- (id)init;	// IMP=0x0000000000038441

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

