//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/RCPBaseEventStreamComposer-Protocol.h>

@class NSArray, RCPEventEnvironment;

@protocol RCPChildEventStream <RCPBaseEventStreamComposer>
@property(nonatomic) double currentTimeOffset;
@property(retain, nonatomic) RCPEventEnvironment *environment;
- (NSArray *)finalizeEventStream;
@end

