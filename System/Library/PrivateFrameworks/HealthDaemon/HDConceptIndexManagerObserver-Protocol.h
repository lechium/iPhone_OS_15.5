//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDConceptIndexManager;

@protocol HDConceptIndexManagerObserver <NSObject>
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(HDConceptIndexManager *)arg1 samplesProcessedCount:(long long)arg2;
@end
