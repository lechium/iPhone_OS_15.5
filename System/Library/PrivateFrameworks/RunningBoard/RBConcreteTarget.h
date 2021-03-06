//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>
#import <RunningBoard/RBConcreteTargeting-Protocol.h>

@class NSString, RBProcess, RBSProcessIdentity;

@interface RBConcreteTarget : NSObject <NSCopying, RBConcreteTargeting>
{
}

+ (id)targetWithIdentity:(id)arg1 environment:(id)arg2;	// IMP=0x0000000000048970
+ (id)targetWithProcess:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000488c1
+ (id)systemTarget;	// IMP=0x000000000004886c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048a33
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *environment;
@property(readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property(readonly, nonatomic) RBProcess *process;
- (id)createRBSTarget;	// IMP=0x00000000000489f5
@property(readonly, nonatomic, getter=isSystem) _Bool system;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

