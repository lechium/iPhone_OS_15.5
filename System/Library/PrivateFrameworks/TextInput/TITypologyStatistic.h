//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TITypologyStatistic : NSObject
{
}

+ (id)statistic;	// IMP=0x00000000000357d4
@property(readonly, nonatomic) NSDictionary *aggregateReport;
@property(readonly, nonatomic) NSDictionary *structuredReport;
- (void)finalizeComputation;	// IMP=0x00000000000358dc
- (void)prepareForComputation;	// IMP=0x00000000000358d6
- (void)visitRecordLastAcceptedCandidateCorrected:(id)arg1;	// IMP=0x00000000000358d0
- (void)visitRecordCandidateRejected:(id)arg1;	// IMP=0x00000000000358ca
- (void)visitRecordTextAccepted:(id)arg1;	// IMP=0x00000000000358c4
- (void)visitRecordSetOriginalInput:(id)arg1;	// IMP=0x00000000000358be
- (void)visitRecordPhraseBoundaryAdjustment:(id)arg1;	// IMP=0x00000000000358b8
- (void)visitRecordSkipHitTest:(id)arg1;	// IMP=0x00000000000358b2
- (void)visitRecordHitTest:(id)arg1;	// IMP=0x00000000000358ac
- (void)visitRecordRefinements:(id)arg1;	// IMP=0x00000000000358a6
- (void)visitRecordReplacements:(id)arg1;	// IMP=0x00000000000358a0
- (void)visitRecordAcceptedCandidate:(id)arg1;	// IMP=0x000000000003589a
- (void)visitRecordCandidateResultSet:(id)arg1;	// IMP=0x0000000000035894
- (void)visitRecordAutocorrections:(id)arg1;	// IMP=0x000000000003588e
- (void)visitRecordKeyboardInput:(id)arg1;	// IMP=0x0000000000035888
- (void)visitRecordSync:(id)arg1;	// IMP=0x0000000000035882
- (void)visitTypologyRecord:(id)arg1;	// IMP=0x000000000003587c
- (void)visitTypologyLog:(id)arg1;	// IMP=0x00000000000357e6

@end
