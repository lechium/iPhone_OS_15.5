//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsFeed/NSObject-Protocol.h>

@protocol SWInteraction;

@protocol SWInteractionProvider <NSObject>
- (void)onChange:(void (^)(id <SWInteraction>))arg1;
@property(nonatomic, readonly) id <SWInteraction> interaction;
@end

