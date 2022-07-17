//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceFeedbackReportTicket-Protocol.h>

@class GEOMapServiceTraits, GEORPFeedbackRequest, GEORPFeedbackRequestParameters, GEORPUserCredentials, NSData, NSString;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEORPFeedbackTicket <GEOMapServiceFeedbackReportTicket>
{
    NSData *_resubmissionData;	// 48 = 0x30
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;	// 56 = 0x38
    id <GEOMapItem> _place;	// 64 = 0x40
    GEORPFeedbackRequest *_feedbackRequest;	// 72 = 0x48
    GEORPUserCredentials *_userCredentials;	// 80 = 0x50
    NSData *_pushToken;	// 88 = 0x58
    NSString *_emailAddress;	// 96 = 0x60
    _Bool _started;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000726a6f
- (CDStruct_d1a7ebee)dataRequestKind;	// IMP=0x0000000000726a64
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000007267ab
- (void)cancel;	// IMP=0x0000000000726710
- (id)initWithFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;	// IMP=0x00000000007263ec
- (id)initWithFeedbackRequestData:(id)arg1 traits:(id)arg2;	// IMP=0x000000000072632e
- (id)initWithFeedbackRequest:(id)arg1 traits:(id)arg2;	// IMP=0x00000000007262b6

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end
