//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CoreDAVDenyItem
{
    NSMutableSet *_privileges;	// 56 = 0x38
}

+ (id)copyParseRules;	// IMP=0x000000000004f934
- (void).cxx_destruct;	// IMP=0x000000000004fbc9
@property(retain, nonatomic) NSMutableSet *privileges; // @synthesize privileges=_privileges;
- (void)addPrivilege:(id)arg1;	// IMP=0x000000000004fae2
- (void)write:(id)arg1;	// IMP=0x000000000004f70d
- (id)description;	// IMP=0x000000000004f63a
- (id)init;	// IMP=0x000000000004f614

@end
