//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface DMFCategoryPolicyMonitor : NSObject
{
    NSArray *_policyTypes;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000010523
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *policyTypes; // @synthesize policyTypes=_policyTypes;
- (void)requestPoliciesForCategoryIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fee5
- (void)dealloc;	// IMP=0x000000000000fe6f
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fc1f

@end

