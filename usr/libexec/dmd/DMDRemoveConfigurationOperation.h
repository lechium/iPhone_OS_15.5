//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDRemoveConfigurationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000074398
+ (id)requiredEntitlements;	// IMP=0x0010000000074380
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000007434e
- (unsigned long long)queueGroup;	// IMP=0x001000000007438d
- (_Bool)_removeRestrictionsWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000074bc6
- (void)_removeProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000074956
- (void)runWithRequest:(id)arg1;	// IMP=0x00100000000744c2

@end

