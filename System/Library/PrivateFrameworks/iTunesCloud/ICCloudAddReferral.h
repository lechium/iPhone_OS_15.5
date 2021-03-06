//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSString;

@interface ICCloudAddReferral : NSObject <NSSecureCoding>
{
    NSString *_playlistGlobalID;	// 8 = 0x8
    long long _albumAdamID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fd30c
+ (id)referralWithAlbumAdamID:(long long)arg1;	// IMP=0x00000000000fd2e5
+ (id)referralWithPlaylistGlobalID:(id)arg1;	// IMP=0x00000000000fd281
- (void).cxx_destruct;	// IMP=0x00000000000fd271
@property(readonly, nonatomic) long long albumAdamID; // @synthesize albumAdamID=_albumAdamID;
@property(readonly, copy, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fd1ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fd13a

@end

