//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface ATXDefaultWidgetSuggesterClient : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

+ (_Bool)shouldSuggestTVWithAppLaunchCount:(double)arg1 intentDonationCount:(double)arg2 upcomingMediaCount:(double)arg3;	// IMP=0x00000000000adc39
- (void).cxx_destruct;	// IMP=0x00000000000ae5b1
- (void)logEventForDefaultWidgetSuggestionType:(long long)arg1 event:(long long)arg2;	// IMP=0x00000000000ae495
- (void)defaultWidgetSuggestionOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000adc57
- (id)init;	// IMP=0x00000000000adb24

@end
