//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCoordinatedPlaybackParticipant, NSString;

@interface AVDelegatingPlaybackCoordinatorPlaybackControlCommand : NSObject
{
}

@property(readonly, nonatomic) NSString *expectedCurrentItemIdentifier;
@property(readonly, nonatomic) AVCoordinatedPlaybackParticipant *originator;
- (id)initInternal;	// IMP=0x00000000000f600c
- (id)init;	// IMP=0x00000000000f5fc5

@end
