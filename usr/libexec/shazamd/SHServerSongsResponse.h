//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SHServerSongsResponse : NSObject
{
    NSDictionary *_songsDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000031bbc
@property(readonly, nonatomic) NSDictionary *songsDictionary; // @synthesize songsDictionary=_songsDictionary;
- (id)itemForIdentifiers:(id)arg1;	// IMP=0x001000000003196a
- (id)initWithSongsDictionary:(id)arg1;	// IMP=0x00100000000318ff

@end
