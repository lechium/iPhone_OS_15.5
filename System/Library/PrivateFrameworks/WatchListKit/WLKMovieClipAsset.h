//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKMovieClipAsset : NSObject
{
    unsigned long long _duration;	// 8 = 0x8
    NSString *_flavor;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
}

+ (id)movieClipAssetsWithArray:(id)arg1;	// IMP=0x0000000000051d15
- (void).cxx_destruct;	// IMP=0x000000000005222c
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *flavor; // @synthesize flavor=_flavor;
@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *durationString;
- (id)init;	// IMP=0x00000000000520e2
- (id)_init;	// IMP=0x00000000000520b3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000051f5f

@end
