//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask
{
    NSArray *_accessControlEntities;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005035f
@property(retain, nonatomic) NSArray *accessControlEntities; // @synthesize accessControlEntities=_accessControlEntities;
- (void)finishCoreDAVTaskWithError:(id)arg1;	// IMP=0x000000000004ffb9
- (id)requestBody;	// IMP=0x000000000004fdea
- (id)httpMethod;	// IMP=0x000000000004fddd
- (id)description;	// IMP=0x000000000004fcf4
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;	// IMP=0x000000000004fc07
- (id)initWithURL:(id)arg1;	// IMP=0x000000000004fbdc

// Remaining properties
@property(nonatomic) __weak id <CoreDAVACLTaskDelegate> delegate; // @dynamic delegate;

@end

