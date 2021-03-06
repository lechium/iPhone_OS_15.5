//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKDPQLUpgradeInfo : NSObject
{
    _Bool _shouldVacuum;	// 8 = 0x8
    _Bool _shouldTruncateDatabase;	// 9 = 0x9
    unsigned long long _version;	// 16 = 0x10
    CDUnknownFunctionPointerType _upgradeFunction;	// 24 = 0x18
}

+ (id)upgradeInfoWithVersion:(unsigned long long)arg1 function:(CDUnknownFunctionPointerType)arg2 shouldVacuum:(_Bool)arg3 shouldTruncate:(_Bool)arg4;	// IMP=0x000000000031000f
@property(nonatomic) _Bool shouldTruncateDatabase; // @synthesize shouldTruncateDatabase=_shouldTruncateDatabase;
@property(nonatomic) _Bool shouldVacuum; // @synthesize shouldVacuum=_shouldVacuum;
@property(nonatomic) CDUnknownFunctionPointerType upgradeFunction; // @synthesize upgradeFunction=_upgradeFunction;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)initWithVersion:(unsigned long long)arg1 function:(CDUnknownFunctionPointerType)arg2 shouldVacuum:(_Bool)arg3 shouldTruncate:(_Bool)arg4;	// IMP=0x000000000030ffb1

@end

