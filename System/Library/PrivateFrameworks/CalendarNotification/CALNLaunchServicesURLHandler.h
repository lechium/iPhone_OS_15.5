//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNURLHandler-Protocol.h>

@class NSString;

@interface CALNLaunchServicesURLHandler : NSObject <CALNURLHandler>
{
}

+ (id)_openApplicationOptionsForResponse:(id)arg1;	// IMP=0x0000000000034ebd
+ (id)sharedInstance;	// IMP=0x00000000000349f8
- (void)openURL:(id)arg1 response:(id)arg2;	// IMP=0x0000000000034a7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
