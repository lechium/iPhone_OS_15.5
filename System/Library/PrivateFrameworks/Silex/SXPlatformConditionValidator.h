//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidating-Protocol.h>

@class NSString;

@interface SXPlatformConditionValidator : NSObject <SXConditionValidating>
{
    NSString *_platform;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010c1db
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;	// IMP=0x000000000010c12b
- (id)initWithPlatform:(id)arg1;	// IMP=0x000000000010c0b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

