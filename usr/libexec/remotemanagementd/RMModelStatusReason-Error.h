//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelStatusReason.h>

@interface RMModelStatusReason (Error)
+ (id)assetIsNotReferencedByConfiguration:(id)arg1;	// IMP=0x0010000000050fbb
+ (id)configurationIsNotReferencedByAnActivation:(id)arg1;	// IMP=0x0010000000050dd4
+ (id)missingStateForDeclaration:(id)arg1;	// IMP=0x0010000000050ad5
+ (id)invalidPayloadForDeclaration:(id)arg1;	// IMP=0x00100000000507d6
+ (id)missingConfigurationIdentifiers:(id)arg1 forActivation:(id)arg2;	// IMP=0x0010000000050532
+ (id)missingAssetIdentifiers:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x001000000005028e
+ (id)predicateEvaluationFailedWithError:(id)arg1 forActivation:(id)arg2;	// IMP=0x001000000004fbf1
+ (id)predicateEvaluatedToFalseForActivation:(id)arg1;	// IMP=0x001000000004f94c
+ (id)failedWithUnknownPayloadKeys:(id)arg1;	// IMP=0x001000000004f844
@end

