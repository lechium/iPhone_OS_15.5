//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMManagementRefreshStatusCommand.h>

@class NSString;

@interface CEMManagementRefreshStatusCommand (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x00200000000063e4
- (_Bool)dmf_requestExecutesWithoutReturning;	// IMP=0x00100000000063dc
- (id)dmf_executeOperationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006358
- (id)dmf_executeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

