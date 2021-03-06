//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PPMediaPlayerResponse : NSObject
{
    unsigned int _state;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_artist;	// 24 = 0x18
    NSString *_album;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    NSString *_playerID;	// 48 = 0x30
    NSNumber *_storeItemID;	// 56 = 0x38
    double _duration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000015c68a
- (_Bool)isEqualToResponse:(id)arg1;	// IMP=0x000000000015c367

@end

