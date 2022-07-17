//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSURL;

@interface TVPURLMediaItem
{
    NSURL *_url;	// 8 = 0x8
    NSSet *_traits;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001592b
@property(copy, nonatomic) NSSet *traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)hasTrait:(id)arg1;	// IMP=0x0000000000015868
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x00000000000157aa
- (id)mediaItemURL;	// IMP=0x0000000000015798
- (id)initWithURL:(id)arg1 traits:(id)arg2;	// IMP=0x00000000000156c2
- (id)init;	// IMP=0x0000000000015683

@end
