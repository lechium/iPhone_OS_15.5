//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayer.h>

#import <CoreRE/RERemoteVideoPlayer-Protocol.h>

@class NSString;

@interface AVPlayer (RE) <RERemoteVideoPlayer>
- (_Bool)hasMediaCharacteristicAudible;	// IMP=0x0000000000278052
- (struct CGSize)videoTrackNaturalSize;	// IMP=0x0000000000277f47
- (void)setSTSLabel:(id)arg1;	// IMP=0x0000000000277f35
- (void)removeEndpoint:(id)arg1;	// IMP=0x0000000000277ee6
- (id)addEndpoint:(id)arg1;	// IMP=0x0000000000277dec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
