//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, PLAssetJournalEntryPayload;
@protocol PLAlbumProtocol;

@interface PLFileSystemImportAsset : NSObject
{
    NSString *_path;	// 8 = 0x8
    _Bool _pathContainsDCIM;	// 16 = 0x10
    NSMutableSet *_urls;	// 24 = 0x18
    int _assetKind;	// 32 = 0x20
    NSObject<PLAlbumProtocol> *_destinationAlbum;	// 40 = 0x28
    PLAssetJournalEntryPayload *_assetPayload;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000382318
@property(readonly, nonatomic) PLAssetJournalEntryPayload *assetPayload; // @synthesize assetPayload=_assetPayload;
@property(nonatomic) int assetKind; // @synthesize assetKind=_assetKind;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
- (void)addURLs:(id)arg1;	// IMP=0x00000000003821b7
- (void)addURL:(id)arg1;	// IMP=0x00000000003820b4
@property(readonly, nonatomic) NSSet *urls;
- (id)description;	// IMP=0x0000000000381fef
- (long long)compare:(id)arg1;	// IMP=0x0000000000381ef8
- (_Bool)isCameraKit;	// IMP=0x0000000000381edf
- (id)initWithAssetPayload:(id)arg1;	// IMP=0x0000000000381dd1
- (id)initWithDestinationAlbum:(id)arg1 assetKind:(int)arg2;	// IMP=0x0000000000381d41

@end

