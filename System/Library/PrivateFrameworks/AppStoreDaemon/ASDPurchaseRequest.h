//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest
{
}

+ (long long)requestType;	// IMP=0x0000000000019c4c
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019ba4
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000019b92

// Remaining properties
@property(readonly, copy, nonatomic) ASDPurchaseRequestOptions *options; // @dynamic options;

@end
