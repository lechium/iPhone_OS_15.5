//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSSet;

@protocol RBAssertionOriginatorPidPersisting <NSObject>
- (_Bool)isValid;
- (_Bool)containsPid:(int)arg1;
- (void)removePid:(int)arg1;
- (void)addPid:(int)arg1;
- (void)setValidProcesses:(NSSet *)arg1;
@end

