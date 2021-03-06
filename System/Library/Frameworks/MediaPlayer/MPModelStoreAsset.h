//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPModelStoreAsset
{
}

+ (id)__needsUserUpload_KEY;	// IMP=0x00000000002d07d2
+ (id)__subscriptionRequired_KEY;	// IMP=0x00000000002d07c5
+ (id)__shouldReportPlayEvents_KEY;	// IMP=0x00000000002d07b8
+ (id)__accountIdentifier_KEY;	// IMP=0x00000000002d07ab
+ (id)__redownloadable_KEY;	// IMP=0x00000000002d079e
+ (id)__redownloadParameters_KEY;	// IMP=0x00000000002d0791
+ (id)__endpointType_KEY;	// IMP=0x00000000002d0784
+ (id)allSupportedProperties;	// IMP=0x00000000002d069f

// Remaining properties
@property(nonatomic) unsigned long long accountIdentifier; // @dynamic accountIdentifier;
@property(nonatomic) long long endpointType; // @dynamic endpointType;
@property(readonly, nonatomic) _Bool needsUserUpload; // @dynamic needsUserUpload;
@property(copy, nonatomic) NSString *redownloadParameters; // @dynamic redownloadParameters;
@property(nonatomic, getter=isRedownloadable) _Bool redownloadable; // @dynamic redownloadable;
@property(nonatomic) _Bool shouldReportPlayEvents; // @dynamic shouldReportPlayEvents;
@property(nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired; // @dynamic subscriptionRequired;

@end

