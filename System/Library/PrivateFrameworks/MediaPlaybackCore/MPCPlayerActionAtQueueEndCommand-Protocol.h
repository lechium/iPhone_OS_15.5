//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerActionAtQueueEndCommand <MPCPlayerCommand>
@property(readonly, nonatomic) NSArray *supportedActions;
- (MPCPlayerCommandRequest *)setQueueEndAction:(long long)arg1;
@end
