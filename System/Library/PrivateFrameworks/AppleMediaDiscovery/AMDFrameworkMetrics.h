//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMDFrameworkMetrics : NSObject
{
}

+ (void)flush;	// IMP=0x000000000006c780
+ (void)log:(id)arg1 withKey:(id)arg2 atVerbosity:(BOOL)arg3;	// IMP=0x000000000006c020
+ (void)provisionInstanceAtVerbosity:(BOOL)arg1 andAction:(id)arg2 andVersion:(id)arg3 andBuild:(id)arg4 andStorefrontId:(id)arg5 withLoggingProbability:(id)arg6;	// IMP=0x000000000006be70

@end
