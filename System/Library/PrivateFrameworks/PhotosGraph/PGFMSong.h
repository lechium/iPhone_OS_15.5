//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMSong;

@interface PGFMSong : NSObject
{
    FMSong *_wrappedSong;	// 8 = 0x8
}

+ (id)localizedNameForTagWithID:(id)arg1;	// IMP=0x00000000004b9df3
+ (id)availableTagIDs;	// IMP=0x00000000004b9de6
- (void).cxx_destruct;	// IMP=0x00000000004b9dd6
@property(readonly, nonatomic) FMSong *wrappedSong; // @synthesize wrappedSong=_wrappedSong;
- (id)_valueAssociatedWithTagPrefix:(id)arg1;	// IMP=0x00000000004b9b92
- (id)arousal;	// IMP=0x00000000004b9b79
- (id)valence;	// IMP=0x00000000004b9b60
- (_Bool)isLoaded;	// IMP=0x00000000004b9b4a
- (void)cancelDownloadOfAllAssetsWithIDs:(id)arg1;	// IMP=0x00000000004b9b34
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000004b9b1e
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;	// IMP=0x00000000004b9b08
- (id)idealDurations;	// IMP=0x00000000004b9af2
- (CDStruct_198678f7)naturalDuration;	// IMP=0x00000000004b9ab7
- (CDStruct_198678f7)minimumDuration;	// IMP=0x00000000004b9a7c
- (id)renditionForDuration:(CDStruct_198678f7)arg1 withOptions:(id)arg2;	// IMP=0x00000000004b9a66
- (id)assetWithID:(id)arg1;	// IMP=0x00000000004b9a50
- (_Bool)recalled;	// IMP=0x00000000004b9a3a
- (_Bool)hidden;	// IMP=0x00000000004b9a24
- (_Bool)canPlay;	// IMP=0x00000000004b9a0e
- (id)songFormat;	// IMP=0x00000000004b99f8
- (id)keywords;	// IMP=0x00000000004b99e2
- (id)tagIDs;	// IMP=0x00000000004b99cc
- (id)audioEncoderPresetName;	// IMP=0x00000000004b99b6
- (long long)sampleRate;	// IMP=0x00000000004b99a0
- (id)artistName;	// IMP=0x00000000004b998a
- (id)songName;	// IMP=0x00000000004b9974
- (id)uid;	// IMP=0x00000000004b995e
- (long long)metadataVersion;	// IMP=0x00000000004b9948
- (id)description;	// IMP=0x00000000004b9932
- (id)initWithFMSong:(id)arg1;	// IMP=0x00000000004b98c7

@end

