//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface HMFSystemPreference <HMFObject>
{
    NSString *_domain;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002e1fc
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4 parent:(id)arg5;	// IMP=0x000000000002dee9
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4;	// IMP=0x000000000002dec6
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4;	// IMP=0x000000000002de9e

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

