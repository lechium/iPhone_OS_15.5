//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface FBSProcessWatchdogPolicy : NSObject <BSDescriptionProviding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSArray *_provisions;	// 16 = 0x10
}

+ (id)policyWithName:(id)arg1 forProvisions:(id)arg2;	// IMP=0x0000000000059c73
+ (id)policyWithProvisions:(id)arg1;	// IMP=0x0000000000059c5c
- (void).cxx_destruct;	// IMP=0x000000000005a01f
@property(copy, nonatomic) NSArray *provisions; // @synthesize provisions=_provisions;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000059ebd
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000059e6d
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000059e0a
- (id)succinctDescription;	// IMP=0x0000000000059dba
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
