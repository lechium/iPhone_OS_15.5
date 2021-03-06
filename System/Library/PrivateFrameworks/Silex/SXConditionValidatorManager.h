//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidating-Protocol.h>
#import <Silex/SXConditionValidatorManager-Protocol.h>

@class NSMutableArray, NSString;

@interface SXConditionValidatorManager : NSObject <SXConditionValidatorManager, SXConditionValidating>
{
    NSMutableArray *_validators;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000114d8f
@property(readonly, nonatomic) NSMutableArray *validators; // @synthesize validators=_validators;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;	// IMP=0x0000000000114bd7
- (void)addConditionValidator:(id)arg1;	// IMP=0x0000000000114b5f
- (id)init;	// IMP=0x0000000000114af9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

