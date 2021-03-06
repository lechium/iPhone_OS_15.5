//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterControlVerdict <NSSecureCoding, NSCopying>
{
    _Bool _updateRules;	// 40 = 0x28
    _Bool _handledByDataProvider;	// 41 = 0x29
}

+ (id)updateRules;	// IMP=0x000000000006d7fc
+ (id)dropVerdictWithUpdateRules:(_Bool)arg1;	// IMP=0x000000000006d794
+ (id)allowVerdictWithUpdateRules:(_Bool)arg1;	// IMP=0x000000000006d711
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006d440
@property _Bool handledByDataProvider; // @synthesize handledByDataProvider=_handledByDataProvider;
@property _Bool updateRules; // @synthesize updateRules=_updateRules;
- (id)init;	// IMP=0x000000000006d6c7
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000006d613
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d593
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006d4ea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006d448

@end

