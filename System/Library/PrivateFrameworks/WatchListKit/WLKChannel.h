//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKChannelDetails;

@interface WLKChannel : NSObject
{
    NSString *_ID;	// 8 = 0x8
    WLKChannelDetails *_details;	// 16 = 0x10
    NSDictionary *_punchoutUrls;	// 24 = 0x18
    NSArray *_seasonNumbers;	// 32 = 0x20
    NSArray *_subscriptionOffers;	// 40 = 0x28
}

+ (id)channelsWithDictionaries:(id)arg1 context:(id)arg2 seasons:(id)arg3;	// IMP=0x000000000001fc1c
+ (id)channelsWithDictionaries:(id)arg1 context:(id)arg2;	// IMP=0x000000000001fa13
- (void).cxx_destruct;	// IMP=0x00000000000200ff
@property(readonly, copy, nonatomic) NSArray *subscriptionOffers; // @synthesize subscriptionOffers=_subscriptionOffers;
@property(readonly, copy, nonatomic) NSArray *seasonNumbers; // @synthesize seasonNumbers=_seasonNumbers;
@property(readonly, copy, nonatomic) NSDictionary *punchoutUrls; // @synthesize punchoutUrls=_punchoutUrls;
@property(readonly, copy, nonatomic) WLKChannelDetails *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)init;	// IMP=0x000000000001f9d4
- (id)initWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001f6cd

@end
