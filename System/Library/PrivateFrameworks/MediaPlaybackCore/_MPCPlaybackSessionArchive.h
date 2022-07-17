//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, NSDate, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage
{
    MPNowPlayingContentItem *_contentItem;	// 8 = 0x8
    UIImage *_artworkImage;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSDate *_lastModifiedDate;	// 32 = 0x20
}

+ (id)packageTypeIdentifier;	// IMP=0x00000000001815a5
- (void).cxx_destruct;	// IMP=0x0000000000181552
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(copy, nonatomic) MPNowPlayingContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018125f
- (unsigned long long)hash;	// IMP=0x000000000018121b
- (_Bool)writeWithError:(id *)arg1;	// IMP=0x000000000017fe32
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x000000000017fce2
- (id)description;	// IMP=0x000000000017fc9a
- (id)initWithURL:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000017fb44
- (id)initWithURL:(id)arg1;	// IMP=0x000000000017fa81

@end
