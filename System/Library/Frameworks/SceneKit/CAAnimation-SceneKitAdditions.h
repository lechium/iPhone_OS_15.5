//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAAnimation.h>

@class NSArray;

@interface CAAnimation (SceneKitAdditions)
+ (id)animationWithSCNAnimation:(id)arg1;	// IMP=0x00000000001a9a33
@property(copy, nonatomic) NSArray *animationEvents;
- (void)setCommitsOnCompletion:(_Bool)arg1;	// IMP=0x00000000001a998d
- (_Bool)commitsOnCompletion;	// IMP=0x00000000001a995b
@property double fadeOutDuration;
@property double fadeInDuration;
@property _Bool usesSceneTimeBase;
@end

