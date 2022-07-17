//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation
{
    FCNewsletterEndpointConnection *_endpointConnection;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f6ba5
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void)performOperation;	// IMP=0x00000000000f6a6a
- (id)initWithEndpointConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f69bd

@end
