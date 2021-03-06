//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSSecureCoding-Protocol.h>

@class NSString;
@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUIRedeemItem <NSSecureCoding>
{
    id <SKUIArtworkProviding> _artworks;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000feb89
- (void).cxx_destruct;	// IMP=0x00000000000fedd1
@property(retain, nonatomic) id <SKUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fecb6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000feb91
- (id)largestArtworkURL;	// IMP=0x00000000000feb0f
- (id)artworkURLForSize:(long long)arg1;	// IMP=0x00000000000feab0
- (struct _NSRange)ageBandRange;	// IMP=0x00000000000fea9e

// Remaining properties
@property(nonatomic) long long itemIdentifier; // @dynamic itemIdentifier;
@property(nonatomic) long long itemKind; // @dynamic itemKind;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

