//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ML3ProcessDownloadedAssetsOperation
{
}

- (long long)_artworkSourceFromTrackSource:(int)arg1;	// IMP=0x000000000007d5bd
- (_Bool)_processGeniusPlist:(id)arg1 geniusIDString:(id)arg2 geniusChecksum:(long long)arg3;	// IMP=0x000000000007cf36
- (double)_videoSnapshotTimeForMediaType:(unsigned int)arg1;	// IMP=0x000000000007cf0f
- (_Bool)_processArtworkIdentifier:(id)arg1 artworkToken:(id)arg2 artworkType:(long long)arg3 mediaType:(unsigned int)arg4 sourceType:(long long)arg5;	// IMP=0x000000000007cb2e
- (_Bool)_processContainerAsset:(id)arg1 forSource:(int)arg2 withError:(id *)arg3;	// IMP=0x000000000007c860
- (_Bool)_processTrackAsset:(id)arg1 forSource:(int)arg2 withError:(id *)arg3;	// IMP=0x000000000007bb35
- (_Bool)_execute:(id *)arg1;	// IMP=0x000000000007b5fc
- (unsigned long long)type;	// IMP=0x000000000007b5f1
- (id)initWithLibrary:(id)arg1 writer:(id)arg2;	// IMP=0x000000000007b5a0

@end

