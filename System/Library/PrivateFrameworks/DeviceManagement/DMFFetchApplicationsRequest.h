//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DMFFetchApplicationsRequest
{
    _Bool _excludeIcon;	// 8 = 0x8
    _Bool _excludeUnmanagedApps;	// 9 = 0x9
    _Bool _deleteFeedback;	// 10 = 0xa
    unsigned long long _typeFilter;	// 16 = 0x10
    unsigned long long _stateFilter;	// 24 = 0x18
    NSArray *_bundleIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e346
+ (Class)whitelistedClassForResultObject;	// IMP=0x000000000001e335
- (void).cxx_destruct;	// IMP=0x000000000001e8af
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(nonatomic) unsigned long long stateFilter; // @synthesize stateFilter=_stateFilter;
@property(nonatomic) unsigned long long typeFilter; // @synthesize typeFilter=_typeFilter;
@property(nonatomic) _Bool deleteFeedback; // @synthesize deleteFeedback=_deleteFeedback;
@property(nonatomic) _Bool excludeUnmanagedApps; // @synthesize excludeUnmanagedApps=_excludeUnmanagedApps;
@property(nonatomic) _Bool excludeIcon; // @synthesize excludeIcon=_excludeIcon;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e5c9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e34e
- (id)init;	// IMP=0x000000000001e2e9

@end

