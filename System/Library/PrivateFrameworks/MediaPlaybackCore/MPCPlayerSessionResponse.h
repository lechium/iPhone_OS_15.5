//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPResponse.h>

@class MPCMediaRemoteController, MPSectionedCollection;
@protocol MPCPlayerSessionResponseBuilder;

@interface MPCPlayerSessionResponse : MPResponse
{
    MPSectionedCollection *_items;	// 8 = 0x8
    MPCMediaRemoteController *_controller;	// 16 = 0x10
}

+ (id)builderProtocol;	// IMP=0x0000000000061864
- (void).cxx_destruct;	// IMP=0x0000000000061833
@property(readonly, nonatomic) MPCMediaRemoteController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) MPSectionedCollection *items; // @synthesize items=_items;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;	// IMP=0x0000000000061433

// Remaining properties
@property(readonly, nonatomic) id <MPCPlayerSessionResponseBuilder> builder; // @dynamic builder;

@end
