//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIDevice : NSObject
{
}

+ (id)guid;	// IMP=0x000000000001f5d8
+ (void)enablePortraitLock:(_Bool)arg1;	// IMP=0x000000000001f4e6
+ (_Bool)shouldConstrainToPortait;	// IMP=0x000000000001f382
+ (_Bool)isMac;	// IMP=0x000000000001f368
+ (_Bool)isTV;	// IMP=0x000000000001f34e
+ (_Bool)isPad;	// IMP=0x000000000001f334
+ (_Bool)isPhone;	// IMP=0x000000000001f31b
+ (_Bool)supportsDeepColor;	// IMP=0x000000000001f2d0
+ (long long)userInterfaceIdiom;	// IMP=0x000000000001f285
+ (id)systemVersion;	// IMP=0x000000000001f22e
+ (id)systemName;	// IMP=0x000000000001f1d7
+ (id)model;	// IMP=0x000000000001f180
+ (id)name;	// IMP=0x000000000001f129

@end

