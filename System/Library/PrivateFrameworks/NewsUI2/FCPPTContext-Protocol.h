//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI2/NSObject-Protocol.h>

@class FCPPTTodayContentDescriptor, NSString;

@protocol FCPPTContext <NSObject>
- (void)d_logState;
@property(nonatomic) _Bool prefetchDisabled;
- (_Bool)isPrefetchDisabled;
@property(nonatomic, copy) NSString *forYouFeedIDOverride;
@property(nonatomic, retain) FCPPTTodayContentDescriptor *todayContentDescriptor;
@property(nonatomic) _Bool runningPPT;
- (_Bool)isRunningPPT;
@property(nonatomic, copy) NSString *testName;
@end

