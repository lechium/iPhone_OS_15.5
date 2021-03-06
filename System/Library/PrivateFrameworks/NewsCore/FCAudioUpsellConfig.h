//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FCAudioUpsellConfig : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    unsigned long long _playPosition;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000028c9c9
@property(readonly, nonatomic) unsigned long long playPosition; // @synthesize playPosition=_playPosition;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x000000000028c819
- (id)init;	// IMP=0x000000000028c6d4

@end

