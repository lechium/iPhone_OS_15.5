//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface MPModelPlaybackPosition
{
}

+ (id)__userPlayCount_KEY;	// IMP=0x000000000023ea17
+ (id)__storeUbiquitousIdentifier_KEY;	// IMP=0x000000000023ea0a
+ (id)__stopTime_KEY;	// IMP=0x000000000023e9fd
+ (id)__startTime_KEY;	// IMP=0x000000000023e9f0
+ (id)__hasBeenPlayed_KEY;	// IMP=0x000000000023e9e3
+ (id)__shouldRememberBookmarkTime_KEY;	// IMP=0x000000000023e9d6
+ (id)__bookmarkTime_KEY;	// IMP=0x000000000023e9c9

// Remaining properties
@property(nonatomic) double bookmarkTime; // @dynamic bookmarkTime;
@property(nonatomic) _Bool hasBeenPlayed; // @dynamic hasBeenPlayed;
@property(nonatomic) _Bool shouldRememberBookmarkTime; // @dynamic shouldRememberBookmarkTime;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(copy, nonatomic) NSNumber *stopTime; // @dynamic stopTime;
@property(copy, nonatomic) NSString *storeUbiquitousIdentifier; // @dynamic storeUbiquitousIdentifier;
@property(nonatomic) long long userPlayCount; // @dynamic userPlayCount;

@end

