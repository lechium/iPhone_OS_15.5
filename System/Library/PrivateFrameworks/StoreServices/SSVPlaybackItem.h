//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface SSVPlaybackItem : NSObject
{
    NSDictionary *_itemDictionary;	// 8 = 0x8
    NSURL *_fallbackStreamingKeyServerURL;	// 16 = 0x10
    NSURL *_fallbackStreamingKeyCertificateURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b32cb
@property(copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // @synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL;
@property(copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // @synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL;
@property(readonly, copy, nonatomic) NSDictionary *itemDictionary; // @synthesize itemDictionary=_itemDictionary;
- (void)_enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3136
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b308b
- (unsigned long long)hash;	// IMP=0x00000000000b3018
- (id)description;	// IMP=0x00000000000b2f44
@property(readonly, copy, nonatomic) id itemIdentifier;
@property(readonly, nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property(readonly, nonatomic) NSURL *HLSPlaylistURL;
@property(readonly, nonatomic) NSURL *HLSKeyServerURL;
@property(readonly, nonatomic) NSURL *HLSKeyCertificateURL;
@property(readonly, nonatomic) NSArray *assets;
- (id)assetForFlavor:(id)arg1;	// IMP=0x00000000000b2a78
- (id)initWithItemDictionary:(id)arg1;	// IMP=0x00000000000b2a05

@end

