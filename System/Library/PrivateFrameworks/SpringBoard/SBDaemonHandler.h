//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SBDaemonHandler : NSObject
{
}

+ (void)noteDaemonCanceled:(id)arg1;	// IMP=0x0000000000461861
+ (id)stateDescription;	// IMP=0x000000000046145e
+ (void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2;	// IMP=0x0000000000461345
+ (_Bool)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3;	// IMP=0x0000000000461163
+ (void)initialize;	// IMP=0x00000000004610f1

@end

