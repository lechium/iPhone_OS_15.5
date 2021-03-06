//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackObserver-Protocol.h>

@class NSString;
@protocol SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;

@interface SVAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SVVideoPlaybackObserver>
{
    unsigned long long _behavior;	// 8 = 0x8
    id <SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> _delegate;	// 16 = 0x10
    struct CGRect _videoBounds;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c280
@property(nonatomic) __weak id <SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) struct CGRect videoBounds; // @synthesize videoBounds=_videoBounds;
- (void)conditionsChanged;	// IMP=0x000000000000c182
- (_Bool)fullscreenPlaybackRequiredForCurrentConditions;	// IMP=0x000000000000c07c
- (void)playbackCoordinatorResumedPlayback:(id)arg1;	// IMP=0x000000000000bfe1
- (void)playbackCoordinatorStartedPlayback:(id)arg1;	// IMP=0x000000000000bfcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

