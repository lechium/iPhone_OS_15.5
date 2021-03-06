//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ML3MigrationMisgroupedAlbum : NSObject
{
    NSMutableArray *_misgroupedTracks;	// 8 = 0x8
    long long _albumPID;	// 16 = 0x10
    long long _albumArtistPID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000102876
@property(readonly, nonatomic) long long albumArtistPID; // @synthesize albumArtistPID=_albumArtistPID;
@property(readonly, nonatomic) long long albumPID; // @synthesize albumPID=_albumPID;
@property(readonly, nonatomic) NSArray *misgroupedTracks;
- (void)addMisgroupedTrack:(id)arg1;	// IMP=0x000000000010283e
- (id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2;	// IMP=0x00000000001027d2

@end

