//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCTag.h>

@class NSArray;

@interface _TtCZFE8NewsFeedV13TeaFoundation6Random3tagFT4withSS7tagTypeVSo9FCTagType_CSo5FCTagL_9RandomTag : FCTag
{
}

- (id)init;	// IMP=0x0000000000d99880
- (id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3 nameImageMaskAssetHandle:(id)arg4;	// IMP=0x0000000000d99860
- (id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x0000000000d99780
- (id)initWithTagMetadata:(id)arg1 assetManager:(id)arg2;	// IMP=0x0000000000d99760
- (id)initWithData:(id)arg1 context:(id)arg2;	// IMP=0x0000000000d99740
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3;	// IMP=0x0000000000d99710
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5;	// IMP=0x0000000000d996e0
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x0000000000d996b0
- (id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3;	// IMP=0x0000000000d99690
@property(nonatomic, readonly) NSArray *currentIssueIDs;

@end

