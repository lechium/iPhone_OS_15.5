//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AAAvailabilityResponse
{
    NSString *_status;	// 56 = 0x38
    NSString *_eta;	// 64 = 0x40
    NSString *_feature;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000222f8
@property(readonly, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(readonly, nonatomic) NSString *eta; // @synthesize eta=_eta;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x0000000000022184

@end

