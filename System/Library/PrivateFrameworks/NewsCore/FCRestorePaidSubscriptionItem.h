//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject
{
    _Bool _isNewsAppPurchase;	// 8 = 0x8
    NSString *_channelID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000257358
@property(readonly, nonatomic) _Bool isNewsAppPurchase; // @synthesize isNewsAppPurchase=_isNewsAppPurchase;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (id)initWithChannelID:(id)arg1 isNewsAppPurchase:(_Bool)arg2;	// IMP=0x00000000002572cf

@end

