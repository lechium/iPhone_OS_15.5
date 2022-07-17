//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FCPurchaseLookupFetchOperationResult : NSObject
{
    NSDictionary *_channelIDsByPurchaseID;	// 8 = 0x8
    NSDictionary *_bundleChannelIDsByPurchaseID;	// 16 = 0x10
    NSString *_bundleChannelIDsVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000392b3
@property(copy, nonatomic) NSString *bundleChannelIDsVersion; // @synthesize bundleChannelIDsVersion=_bundleChannelIDsVersion;
@property(copy, nonatomic) NSDictionary *bundleChannelIDsByPurchaseID; // @synthesize bundleChannelIDsByPurchaseID=_bundleChannelIDsByPurchaseID;
@property(copy, nonatomic) NSDictionary *channelIDsByPurchaseID; // @synthesize channelIDsByPurchaseID=_channelIDsByPurchaseID;
- (id)initWithChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsByPurchaseID:(id)arg2 bundleChannelIDsVersion:(id)arg3;	// IMP=0x0000000000039182

@end
