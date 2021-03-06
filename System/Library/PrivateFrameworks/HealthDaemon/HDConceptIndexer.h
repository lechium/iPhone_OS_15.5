//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDConceptIndexer-Protocol.h>

@class NSString;

@interface HDConceptIndexer : NSObject <HDConceptIndexer>
{
}

+ (_Bool)storeState:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000005d15a0
+ (id)stateWithTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005d134e
+ (_Bool)resetIndexManagerStateForProfile:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000005d12ea
+ (_Bool)indexSamplesForProfile:(id)arg1 limit:(unsigned long long)arg2 outIndexedSamplesCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00000000005cf785
- (id)init;	// IMP=0x00000000005cf70b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

