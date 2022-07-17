//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SearchUIMediaArtworkImage
{
    NSString *_persistentID;	// 8 = 0x8
    NSString *_universalLibraryID;	// 16 = 0x10
    NSString *_spotlightIdentifier;	// 24 = 0x18
    long long _mediaEntityType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007c4b7
@property long long mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(retain) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property(retain) NSString *universalLibraryID; // @synthesize universalLibraryID=_universalLibraryID;
@property(retain) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (unsigned long long)hash;	// IMP=0x000000000007c2e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007c161
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007b84d
- (Class)classForCoder;	// IMP=0x000000000007b83c
- (id)initWithSpotlightIdentifier:(id)arg1;	// IMP=0x000000000007b7ba
- (id)initWithSFImage:(id)arg1;	// IMP=0x000000000007b675

@end
