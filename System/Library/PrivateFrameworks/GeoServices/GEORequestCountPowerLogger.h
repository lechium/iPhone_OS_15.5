//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEORequestCountPowerLogger : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000000007ebb20
+ (void)registerXPCActivity;	// IMP=0x00000000007ebb1a
- (void)incrementCountForClient:(id)arg1 requestType:(int)arg2;	// IMP=0x00000000007ebb28

@end
